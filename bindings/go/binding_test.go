package tree_sitter_racket_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_racket "github.com/tree-sitter/tree-sitter-racket/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_racket.Language())
	if language == nil {
		t.Errorf("Error loading Racket grammar")
	}
}
