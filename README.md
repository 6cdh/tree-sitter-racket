# tree-sitter-racket

[![Test](https://github.com/6cdh/tree-sitter-racket/actions/workflows/test.yml/badge.svg)](https://github.com/6cdh/tree-sitter-racket/actions/workflows/test.yml) [![Crates.io Version](https://img.shields.io/crates/v/tree-sitter-racket)](https://crates.io/crates/tree-sitter-racket) [![npm Version](https://img.shields.io/npm/v/@6cdh/tree-sitter-racket)](https://www.npmjs.com/package/@6cdh/tree-sitter-racket)

Racket parser for tree-sitter.

This grammar only implements the Racket language with the default readtable.

## Status

It should be complete and compatible with Racket 9.2.

There are no plans to add support for new language currently.

## News

**Breaking change (`graph`):** `graph` no longer has a `decimal` child.

The old rule used `[0-9]+` for the id. That was incorrect. The Racket Reader, 1.3.17, allows only 1-8 decimal digits. A bind (`#1=...`) is now `graph` plus the tagged datum. A reference (`#1#`) is a leaf `graph`.

Update queries that matched `(graph (decimal) ...)`.

Starting from June 24, 2023, ([commit](https://github.com/6cdh/tree-sitter-racket/commit/989c3e631a7f2d87bb6a66a5394870aaeb6c56e7)) or release 0.3.0, the external scanner was written in C.

## Build and Try

You need

* nodejs
* a C compiler

then run

```shell
npm install
npx tree-sitter parse [filename]
```

## Usage

See [nodes.md](./nodes.md) for all visible nodes.

## Reference

Racket

- [The Racket Reader](https://docs.racket-lang.org/reference/reader.html)

