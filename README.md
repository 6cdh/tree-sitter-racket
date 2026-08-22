# tree-sitter-racket

[![Test](https://github.com/6cdh/tree-sitter-racket/actions/workflows/test.yml/badge.svg)](https://github.com/6cdh/tree-sitter-racket/actions/workflows/test.yml) [![Crates.io Version](https://img.shields.io/crates/v/tree-sitter-racket)](https://crates.io/crates/tree-sitter-racket) [![npm Version](https://img.shields.io/npm/v/@6cdh/tree-sitter-racket)](https://www.npmjs.com/package/@6cdh/tree-sitter-racket)

Racket parser for tree-sitter.

This grammar only implements the Racket language with the default readtable.

## Status

It should be complete and compatible with Racket 9.2.

There are no plans to add support for new language currently.

## Versioning

From 0.25.0, this package uses SemVer. Its version number no longer matches
the upstream tree-sitter version.

Current tree-sitter dependency: 0.26.12 (ABI 15).

## News

### 0.25.0 (2026-08-22): breaking change to `graph`

`graph` no longer has a `decimal` child.

The old rule used `[0-9]+` for the id. That was incorrect. The Racket Reader,
1.3.17, allows only 1-8 decimal digits. A bind (`#1=...`) is now `graph` plus
the tagged datum. A reference (`#1#`) is a leaf `graph`.

Update queries that matched `(graph (decimal) ...)`.

### 0.3.0 (2023-06-24): external scanner in C

The external scanner was rewritten in C
([commit](https://github.com/6cdh/tree-sitter-racket/commit/989c3e631a7f2d87bb6a66a5394870aaeb6c56e7)).

## Contributing

See [CONTRIBUTING.md](./CONTRIBUTING.md) for setup, the tree-sitter CLI, and
the parser workflow.

## Usage

See [nodes.md](./nodes.md) for all visible nodes.

## Reference

Racket

- [The Racket Reader](https://docs.racket-lang.org/reference/reader.html)

