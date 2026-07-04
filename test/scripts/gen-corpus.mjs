#!/usr/bin/env node

import { mkdirSync, writeFileSync } from "node:fs";
import path from "node:path";
import { fileURLToPath } from "node:url";

const root = path.join(path.dirname(fileURLToPath(import.meta.url)), "../..");
const generatedDir = path.join(root, "test/corpus/generated");

const lineCommentCorpus = `===
line comment ends at U+000A LINE FEED
===
; before
after

---

(program
  (comment)
  (symbol))

===
line comment ends at CRLF
===
; before\r\nafter

---

(program
  (comment)
  (symbol))

===
line comment ends at U+000D CARRIAGE RETURN
===
; before\rafter

---

(program
  (comment)
  (symbol))

===
line comment ends at U+0085 NEXT LINE (NEL)
===
; before\u0085after

---

(program
  (comment)
  (symbol))

===
line comment ends at U+2028 LINE SEPARATOR
===
; before\u2028after

---

(program
  (comment)
  (symbol))

===
line comment ends at U+2029 PARAGRAPH SEPARATOR
===
; before\u2029after

---

(program
  (comment)
  (symbol))
`;

const hereStringCrlfCorpus = `===
here string CRLF empty terminator
===
#<<\r\n\r\n

---

(program
  (here_string))

===
here string CRLF repeated terminator line
===
;; NOTE: generated with CRLF line endings\r\n#<<\r\n#<<\r\n\r\n

---

(program
  (comment)
  (here_string))
`;

mkdirSync(generatedDir, { recursive: true });
writeFileSync(path.join(generatedDir, "line_comment_unicode.rkt"), lineCommentCorpus);
writeFileSync(path.join(generatedDir, "here_string_crlf.rkt"), hereStringCrlfCorpus);
