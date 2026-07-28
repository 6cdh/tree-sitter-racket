# tree-sitter-racket

[![Test](https://github.com/6cdh/tree-sitter-racket/actions/workflows/test.yml/badge.svg)](https://github.com/6cdh/tree-sitter-racket/actions/workflows/test.yml) [![Crates.io Version](https://img.shields.io/crates/v/tree-sitter-racket)](https://crates.io/crates/tree-sitter-racket) [![npm Version](https://img.shields.io/npm/v/@6cdh/tree-sitter-racket)](https://www.npmjs.com/package/@6cdh/tree-sitter-racket)

Parser de Racket para tree-sitter.

Esta gramática solo implementa el lenguaje Racket con la tabla de lectura (readtable) predeterminada.

## Estado

Debería estar completa y ser compatible con Racket 9.2.

Actualmente no hay planes para añadir soporte para nuevos lenguajes.

## Noticias

A partir del 24 de junio de 2023, ([commit](https://github.com/6cdh/tree-sitter-racket/commit/989c3e631a7f2d87bb6a66a5394870aaeb6c56e7)) o la versión 0.3.0, el escáner externo fue escrito en C.

## Construir y Probar

Necesitas

* nodejs
* un compilador de C

luego ejecuta

```shell
npm install
npx tree-sitter parse [filename]
```

## Uso

Consulta [nodes.md](./nodes.md) para ver todos los nodos visibles.

## Referencia

Racket

- [The Racket Reader](https://docs.racket-lang.org/reference/reader.html)
