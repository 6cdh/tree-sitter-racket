# Contributing

Thank you for contributing to `tree-sitter-racket`.

## Setup

You need Node.js, a C compiler, and the exact tree-sitter CLI from this
package's dependencies (0.26.12).

Use `npx tree-sitter` after npm install, or `tree-sitter` 0.26.12 on PATH. Do
not use a random system `tree-sitter`.

### npm

```shell
npm install --ignore-scripts
npm rebuild tree-sitter-cli
```

`--ignore-scripts` skips compiling the Node addon. `rebuild tree-sitter-cli`
downloads the CLI binary. Then use `npx tree-sitter`.

### cargo

```shell
cargo install --locked tree-sitter-cli@0.26.12
```

Then use `tree-sitter` on your PATH.

### nix

```shell
nix-shell
npm install --ignore-scripts
npm rebuild tree-sitter-cli
```

`nix-shell` puts `./node_modules/.bin` on `PATH`, so `tree-sitter` is the
dependency CLI after npm install.

## Parser workflow

```shell
# Write generated corpus tests
node test/scripts/gen-corpus.mjs
# Generate C source from grammar.js
npx tree-sitter generate
# Run parser tests
npx tree-sitter test
```

If the dependency CLI is on PATH, you can omit `npx`.

See also the [official setup](https://tree-sitter.github.io/tree-sitter/creating-parsers).
