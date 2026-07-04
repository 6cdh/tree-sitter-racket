#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 257
#define LARGE_STATE_COUNT 93
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym__skip_token1 = 1,
  sym_dot = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_POUND_PIPE = 4,
  aux_sym_block_comment_token1 = 5,
  anon_sym_PIPE_POUND = 6,
  anon_sym_POUND_SEMI = 7,
  sym__line_comment = 8,
  sym_boolean = 9,
  anon_sym_POUND = 10,
  anon_sym_POUND_LT_LT = 11,
  aux_sym_regex_token1 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym__real_string_token1 = 14,
  sym_escape_sequence = 15,
  sym_number = 16,
  sym_decimal = 17,
  sym_character = 18,
  sym_symbol = 19,
  sym_keyword = 20,
  anon_sym_POUND_AMP = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_POUNDfl = 28,
  anon_sym_POUNDfx = 29,
  anon_sym_POUNDs = 30,
  anon_sym_POUNDhash = 31,
  anon_sym_POUNDhashalw = 32,
  anon_sym_POUNDhasheq = 33,
  anon_sym_POUNDhasheqv = 34,
  anon_sym_EQ = 35,
  anon_sym_SQUOTE = 36,
  anon_sym_BQUOTE = 37,
  anon_sym_POUND_SQUOTE = 38,
  anon_sym_POUND_BQUOTE = 39,
  anon_sym_COMMA = 40,
  anon_sym_COMMA_AT = 41,
  anon_sym_POUND_COMMA = 42,
  anon_sym_POUND_COMMA_AT = 43,
  anon_sym_POUNDreader = 44,
  anon_sym_POUNDlang = 45,
  anon_sym_POUND_BANG = 46,
  sym_lang_name = 47,
  sym__here_string_body = 48,
  sym_program = 49,
  sym__token = 50,
  sym__skip = 51,
  sym_comment = 52,
  sym_block_comment = 53,
  sym_sexp_comment = 54,
  sym__datum = 55,
  sym_string = 56,
  sym_byte_string = 57,
  sym_here_string = 58,
  sym_regex = 59,
  sym__real_string = 60,
  sym_box = 61,
  sym_list = 62,
  sym_vector = 63,
  sym_structure = 64,
  sym_hash = 65,
  sym_graph = 66,
  sym_quote = 67,
  sym_quasiquote = 68,
  sym_syntax = 69,
  sym_quasisyntax = 70,
  sym_unquote = 71,
  sym_unquote_splicing = 72,
  sym_unsyntax = 73,
  sym_unsyntax_splicing = 74,
  sym_extension = 75,
  aux_sym_program_repeat1 = 76,
  aux_sym_block_comment_repeat1 = 77,
  aux_sym_sexp_comment_repeat1 = 78,
  aux_sym__real_string_repeat1 = 79,
  aux_sym_list_repeat1 = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__skip_token1] = "_skip_token1",
  [sym_dot] = "dot",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [anon_sym_POUND_SEMI] = "#;",
  [sym__line_comment] = "_line_comment",
  [sym_boolean] = "boolean",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_LT_LT] = "#<<",
  [aux_sym_regex_token1] = "regex_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__real_string_token1] = "_real_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_decimal] = "decimal",
  [sym_character] = "character",
  [sym_symbol] = "symbol",
  [sym_keyword] = "keyword",
  [anon_sym_POUND_AMP] = "#&",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUNDfl] = "#fl",
  [anon_sym_POUNDfx] = "#fx",
  [anon_sym_POUNDs] = "#s",
  [anon_sym_POUNDhash] = "#hash",
  [anon_sym_POUNDhashalw] = "#hashalw",
  [anon_sym_POUNDhasheq] = "#hasheq",
  [anon_sym_POUNDhasheqv] = "#hasheqv",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_POUND_BQUOTE] = "#`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_COMMA_AT] = "#,@",
  [anon_sym_POUNDreader] = "#reader",
  [anon_sym_POUNDlang] = "#lang ",
  [anon_sym_POUND_BANG] = "#!",
  [sym_lang_name] = "lang_name",
  [sym__here_string_body] = "_here_string_body",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__skip] = "_skip",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_sexp_comment] = "sexp_comment",
  [sym__datum] = "_datum",
  [sym_string] = "string",
  [sym_byte_string] = "byte_string",
  [sym_here_string] = "here_string",
  [sym_regex] = "regex",
  [sym__real_string] = "_real_string",
  [sym_box] = "box",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_structure] = "structure",
  [sym_hash] = "hash",
  [sym_graph] = "graph",
  [sym_quote] = "quote",
  [sym_quasiquote] = "quasiquote",
  [sym_syntax] = "syntax",
  [sym_quasisyntax] = "quasisyntax",
  [sym_unquote] = "unquote",
  [sym_unquote_splicing] = "unquote_splicing",
  [sym_unsyntax] = "unsyntax",
  [sym_unsyntax_splicing] = "unsyntax_splicing",
  [sym_extension] = "extension",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_sexp_comment_repeat1] = "sexp_comment_repeat1",
  [aux_sym__real_string_repeat1] = "_real_string_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__skip_token1] = aux_sym__skip_token1,
  [sym_dot] = sym_dot,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [sym__line_comment] = sym__line_comment,
  [sym_boolean] = sym_boolean,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_LT_LT] = anon_sym_POUND_LT_LT,
  [aux_sym_regex_token1] = aux_sym_regex_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__real_string_token1] = aux_sym__real_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_decimal] = sym_decimal,
  [sym_character] = sym_character,
  [sym_symbol] = sym_symbol,
  [sym_keyword] = sym_keyword,
  [anon_sym_POUND_AMP] = anon_sym_POUND_AMP,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUNDfl] = anon_sym_POUNDfl,
  [anon_sym_POUNDfx] = anon_sym_POUNDfx,
  [anon_sym_POUNDs] = anon_sym_POUNDs,
  [anon_sym_POUNDhash] = anon_sym_POUNDhash,
  [anon_sym_POUNDhashalw] = anon_sym_POUNDhashalw,
  [anon_sym_POUNDhasheq] = anon_sym_POUNDhasheq,
  [anon_sym_POUNDhasheqv] = anon_sym_POUNDhasheqv,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_POUND_BQUOTE] = anon_sym_POUND_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_COMMA_AT] = anon_sym_POUND_COMMA_AT,
  [anon_sym_POUNDreader] = anon_sym_POUNDreader,
  [anon_sym_POUNDlang] = anon_sym_POUNDlang,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [sym_lang_name] = sym_lang_name,
  [sym__here_string_body] = sym__here_string_body,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__skip] = sym__skip,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_sexp_comment] = sym_sexp_comment,
  [sym__datum] = sym__datum,
  [sym_string] = sym_string,
  [sym_byte_string] = sym_byte_string,
  [sym_here_string] = sym_here_string,
  [sym_regex] = sym_regex,
  [sym__real_string] = sym__real_string,
  [sym_box] = sym_box,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [sym_structure] = sym_structure,
  [sym_hash] = sym_hash,
  [sym_graph] = sym_graph,
  [sym_quote] = sym_quote,
  [sym_quasiquote] = sym_quasiquote,
  [sym_syntax] = sym_syntax,
  [sym_quasisyntax] = sym_quasisyntax,
  [sym_unquote] = sym_unquote,
  [sym_unquote_splicing] = sym_unquote_splicing,
  [sym_unsyntax] = sym_unsyntax,
  [sym_unsyntax_splicing] = sym_unsyntax_splicing,
  [sym_extension] = sym_extension,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_sexp_comment_repeat1] = aux_sym_sexp_comment_repeat1,
  [aux_sym__real_string_repeat1] = aux_sym__real_string_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__skip_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__line_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regex_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__real_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDfl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDfx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhashalw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhasheq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhasheqv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDreader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDlang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_lang_name] = {
    .visible = true,
    .named = true,
  },
  [sym__here_string_body] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__skip] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_sexp_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_string] = {
    .visible = true,
    .named = true,
  },
  [sym_here_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym__real_string] = {
    .visible = false,
    .named = true,
  },
  [sym_box] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_graph] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_quasisyntax] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_unsyntax] = {
    .visible = true,
    .named = true,
  },
  [sym_unsyntax_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_extension] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sexp_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__real_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 3,
  [10] = 4,
  [11] = 8,
  [12] = 5,
  [13] = 6,
  [14] = 7,
  [15] = 3,
  [16] = 4,
  [17] = 8,
  [18] = 5,
  [19] = 6,
  [20] = 7,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 37,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 24,
  [47] = 25,
  [48] = 48,
  [49] = 35,
  [50] = 23,
  [51] = 26,
  [52] = 27,
  [53] = 28,
  [54] = 29,
  [55] = 30,
  [56] = 31,
  [57] = 48,
  [58] = 33,
  [59] = 34,
  [60] = 36,
  [61] = 38,
  [62] = 37,
  [63] = 40,
  [64] = 41,
  [65] = 42,
  [66] = 43,
  [67] = 44,
  [68] = 45,
  [69] = 24,
  [70] = 25,
  [71] = 35,
  [72] = 23,
  [73] = 26,
  [74] = 27,
  [75] = 28,
  [76] = 29,
  [77] = 30,
  [78] = 31,
  [79] = 32,
  [80] = 33,
  [81] = 36,
  [82] = 38,
  [83] = 83,
  [84] = 83,
  [85] = 83,
  [86] = 40,
  [87] = 41,
  [88] = 42,
  [89] = 43,
  [90] = 44,
  [91] = 45,
  [92] = 32,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 101,
  [135] = 128,
  [136] = 129,
  [137] = 130,
  [138] = 131,
  [139] = 111,
  [140] = 112,
  [141] = 94,
  [142] = 95,
  [143] = 114,
  [144] = 97,
  [145] = 116,
  [146] = 119,
  [147] = 96,
  [148] = 99,
  [149] = 100,
  [150] = 127,
  [151] = 102,
  [152] = 104,
  [153] = 107,
  [154] = 106,
  [155] = 109,
  [156] = 93,
  [157] = 113,
  [158] = 103,
  [159] = 115,
  [160] = 105,
  [161] = 108,
  [162] = 122,
  [163] = 118,
  [164] = 110,
  [165] = 117,
  [166] = 98,
  [167] = 120,
  [168] = 123,
  [169] = 124,
  [170] = 125,
  [171] = 132,
  [172] = 126,
  [173] = 121,
  [174] = 120,
  [175] = 119,
  [176] = 96,
  [177] = 99,
  [178] = 100,
  [179] = 102,
  [180] = 104,
  [181] = 106,
  [182] = 107,
  [183] = 109,
  [184] = 98,
  [185] = 93,
  [186] = 113,
  [187] = 122,
  [188] = 117,
  [189] = 123,
  [190] = 124,
  [191] = 125,
  [192] = 126,
  [193] = 127,
  [194] = 116,
  [195] = 129,
  [196] = 130,
  [197] = 131,
  [198] = 111,
  [199] = 112,
  [200] = 95,
  [201] = 114,
  [202] = 97,
  [203] = 121,
  [204] = 101,
  [205] = 103,
  [206] = 105,
  [207] = 108,
  [208] = 118,
  [209] = 110,
  [210] = 132,
  [211] = 128,
  [212] = 212,
  [213] = 212,
  [214] = 212,
  [215] = 215,
  [216] = 215,
  [217] = 215,
  [218] = 218,
  [219] = 219,
  [220] = 218,
  [221] = 221,
  [222] = 219,
  [223] = 223,
  [224] = 221,
  [225] = 218,
  [226] = 219,
  [227] = 221,
  [228] = 219,
  [229] = 218,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 234,
  [236] = 233,
  [237] = 237,
  [238] = 231,
  [239] = 230,
  [240] = 233,
  [241] = 234,
  [242] = 232,
  [243] = 230,
  [244] = 231,
  [245] = 232,
  [246] = 121,
  [247] = 122,
  [248] = 248,
  [249] = 248,
  [250] = 248,
  [251] = 251,
  [252] = 252,
  [253] = 251,
  [254] = 254,
  [255] = 252,
  [256] = 251,
};

static TSCharacterRange aux_sym__skip_token1_character_set_1[] = {
  {'\t', '\r'}, {' ', ' '}, {0x85, 0x85}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f},
  {0x205f, 0x205f}, {0x3000, 0x3000},
};

static TSCharacterRange sym_escape_sequence_character_set_1[] = {
  {'\n', '\n'}, {'\r', '\r'}, {'"', '"'}, {'\'', '\''}, {'0', '7'}, {'U', 'U'}, {'\\', '\\'}, {'a', 'b'},
  {'e', 'f'}, {'n', 'n'}, {'r', 'r'}, {'t', 'v'}, {'x', 'x'},
};

static TSCharacterRange sym_symbol_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'#', '&'}, {'*', '+'}, {'-', ':'}, {'<', 'Z'}, {'\\', '\\'},
  {'^', '_'}, {'a', 'z'}, {'|', '|'}, {'~', 0x84}, {0x86, 0x9f}, {0xa1, 0x167f}, {0x1681, 0x1fff}, {0x200b, 0x2027},
  {0x202a, 0x202e}, {0x2030, 0x205e}, {0x2060, 0x2fff}, {0x3001, 0xfefe}, {0xff00, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(233);
      ADVANCE_MAP(
        '"', 256,
        '#', 252,
        '\'', 470,
        '(', 456,
        ')', 457,
        ',', 474,
        '.', 235,
        ';', 237,
        '=', 469,
        '[', 458,
        ']', 459,
        '`', 471,
        '{', 460,
        '|', 240,
        '}', 461,
      );
      if (set_contains(aux_sym__skip_token1_character_set_1, 10, lookahead)) ADVANCE(234);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(259);
      if (lookahead == 'U') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(228);
      if (lookahead == 'x') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(261);
      if (set_contains(sym_escape_sequence_character_set_1, 13, lookahead)) ADVANCE(258);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(480);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 256,
        '#', 250,
        '\'', 470,
        '(', 456,
        ')', 457,
        ',', 475,
        '.', 236,
        ';', 237,
        '[', 458,
        '\\', 230,
        ']', 459,
        '`', 471,
        '{', 460,
        '|', 114,
        '}', 461,
        '+', 421,
        '-', 421,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (set_contains(aux_sym__skip_token1_character_set_1, 10, lookahead)) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != 0xfeff) ADVANCE(453);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 256,
        '#', 251,
        '\'', 470,
        '(', 456,
        ',', 475,
        '.', 445,
        ';', 237,
        '[', 458,
        '\\', 230,
        '`', 471,
        '{', 460,
        '|', 114,
        '+', 421,
        '-', 421,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (set_contains(aux_sym__skip_token1_character_set_1, 10, lookahead)) ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 0xfeff) ADVANCE(453);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '=') ADVANCE(469);
      if (lookahead == '[') ADVANCE(458);
      if (lookahead == '{') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(276);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '#', 12,
        '.', 16,
        '/', 223,
        'I', 269,
        'i', 269,
        'L', 131,
        'S', 131,
        'l', 131,
        's', 131,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '#', 12,
        '.', 15,
        '/', 223,
        'I', 269,
        'i', 269,
        'L', 131,
        'S', 131,
        'l', 131,
        's', 131,
      );
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '|') ADVANCE(240);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(342);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(26);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(170);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(187);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(288);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(186);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(324);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(348);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(184);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(344);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(9);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(356);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(356);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(332);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(386);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(352);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(171);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(185);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(172);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(188);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(173);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(189);
      END_STATE();
    case 63:
      if (lookahead == '<') ADVANCE(253);
      END_STATE();
    case 64:
      ADVANCE_MAP(
        'U', 413,
        'b', 396,
        'l', 401,
        'n', 399,
        'p', 397,
        'r', 400,
        's', 403,
        't', 398,
        'u', 409,
        'v', 404,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(395);
      END_STATE();
    case 65:
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '|') ADVANCE(115);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(454);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(395);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(255);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(2);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(465);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(105);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 100:
      if (lookahead == 'q') ADVANCE(467);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 111:
      if (lookahead == 'w') ADVANCE(466);
      END_STATE();
    case 112:
      if (lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 113:
      if (lookahead == 'x') ADVANCE(255);
      END_STATE();
    case 114:
      if (lookahead == '|') ADVANCE(453);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 115:
      if (lookahead == '|') ADVANCE(454);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(245);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(176);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(390);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(177);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(367);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(391);
      END_STATE();
    case 122:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 123:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 124:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(373);
      END_STATE();
    case 125:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(366);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 127:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 128:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(155);
      END_STATE();
    case 129:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 130:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(372);
      END_STATE();
    case 131:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 132:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 143:
      ADVANCE_MAP(
        'B', 35,
        'b', 35,
        'D', 32,
        'd', 32,
        'O', 43,
        'o', 43,
        'X', 38,
        'x', 38,
      );
      END_STATE();
    case 144:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 145:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 146:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 147:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 148:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 149:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 150:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 151:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 152:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 153:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(155);
      END_STATE();
    case 156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(156);
      END_STATE();
    case 157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 170:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(365);
      END_STATE();
    case 171:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(368);
      END_STATE();
    case 172:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(371);
      END_STATE();
    case 173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(374);
      END_STATE();
    case 174:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(286);
      END_STATE();
    case 175:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      END_STATE();
    case 176:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(390);
      END_STATE();
    case 177:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(367);
      END_STATE();
    case 178:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(330);
      END_STATE();
    case 179:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(366);
      END_STATE();
    case 180:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      END_STATE();
    case 181:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 182:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(338);
      END_STATE();
    case 183:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(155);
      END_STATE();
    case 184:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(269);
      END_STATE();
    case 185:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(365);
      END_STATE();
    case 186:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 187:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(368);
      END_STATE();
    case 188:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(371);
      END_STATE();
    case 189:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(374);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(414);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(395);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(346);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(391);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(373);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(350);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(372);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(360);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(26);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(358);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(156);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 229:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 230:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 231:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 232:
      if (eof) ADVANCE(233);
      ADVANCE_MAP(
        '"', 256,
        '#', 250,
        '\'', 470,
        '(', 456,
        ',', 475,
        '.', 445,
        ';', 237,
        '[', 458,
        '\\', 230,
        '`', 471,
        '{', 460,
        '|', 114,
        '+', 421,
        '-', 421,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (set_contains(aux_sym__skip_token1_character_set_1, 10, lookahead)) ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 0xfeff) ADVANCE(453);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__skip_token1);
      if (set_contains(aux_sym__skip_token1_character_set_1, 10, lookahead)) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x85 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(238);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 0x85 ||
          lookahead == 0x2028 ||
          lookahead == 0x2029) ADVANCE(245);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x85 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(462);
      if (lookahead == 'x') ADVANCE(463);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_POUND);
      ADVANCE_MAP(
        '!', 481,
        '%', 453,
        '&', 455,
        '\'', 472,
        ',', 477,
        ':', 65,
        ';', 243,
        '<', 63,
        '\\', 64,
        '`', 473,
        'f', 247,
        'h', 66,
        'l', 67,
        'p', 113,
        'r', 82,
        's', 464,
        't', 248,
        '|', 238,
        'B', 7,
        'b', 7,
        'C', 194,
        'c', 194,
        'D', 18,
        'd', 18,
        'F', 246,
        'T', 246,
        'O', 23,
        'o', 23,
        'X', 28,
        'x', 28,
        'E', 8,
        'I', 8,
        'e', 8,
        'i', 8,
      );
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_POUND);
      ADVANCE_MAP(
        '!', 116,
        '%', 453,
        '&', 455,
        '\'', 472,
        ',', 477,
        ':', 65,
        ';', 243,
        '<', 63,
        '\\', 64,
        '`', 473,
        'f', 247,
        'h', 66,
        'p', 113,
        'r', 113,
        's', 464,
        't', 248,
        '|', 238,
        'B', 7,
        'b', 7,
        'C', 194,
        'c', 194,
        'D', 18,
        'd', 18,
        'F', 246,
        'T', 246,
        'O', 23,
        'o', 23,
        'X', 28,
        'x', 28,
        'E', 8,
        'I', 8,
        'e', 8,
        'i', 8,
      );
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(238);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_POUND_LT_LT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(258);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 271,
        '.', 272,
        '/', 445,
        '@', 423,
        '\\', 230,
        '|', 114,
        '+', 425,
        '-', 425,
        'T', 426,
        't', 426,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 271,
        '.', 273,
        '/', 445,
        '@', 423,
        '\\', 230,
        '|', 114,
        '+', 425,
        '-', 425,
        'T', 426,
        't', 426,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(427);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 273,
        '@', 423,
        '\\', 230,
        '|', 114,
        '+', 425,
        '-', 425,
        'T', 426,
        't', 426,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 273,
        '@', 423,
        '\\', 230,
        '|', 114,
        '+', 425,
        '-', 425,
        'T', 426,
        't', 426,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(427);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 275,
        '.', 282,
        '/', 446,
        '@', 423,
        '\\', 230,
        '|', 114,
        '+', 425,
        '-', 425,
        'I', 380,
        'i', 380,
        'T', 426,
        't', 426,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 275,
        '.', 283,
        '/', 446,
        '@', 423,
        '\\', 230,
        '|', 114,
        '+', 425,
        '-', 425,
        'I', 380,
        'i', 380,
        'T', 426,
        't', 426,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(428);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 277,
        '.', 286,
        '/', 174,
        '@', 40,
        '+', 46,
        '-', 46,
        'T', 117,
        't', 117,
        '0', 276,
        '1', 276,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 277,
        '.', 287,
        '/', 174,
        '@', 40,
        '+', 46,
        '-', 46,
        'T', 117,
        't', 117,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 279,
        '.', 291,
        '/', 216,
        '@', 44,
        '+', 51,
        '-', 51,
        'T', 118,
        't', 118,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 279,
        '.', 290,
        '/', 216,
        '@', 44,
        '+', 51,
        '-', 51,
        'T', 118,
        't', 118,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 283,
        '@', 423,
        '\\', 230,
        '|', 114,
        '+', 425,
        '-', 425,
        'I', 380,
        'i', 380,
        'T', 426,
        't', 426,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 283,
        '@', 423,
        '\\', 230,
        '|', 114,
        '+', 425,
        '-', 425,
        'I', 380,
        'i', 380,
        'T', 426,
        't', 426,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(428);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '/') ADVANCE(450);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(450);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(426);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(286);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 289,
        '.', 300,
        '/', 175,
        '@', 40,
        '+', 46,
        '-', 46,
        'I', 269,
        'i', 269,
        'T', 117,
        't', 117,
        '0', 288,
        '1', 288,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 289,
        '.', 301,
        '/', 175,
        '@', 40,
        '+', 46,
        '-', 46,
        'I', 269,
        'i', 269,
        'T', 117,
        't', 117,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 290,
        '@', 44,
        '+', 51,
        '-', 51,
        'T', 118,
        't', 118,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 290,
        '@', 44,
        '+', 51,
        '-', 51,
        'T', 118,
        't', 118,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 293,
        '.', 307,
        '/', 217,
        '@', 44,
        '+', 51,
        '-', 51,
        'I', 269,
        'i', 269,
        'T', 118,
        't', 118,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 293,
        '.', 306,
        '/', 217,
        '@', 44,
        '+', 51,
        '-', 51,
        'I', 269,
        'i', 269,
        'T', 118,
        't', 118,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 297,
        '.', 311,
        '/', 211,
        '@', 47,
        '+', 52,
        '-', 52,
        'I', 269,
        'i', 269,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 297,
        '.', 310,
        '/', 211,
        '@', 47,
        '+', 52,
        '-', 52,
        'I', 269,
        'i', 269,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(426);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 301,
        '@', 40,
        '+', 46,
        '-', 46,
        'I', 269,
        'i', 269,
        'T', 117,
        't', 117,
        '0', 300,
        '1', 300,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 301,
        '@', 40,
        '+', 46,
        '-', 46,
        'I', 269,
        'i', 269,
        'T', 117,
        't', 117,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(180);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 305,
        '.', 315,
        '/', 220,
        '@', 44,
        '+', 51,
        '-', 51,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 305,
        '.', 314,
        '/', 220,
        '@', 44,
        '+', 51,
        '-', 51,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 306,
        '@', 44,
        '+', 51,
        '-', 51,
        'I', 269,
        'i', 269,
        'T', 118,
        't', 118,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 306,
        '@', 44,
        '+', 51,
        '-', 51,
        'I', 269,
        'i', 269,
        'T', 118,
        't', 118,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(313);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 314,
        '@', 44,
        '+', 51,
        '-', 51,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 314,
        '@', 44,
        '+', 51,
        '-', 51,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 317,
        '.', 321,
        '/', 224,
        '@', 44,
        '+', 51,
        '-', 51,
        'I', 269,
        'i', 269,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 317,
        '.', 320,
        '/', 224,
        '@', 44,
        '+', 51,
        '-', 51,
        'I', 269,
        'i', 269,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 320,
        '@', 44,
        '+', 51,
        '-', 51,
        'I', 269,
        'i', 269,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 320,
        '@', 44,
        '+', 51,
        '-', 51,
        'I', 269,
        'i', 269,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 323,
        '.', 327,
        '/', 206,
        '@', 47,
        '+', 52,
        '-', 52,
        'T', 120,
        't', 120,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 323,
        '.', 326,
        '/', 206,
        '@', 47,
        '+', 52,
        '-', 52,
        'T', 120,
        't', 120,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(325);
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(324);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(325);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 329,
        '.', 335,
        '/', 208,
        '@', 47,
        '+', 52,
        '-', 52,
        'I', 269,
        'i', 269,
        'T', 120,
        't', 120,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 329,
        '.', 334,
        '/', 208,
        '@', 47,
        '+', 52,
        '-', 52,
        'I', 269,
        'i', 269,
        'T', 120,
        't', 120,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(331);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(330);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(331);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 333,
        '.', 338,
        '/', 182,
        '@', 40,
        '+', 46,
        '-', 46,
        'I', 269,
        'i', 269,
        '0', 332,
        '1', 332,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 333,
        '.', 339,
        '/', 182,
        '@', 40,
        '+', 46,
        '-', 46,
        'I', 269,
        'i', 269,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 334,
        '@', 47,
        '+', 52,
        '-', 52,
        'I', 269,
        'i', 269,
        'T', 120,
        't', 120,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 334,
        '@', 47,
        '+', 52,
        '-', 52,
        'I', 269,
        'i', 269,
        'T', 120,
        't', 120,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(213);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '/') ADVANCE(213);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(338);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(340);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(340);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 343,
        '.', 346,
        '/', 196,
        '@', 49,
        '+', 53,
        '-', 53,
        'T', 121,
        't', 121,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(342);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 343,
        '.', 347,
        '/', 196,
        '@', 49,
        '+', 53,
        '-', 53,
        'T', 121,
        't', 121,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(344);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(346);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 349,
        '.', 354,
        '/', 197,
        '@', 49,
        '+', 53,
        '-', 53,
        'I', 269,
        'i', 269,
        'T', 121,
        't', 121,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(348);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 349,
        '.', 355,
        '/', 197,
        '@', 49,
        '+', 53,
        '-', 53,
        'I', 269,
        'i', 269,
        'T', 121,
        't', 121,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(351);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(350);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(351);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 353,
        '.', 358,
        '/', 204,
        '@', 49,
        '+', 53,
        '-', 53,
        'I', 269,
        'i', 269,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(352);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 353,
        '.', 359,
        '/', 204,
        '@', 49,
        '+', 53,
        '-', 53,
        'I', 269,
        'i', 269,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 355,
        '@', 49,
        '+', 53,
        '-', 53,
        'I', 269,
        'i', 269,
        'T', 121,
        't', 121,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 355,
        '@', 49,
        '+', 53,
        '-', 53,
        'I', 269,
        'i', 269,
        'T', 121,
        't', 121,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '.') ADVANCE(360);
      if (lookahead == '/') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(356);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '.') ADVANCE(361);
      if (lookahead == '/') ADVANCE(202);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(359);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(358);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(359);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(360);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(361);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(425);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(425);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(433);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(195);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(412);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '/') ADVANCE(451);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '/') ADVANCE(451);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(429);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(429);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(442);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(377);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(419);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(420);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(422);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(419);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(420);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(422);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(435);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(363);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(380);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(437);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '|') ADVANCE(114);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '|') ADVANCE(115);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_POUNDhashalw);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(468);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(245);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_lang_name);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 232},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 232},
  [22] = {.lex_state = 232},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 232},
  [135] = {.lex_state = 232},
  [136] = {.lex_state = 232},
  [137] = {.lex_state = 232},
  [138] = {.lex_state = 232},
  [139] = {.lex_state = 232},
  [140] = {.lex_state = 232},
  [141] = {.lex_state = 232},
  [142] = {.lex_state = 232},
  [143] = {.lex_state = 232},
  [144] = {.lex_state = 232},
  [145] = {.lex_state = 232},
  [146] = {.lex_state = 232},
  [147] = {.lex_state = 232},
  [148] = {.lex_state = 232},
  [149] = {.lex_state = 232},
  [150] = {.lex_state = 232},
  [151] = {.lex_state = 232},
  [152] = {.lex_state = 232},
  [153] = {.lex_state = 232},
  [154] = {.lex_state = 232},
  [155] = {.lex_state = 232},
  [156] = {.lex_state = 232},
  [157] = {.lex_state = 232},
  [158] = {.lex_state = 232},
  [159] = {.lex_state = 232},
  [160] = {.lex_state = 232},
  [161] = {.lex_state = 232},
  [162] = {.lex_state = 232},
  [163] = {.lex_state = 232},
  [164] = {.lex_state = 232},
  [165] = {.lex_state = 232},
  [166] = {.lex_state = 232},
  [167] = {.lex_state = 232},
  [168] = {.lex_state = 232},
  [169] = {.lex_state = 232},
  [170] = {.lex_state = 232},
  [171] = {.lex_state = 232},
  [172] = {.lex_state = 232},
  [173] = {.lex_state = 232},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 17},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 17},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 232},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 232},
  [234] = {.lex_state = 232},
  [235] = {.lex_state = 232},
  [236] = {.lex_state = 232},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 232},
  [240] = {.lex_state = 232},
  [241] = {.lex_state = 232},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 232},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 6},
  [246] = {.lex_state = 17},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 232},
  [249] = {.lex_state = 232},
  [250] = {.lex_state = 232},
  [251] = {.lex_state = 0, .external_lex_state = 1},
  [252] = {.lex_state = 229},
  [253] = {.lex_state = 0, .external_lex_state = 1},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 229},
  [256] = {.lex_state = 0, .external_lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__skip_token1] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym_block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__here_string_body] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(254),
    [sym__token] = STATE(21),
    [sym__skip] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_sexp_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_byte_string] = STATE(21),
    [sym_here_string] = STATE(21),
    [sym_regex] = STATE(21),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_structure] = STATE(21),
    [sym_hash] = STATE(21),
    [sym_graph] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_quasiquote] = STATE(21),
    [sym_syntax] = STATE(21),
    [sym_quasisyntax] = STATE(21),
    [sym_unquote] = STATE(21),
    [sym_unquote_splicing] = STATE(21),
    [sym_unsyntax] = STATE(21),
    [sym_unsyntax_splicing] = STATE(21),
    [sym_extension] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__skip_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(13),
    [sym_character] = ACTIONS(5),
    [sym_symbol] = ACTIONS(13),
    [sym_keyword] = ACTIONS(5),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUNDreader] = ACTIONS(55),
    [anon_sym_POUNDlang] = ACTIONS(57),
    [anon_sym_POUND_BANG] = ACTIONS(59),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(61),
    [sym_dot] = ACTIONS(64),
    [aux_sym_comment_token1] = ACTIONS(67),
    [anon_sym_POUND_PIPE] = ACTIONS(70),
    [anon_sym_POUND_SEMI] = ACTIONS(73),
    [sym__line_comment] = ACTIONS(67),
    [sym_boolean] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_POUND_LT_LT] = ACTIONS(79),
    [aux_sym_regex_token1] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_number] = ACTIONS(64),
    [sym_character] = ACTIONS(61),
    [sym_symbol] = ACTIONS(64),
    [sym_keyword] = ACTIONS(61),
    [anon_sym_POUND_AMP] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_POUNDfl] = ACTIONS(102),
    [anon_sym_POUNDfx] = ACTIONS(102),
    [anon_sym_POUNDs] = ACTIONS(105),
    [anon_sym_POUNDhash] = ACTIONS(108),
    [anon_sym_POUNDhashalw] = ACTIONS(111),
    [anon_sym_POUNDhasheq] = ACTIONS(108),
    [anon_sym_POUNDhasheqv] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [anon_sym_POUND_SQUOTE] = ACTIONS(120),
    [anon_sym_POUND_BQUOTE] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_COMMA_AT] = ACTIONS(129),
    [anon_sym_POUND_COMMA] = ACTIONS(132),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(135),
    [anon_sym_POUNDreader] = ACTIONS(138),
    [anon_sym_POUNDlang] = ACTIONS(141),
    [anon_sym_POUND_BANG] = ACTIONS(144),
  },
  [3] = {
    [sym__token] = STATE(5),
    [sym__skip] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym_sexp_comment] = STATE(5),
    [sym__datum] = STATE(5),
    [sym_string] = STATE(5),
    [sym_byte_string] = STATE(5),
    [sym_here_string] = STATE(5),
    [sym_regex] = STATE(5),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(5),
    [sym_list] = STATE(5),
    [sym_vector] = STATE(5),
    [sym_structure] = STATE(5),
    [sym_hash] = STATE(5),
    [sym_graph] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_quasiquote] = STATE(5),
    [sym_syntax] = STATE(5),
    [sym_quasisyntax] = STATE(5),
    [sym_unquote] = STATE(5),
    [sym_unquote_splicing] = STATE(5),
    [sym_unsyntax] = STATE(5),
    [sym_unsyntax_splicing] = STATE(5),
    [sym_extension] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym__skip_token1] = ACTIONS(147),
    [sym_dot] = ACTIONS(149),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(149),
    [sym_character] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_keyword] = ACTIONS(147),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [4] = {
    [sym__token] = STATE(6),
    [sym__skip] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym_sexp_comment] = STATE(6),
    [sym__datum] = STATE(6),
    [sym_string] = STATE(6),
    [sym_byte_string] = STATE(6),
    [sym_here_string] = STATE(6),
    [sym_regex] = STATE(6),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(6),
    [sym_list] = STATE(6),
    [sym_vector] = STATE(6),
    [sym_structure] = STATE(6),
    [sym_hash] = STATE(6),
    [sym_graph] = STATE(6),
    [sym_quote] = STATE(6),
    [sym_quasiquote] = STATE(6),
    [sym_syntax] = STATE(6),
    [sym_quasisyntax] = STATE(6),
    [sym_unquote] = STATE(6),
    [sym_unquote_splicing] = STATE(6),
    [sym_unsyntax] = STATE(6),
    [sym_unsyntax_splicing] = STATE(6),
    [sym_extension] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
    [aux_sym__skip_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [5] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [sym_symbol] = ACTIONS(211),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [6] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [sym_symbol] = ACTIONS(211),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [7] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [sym_symbol] = ACTIONS(211),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [8] = {
    [sym__token] = STATE(7),
    [sym__skip] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_sexp_comment] = STATE(7),
    [sym__datum] = STATE(7),
    [sym_string] = STATE(7),
    [sym_byte_string] = STATE(7),
    [sym_here_string] = STATE(7),
    [sym_regex] = STATE(7),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(7),
    [sym_list] = STATE(7),
    [sym_vector] = STATE(7),
    [sym_structure] = STATE(7),
    [sym_hash] = STATE(7),
    [sym_graph] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_quasiquote] = STATE(7),
    [sym_syntax] = STATE(7),
    [sym_quasisyntax] = STATE(7),
    [sym_unquote] = STATE(7),
    [sym_unquote_splicing] = STATE(7),
    [sym_unsyntax] = STATE(7),
    [sym_unsyntax_splicing] = STATE(7),
    [sym_extension] = STATE(7),
    [aux_sym_list_repeat1] = STATE(7),
    [aux_sym__skip_token1] = ACTIONS(215),
    [sym_dot] = ACTIONS(217),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(217),
    [sym_character] = ACTIONS(215),
    [sym_symbol] = ACTIONS(217),
    [sym_keyword] = ACTIONS(215),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [9] = {
    [sym__token] = STATE(12),
    [sym__skip] = STATE(12),
    [sym_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_sexp_comment] = STATE(12),
    [sym__datum] = STATE(12),
    [sym_string] = STATE(12),
    [sym_byte_string] = STATE(12),
    [sym_here_string] = STATE(12),
    [sym_regex] = STATE(12),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(12),
    [sym_list] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_structure] = STATE(12),
    [sym_hash] = STATE(12),
    [sym_graph] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_quasiquote] = STATE(12),
    [sym_syntax] = STATE(12),
    [sym_quasisyntax] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym_unquote_splicing] = STATE(12),
    [sym_unsyntax] = STATE(12),
    [sym_unsyntax_splicing] = STATE(12),
    [sym_extension] = STATE(12),
    [aux_sym_list_repeat1] = STATE(12),
    [aux_sym__skip_token1] = ACTIONS(219),
    [sym_dot] = ACTIONS(221),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(221),
    [sym_character] = ACTIONS(219),
    [sym_symbol] = ACTIONS(221),
    [sym_keyword] = ACTIONS(219),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [10] = {
    [sym__token] = STATE(13),
    [sym__skip] = STATE(13),
    [sym_comment] = STATE(13),
    [sym_block_comment] = STATE(13),
    [sym_sexp_comment] = STATE(13),
    [sym__datum] = STATE(13),
    [sym_string] = STATE(13),
    [sym_byte_string] = STATE(13),
    [sym_here_string] = STATE(13),
    [sym_regex] = STATE(13),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(13),
    [sym_list] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_structure] = STATE(13),
    [sym_hash] = STATE(13),
    [sym_graph] = STATE(13),
    [sym_quote] = STATE(13),
    [sym_quasiquote] = STATE(13),
    [sym_syntax] = STATE(13),
    [sym_quasisyntax] = STATE(13),
    [sym_unquote] = STATE(13),
    [sym_unquote_splicing] = STATE(13),
    [sym_unsyntax] = STATE(13),
    [sym_unsyntax_splicing] = STATE(13),
    [sym_extension] = STATE(13),
    [aux_sym_list_repeat1] = STATE(13),
    [aux_sym__skip_token1] = ACTIONS(225),
    [sym_dot] = ACTIONS(227),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(227),
    [sym_character] = ACTIONS(225),
    [sym_symbol] = ACTIONS(227),
    [sym_keyword] = ACTIONS(225),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [11] = {
    [sym__token] = STATE(14),
    [sym__skip] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_sexp_comment] = STATE(14),
    [sym__datum] = STATE(14),
    [sym_string] = STATE(14),
    [sym_byte_string] = STATE(14),
    [sym_here_string] = STATE(14),
    [sym_regex] = STATE(14),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_structure] = STATE(14),
    [sym_hash] = STATE(14),
    [sym_graph] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_quasiquote] = STATE(14),
    [sym_syntax] = STATE(14),
    [sym_quasisyntax] = STATE(14),
    [sym_unquote] = STATE(14),
    [sym_unquote_splicing] = STATE(14),
    [sym_unsyntax] = STATE(14),
    [sym_unsyntax_splicing] = STATE(14),
    [sym_extension] = STATE(14),
    [aux_sym_list_repeat1] = STATE(14),
    [aux_sym__skip_token1] = ACTIONS(229),
    [sym_dot] = ACTIONS(231),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(231),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(231),
    [sym_character] = ACTIONS(229),
    [sym_symbol] = ACTIONS(231),
    [sym_keyword] = ACTIONS(229),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [12] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [sym_symbol] = ACTIONS(211),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [13] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [sym_symbol] = ACTIONS(211),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [14] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [sym_symbol] = ACTIONS(211),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [15] = {
    [sym__token] = STATE(18),
    [sym__skip] = STATE(18),
    [sym_comment] = STATE(18),
    [sym_block_comment] = STATE(18),
    [sym_sexp_comment] = STATE(18),
    [sym__datum] = STATE(18),
    [sym_string] = STATE(18),
    [sym_byte_string] = STATE(18),
    [sym_here_string] = STATE(18),
    [sym_regex] = STATE(18),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_structure] = STATE(18),
    [sym_hash] = STATE(18),
    [sym_graph] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_quasiquote] = STATE(18),
    [sym_syntax] = STATE(18),
    [sym_quasisyntax] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_unquote_splicing] = STATE(18),
    [sym_unsyntax] = STATE(18),
    [sym_unsyntax_splicing] = STATE(18),
    [sym_extension] = STATE(18),
    [aux_sym_list_repeat1] = STATE(18),
    [aux_sym__skip_token1] = ACTIONS(235),
    [sym_dot] = ACTIONS(237),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(237),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(237),
    [sym_character] = ACTIONS(235),
    [sym_symbol] = ACTIONS(237),
    [sym_keyword] = ACTIONS(235),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [16] = {
    [sym__token] = STATE(19),
    [sym__skip] = STATE(19),
    [sym_comment] = STATE(19),
    [sym_block_comment] = STATE(19),
    [sym_sexp_comment] = STATE(19),
    [sym__datum] = STATE(19),
    [sym_string] = STATE(19),
    [sym_byte_string] = STATE(19),
    [sym_here_string] = STATE(19),
    [sym_regex] = STATE(19),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(19),
    [sym_list] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_structure] = STATE(19),
    [sym_hash] = STATE(19),
    [sym_graph] = STATE(19),
    [sym_quote] = STATE(19),
    [sym_quasiquote] = STATE(19),
    [sym_syntax] = STATE(19),
    [sym_quasisyntax] = STATE(19),
    [sym_unquote] = STATE(19),
    [sym_unquote_splicing] = STATE(19),
    [sym_unsyntax] = STATE(19),
    [sym_unsyntax_splicing] = STATE(19),
    [sym_extension] = STATE(19),
    [aux_sym_list_repeat1] = STATE(19),
    [aux_sym__skip_token1] = ACTIONS(241),
    [sym_dot] = ACTIONS(243),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(243),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(243),
    [sym_character] = ACTIONS(241),
    [sym_symbol] = ACTIONS(243),
    [sym_keyword] = ACTIONS(241),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [17] = {
    [sym__token] = STATE(20),
    [sym__skip] = STATE(20),
    [sym_comment] = STATE(20),
    [sym_block_comment] = STATE(20),
    [sym_sexp_comment] = STATE(20),
    [sym__datum] = STATE(20),
    [sym_string] = STATE(20),
    [sym_byte_string] = STATE(20),
    [sym_here_string] = STATE(20),
    [sym_regex] = STATE(20),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(20),
    [sym_list] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_structure] = STATE(20),
    [sym_hash] = STATE(20),
    [sym_graph] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_quasiquote] = STATE(20),
    [sym_syntax] = STATE(20),
    [sym_quasisyntax] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym_unquote_splicing] = STATE(20),
    [sym_unsyntax] = STATE(20),
    [sym_unsyntax_splicing] = STATE(20),
    [sym_extension] = STATE(20),
    [aux_sym_list_repeat1] = STATE(20),
    [aux_sym__skip_token1] = ACTIONS(245),
    [sym_dot] = ACTIONS(247),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(247),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(247),
    [sym_character] = ACTIONS(245),
    [sym_symbol] = ACTIONS(247),
    [sym_keyword] = ACTIONS(245),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [18] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [sym_symbol] = ACTIONS(211),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [19] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [sym_symbol] = ACTIONS(211),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [20] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_POUND_PIPE] = ACTIONS(153),
    [anon_sym_POUND_SEMI] = ACTIONS(155),
    [sym__line_comment] = ACTIONS(151),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [sym_symbol] = ACTIONS(211),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
    [anon_sym_POUNDreader] = ACTIONS(199),
    [anon_sym_POUNDlang] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(203),
  },
  [21] = {
    [sym__token] = STATE(22),
    [sym__skip] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_sexp_comment] = STATE(22),
    [sym__datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_byte_string] = STATE(22),
    [sym_here_string] = STATE(22),
    [sym_regex] = STATE(22),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_structure] = STATE(22),
    [sym_hash] = STATE(22),
    [sym_graph] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_quasiquote] = STATE(22),
    [sym_syntax] = STATE(22),
    [sym_quasisyntax] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym_unquote_splicing] = STATE(22),
    [sym_unsyntax] = STATE(22),
    [sym_unsyntax_splicing] = STATE(22),
    [sym_extension] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym__skip_token1] = ACTIONS(253),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(255),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(255),
    [sym_character] = ACTIONS(253),
    [sym_symbol] = ACTIONS(255),
    [sym_keyword] = ACTIONS(253),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
    [anon_sym_POUNDreader] = ACTIONS(55),
    [anon_sym_POUNDlang] = ACTIONS(57),
    [anon_sym_POUND_BANG] = ACTIONS(59),
  },
  [22] = {
    [sym__token] = STATE(22),
    [sym__skip] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_sexp_comment] = STATE(22),
    [sym__datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_byte_string] = STATE(22),
    [sym_here_string] = STATE(22),
    [sym_regex] = STATE(22),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_structure] = STATE(22),
    [sym_hash] = STATE(22),
    [sym_graph] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_quasiquote] = STATE(22),
    [sym_syntax] = STATE(22),
    [sym_quasisyntax] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym_unquote_splicing] = STATE(22),
    [sym_unsyntax] = STATE(22),
    [sym_unsyntax_splicing] = STATE(22),
    [sym_extension] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(257),
    [aux_sym__skip_token1] = ACTIONS(259),
    [aux_sym_comment_token1] = ACTIONS(262),
    [anon_sym_POUND_PIPE] = ACTIONS(265),
    [anon_sym_POUND_SEMI] = ACTIONS(268),
    [sym__line_comment] = ACTIONS(262),
    [sym_boolean] = ACTIONS(271),
    [anon_sym_POUND] = ACTIONS(274),
    [anon_sym_POUND_LT_LT] = ACTIONS(277),
    [aux_sym_regex_token1] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [sym_number] = ACTIONS(271),
    [sym_character] = ACTIONS(259),
    [sym_symbol] = ACTIONS(271),
    [sym_keyword] = ACTIONS(259),
    [anon_sym_POUND_AMP] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_POUNDfl] = ACTIONS(298),
    [anon_sym_POUNDfx] = ACTIONS(298),
    [anon_sym_POUNDs] = ACTIONS(301),
    [anon_sym_POUNDhash] = ACTIONS(304),
    [anon_sym_POUNDhashalw] = ACTIONS(307),
    [anon_sym_POUNDhasheq] = ACTIONS(304),
    [anon_sym_POUNDhasheqv] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(310),
    [anon_sym_BQUOTE] = ACTIONS(313),
    [anon_sym_POUND_SQUOTE] = ACTIONS(316),
    [anon_sym_POUND_BQUOTE] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_COMMA_AT] = ACTIONS(325),
    [anon_sym_POUND_COMMA] = ACTIONS(328),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(331),
    [anon_sym_POUNDreader] = ACTIONS(334),
    [anon_sym_POUNDlang] = ACTIONS(337),
    [anon_sym_POUND_BANG] = ACTIONS(340),
  },
  [23] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(169),
    [sym_string] = STATE(169),
    [sym_byte_string] = STATE(169),
    [sym_here_string] = STATE(169),
    [sym_regex] = STATE(169),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(169),
    [sym_list] = STATE(169),
    [sym_vector] = STATE(169),
    [sym_structure] = STATE(169),
    [sym_hash] = STATE(169),
    [sym_graph] = STATE(169),
    [sym_quote] = STATE(169),
    [sym_quasiquote] = STATE(169),
    [sym_syntax] = STATE(169),
    [sym_quasisyntax] = STATE(169),
    [sym_unquote] = STATE(169),
    [sym_unquote_splicing] = STATE(169),
    [sym_unsyntax] = STATE(169),
    [sym_unsyntax_splicing] = STATE(169),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(351),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(351),
    [sym_character] = ACTIONS(353),
    [sym_symbol] = ACTIONS(351),
    [sym_keyword] = ACTIONS(353),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [24] = {
    [sym__skip] = STATE(32),
    [sym_comment] = STATE(32),
    [sym_block_comment] = STATE(32),
    [sym_sexp_comment] = STATE(32),
    [sym__datum] = STATE(156),
    [sym_string] = STATE(156),
    [sym_byte_string] = STATE(156),
    [sym_here_string] = STATE(156),
    [sym_regex] = STATE(156),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(156),
    [sym_list] = STATE(156),
    [sym_vector] = STATE(156),
    [sym_structure] = STATE(156),
    [sym_hash] = STATE(156),
    [sym_graph] = STATE(156),
    [sym_quote] = STATE(156),
    [sym_quasiquote] = STATE(156),
    [sym_syntax] = STATE(156),
    [sym_quasisyntax] = STATE(156),
    [sym_unquote] = STATE(156),
    [sym_unquote_splicing] = STATE(156),
    [sym_unsyntax] = STATE(156),
    [sym_unsyntax_splicing] = STATE(156),
    [aux_sym_sexp_comment_repeat1] = STATE(32),
    [aux_sym__skip_token1] = ACTIONS(355),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(357),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(357),
    [sym_character] = ACTIONS(359),
    [sym_symbol] = ACTIONS(357),
    [sym_keyword] = ACTIONS(359),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [25] = {
    [sym__skip] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_block_comment] = STATE(33),
    [sym_sexp_comment] = STATE(33),
    [sym__datum] = STATE(157),
    [sym_string] = STATE(157),
    [sym_byte_string] = STATE(157),
    [sym_here_string] = STATE(157),
    [sym_regex] = STATE(157),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(157),
    [sym_list] = STATE(157),
    [sym_vector] = STATE(157),
    [sym_structure] = STATE(157),
    [sym_hash] = STATE(157),
    [sym_graph] = STATE(157),
    [sym_quote] = STATE(157),
    [sym_quasiquote] = STATE(157),
    [sym_syntax] = STATE(157),
    [sym_quasisyntax] = STATE(157),
    [sym_unquote] = STATE(157),
    [sym_unquote_splicing] = STATE(157),
    [sym_unsyntax] = STATE(157),
    [sym_unsyntax_splicing] = STATE(157),
    [aux_sym_sexp_comment_repeat1] = STATE(33),
    [aux_sym__skip_token1] = ACTIONS(361),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(363),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(363),
    [sym_character] = ACTIONS(365),
    [sym_symbol] = ACTIONS(363),
    [sym_keyword] = ACTIONS(365),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [26] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(172),
    [sym_string] = STATE(172),
    [sym_byte_string] = STATE(172),
    [sym_here_string] = STATE(172),
    [sym_regex] = STATE(172),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(172),
    [sym_list] = STATE(172),
    [sym_vector] = STATE(172),
    [sym_structure] = STATE(172),
    [sym_hash] = STATE(172),
    [sym_graph] = STATE(172),
    [sym_quote] = STATE(172),
    [sym_quasiquote] = STATE(172),
    [sym_syntax] = STATE(172),
    [sym_quasisyntax] = STATE(172),
    [sym_unquote] = STATE(172),
    [sym_unquote_splicing] = STATE(172),
    [sym_unsyntax] = STATE(172),
    [sym_unsyntax_splicing] = STATE(172),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(367),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(367),
    [sym_character] = ACTIONS(369),
    [sym_symbol] = ACTIONS(367),
    [sym_keyword] = ACTIONS(369),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [27] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(150),
    [sym_string] = STATE(150),
    [sym_byte_string] = STATE(150),
    [sym_here_string] = STATE(150),
    [sym_regex] = STATE(150),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(150),
    [sym_list] = STATE(150),
    [sym_vector] = STATE(150),
    [sym_structure] = STATE(150),
    [sym_hash] = STATE(150),
    [sym_graph] = STATE(150),
    [sym_quote] = STATE(150),
    [sym_quasiquote] = STATE(150),
    [sym_syntax] = STATE(150),
    [sym_quasisyntax] = STATE(150),
    [sym_unquote] = STATE(150),
    [sym_unquote_splicing] = STATE(150),
    [sym_unsyntax] = STATE(150),
    [sym_unsyntax_splicing] = STATE(150),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(371),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(371),
    [sym_character] = ACTIONS(373),
    [sym_symbol] = ACTIONS(371),
    [sym_keyword] = ACTIONS(373),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [28] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(135),
    [sym_string] = STATE(135),
    [sym_byte_string] = STATE(135),
    [sym_here_string] = STATE(135),
    [sym_regex] = STATE(135),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(135),
    [sym_list] = STATE(135),
    [sym_vector] = STATE(135),
    [sym_structure] = STATE(135),
    [sym_hash] = STATE(135),
    [sym_graph] = STATE(135),
    [sym_quote] = STATE(135),
    [sym_quasiquote] = STATE(135),
    [sym_syntax] = STATE(135),
    [sym_quasisyntax] = STATE(135),
    [sym_unquote] = STATE(135),
    [sym_unquote_splicing] = STATE(135),
    [sym_unsyntax] = STATE(135),
    [sym_unsyntax_splicing] = STATE(135),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(375),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(375),
    [sym_character] = ACTIONS(377),
    [sym_symbol] = ACTIONS(375),
    [sym_keyword] = ACTIONS(377),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [29] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(136),
    [sym_string] = STATE(136),
    [sym_byte_string] = STATE(136),
    [sym_here_string] = STATE(136),
    [sym_regex] = STATE(136),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(136),
    [sym_list] = STATE(136),
    [sym_vector] = STATE(136),
    [sym_structure] = STATE(136),
    [sym_hash] = STATE(136),
    [sym_graph] = STATE(136),
    [sym_quote] = STATE(136),
    [sym_quasiquote] = STATE(136),
    [sym_syntax] = STATE(136),
    [sym_quasisyntax] = STATE(136),
    [sym_unquote] = STATE(136),
    [sym_unquote_splicing] = STATE(136),
    [sym_unsyntax] = STATE(136),
    [sym_unsyntax_splicing] = STATE(136),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(379),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(379),
    [sym_character] = ACTIONS(381),
    [sym_symbol] = ACTIONS(379),
    [sym_keyword] = ACTIONS(381),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [30] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(137),
    [sym_string] = STATE(137),
    [sym_byte_string] = STATE(137),
    [sym_here_string] = STATE(137),
    [sym_regex] = STATE(137),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(137),
    [sym_list] = STATE(137),
    [sym_vector] = STATE(137),
    [sym_structure] = STATE(137),
    [sym_hash] = STATE(137),
    [sym_graph] = STATE(137),
    [sym_quote] = STATE(137),
    [sym_quasiquote] = STATE(137),
    [sym_syntax] = STATE(137),
    [sym_quasisyntax] = STATE(137),
    [sym_unquote] = STATE(137),
    [sym_unquote_splicing] = STATE(137),
    [sym_unsyntax] = STATE(137),
    [sym_unsyntax_splicing] = STATE(137),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(383),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(383),
    [sym_character] = ACTIONS(385),
    [sym_symbol] = ACTIONS(383),
    [sym_keyword] = ACTIONS(385),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [31] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(138),
    [sym_string] = STATE(138),
    [sym_byte_string] = STATE(138),
    [sym_here_string] = STATE(138),
    [sym_regex] = STATE(138),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(138),
    [sym_list] = STATE(138),
    [sym_vector] = STATE(138),
    [sym_structure] = STATE(138),
    [sym_hash] = STATE(138),
    [sym_graph] = STATE(138),
    [sym_quote] = STATE(138),
    [sym_quasiquote] = STATE(138),
    [sym_syntax] = STATE(138),
    [sym_quasisyntax] = STATE(138),
    [sym_unquote] = STATE(138),
    [sym_unquote_splicing] = STATE(138),
    [sym_unsyntax] = STATE(138),
    [sym_unsyntax_splicing] = STATE(138),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(387),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(387),
    [sym_character] = ACTIONS(389),
    [sym_symbol] = ACTIONS(387),
    [sym_keyword] = ACTIONS(389),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [32] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(139),
    [sym_string] = STATE(139),
    [sym_byte_string] = STATE(139),
    [sym_here_string] = STATE(139),
    [sym_regex] = STATE(139),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(139),
    [sym_list] = STATE(139),
    [sym_vector] = STATE(139),
    [sym_structure] = STATE(139),
    [sym_hash] = STATE(139),
    [sym_graph] = STATE(139),
    [sym_quote] = STATE(139),
    [sym_quasiquote] = STATE(139),
    [sym_syntax] = STATE(139),
    [sym_quasisyntax] = STATE(139),
    [sym_unquote] = STATE(139),
    [sym_unquote_splicing] = STATE(139),
    [sym_unsyntax] = STATE(139),
    [sym_unsyntax_splicing] = STATE(139),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(391),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(391),
    [sym_character] = ACTIONS(393),
    [sym_symbol] = ACTIONS(391),
    [sym_keyword] = ACTIONS(393),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [33] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(140),
    [sym_string] = STATE(140),
    [sym_byte_string] = STATE(140),
    [sym_here_string] = STATE(140),
    [sym_regex] = STATE(140),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(140),
    [sym_list] = STATE(140),
    [sym_vector] = STATE(140),
    [sym_structure] = STATE(140),
    [sym_hash] = STATE(140),
    [sym_graph] = STATE(140),
    [sym_quote] = STATE(140),
    [sym_quasiquote] = STATE(140),
    [sym_syntax] = STATE(140),
    [sym_quasisyntax] = STATE(140),
    [sym_unquote] = STATE(140),
    [sym_unquote_splicing] = STATE(140),
    [sym_unsyntax] = STATE(140),
    [sym_unsyntax_splicing] = STATE(140),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(395),
    [sym_character] = ACTIONS(397),
    [sym_symbol] = ACTIONS(395),
    [sym_keyword] = ACTIONS(397),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [34] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(141),
    [sym_string] = STATE(141),
    [sym_byte_string] = STATE(141),
    [sym_here_string] = STATE(141),
    [sym_regex] = STATE(141),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(141),
    [sym_list] = STATE(141),
    [sym_vector] = STATE(141),
    [sym_structure] = STATE(141),
    [sym_hash] = STATE(141),
    [sym_graph] = STATE(141),
    [sym_quote] = STATE(141),
    [sym_quasiquote] = STATE(141),
    [sym_syntax] = STATE(141),
    [sym_quasisyntax] = STATE(141),
    [sym_unquote] = STATE(141),
    [sym_unquote_splicing] = STATE(141),
    [sym_unsyntax] = STATE(141),
    [sym_unsyntax_splicing] = STATE(141),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(399),
    [sym_character] = ACTIONS(401),
    [sym_symbol] = ACTIONS(399),
    [sym_keyword] = ACTIONS(401),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [35] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(163),
    [sym_string] = STATE(163),
    [sym_byte_string] = STATE(163),
    [sym_here_string] = STATE(163),
    [sym_regex] = STATE(163),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(163),
    [sym_list] = STATE(163),
    [sym_vector] = STATE(163),
    [sym_structure] = STATE(163),
    [sym_hash] = STATE(163),
    [sym_graph] = STATE(163),
    [sym_quote] = STATE(163),
    [sym_quasiquote] = STATE(163),
    [sym_syntax] = STATE(163),
    [sym_quasisyntax] = STATE(163),
    [sym_unquote] = STATE(163),
    [sym_unquote_splicing] = STATE(163),
    [sym_unsyntax] = STATE(163),
    [sym_unsyntax_splicing] = STATE(163),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(403),
    [sym_character] = ACTIONS(405),
    [sym_symbol] = ACTIONS(403),
    [sym_keyword] = ACTIONS(405),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [36] = {
    [sym__skip] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_block_comment] = STATE(38),
    [sym_sexp_comment] = STATE(38),
    [sym__datum] = STATE(142),
    [sym_string] = STATE(142),
    [sym_byte_string] = STATE(142),
    [sym_here_string] = STATE(142),
    [sym_regex] = STATE(142),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(142),
    [sym_list] = STATE(142),
    [sym_vector] = STATE(142),
    [sym_structure] = STATE(142),
    [sym_hash] = STATE(142),
    [sym_graph] = STATE(142),
    [sym_quote] = STATE(142),
    [sym_quasiquote] = STATE(142),
    [sym_syntax] = STATE(142),
    [sym_quasisyntax] = STATE(142),
    [sym_unquote] = STATE(142),
    [sym_unquote_splicing] = STATE(142),
    [sym_unsyntax] = STATE(142),
    [sym_unsyntax_splicing] = STATE(142),
    [aux_sym_sexp_comment_repeat1] = STATE(38),
    [aux_sym__skip_token1] = ACTIONS(407),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(409),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(409),
    [sym_character] = ACTIONS(411),
    [sym_symbol] = ACTIONS(409),
    [sym_keyword] = ACTIONS(411),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [37] = {
    [sym__skip] = STATE(23),
    [sym_comment] = STATE(23),
    [sym_block_comment] = STATE(23),
    [sym_sexp_comment] = STATE(23),
    [sym__datum] = STATE(171),
    [sym_string] = STATE(171),
    [sym_byte_string] = STATE(171),
    [sym_here_string] = STATE(171),
    [sym_regex] = STATE(171),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(171),
    [sym_list] = STATE(171),
    [sym_vector] = STATE(171),
    [sym_structure] = STATE(171),
    [sym_hash] = STATE(171),
    [sym_graph] = STATE(171),
    [sym_quote] = STATE(171),
    [sym_quasiquote] = STATE(171),
    [sym_syntax] = STATE(171),
    [sym_quasisyntax] = STATE(171),
    [sym_unquote] = STATE(171),
    [sym_unquote_splicing] = STATE(171),
    [sym_unsyntax] = STATE(171),
    [sym_unsyntax_splicing] = STATE(171),
    [aux_sym_sexp_comment_repeat1] = STATE(23),
    [aux_sym__skip_token1] = ACTIONS(413),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(415),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(415),
    [sym_character] = ACTIONS(417),
    [sym_symbol] = ACTIONS(415),
    [sym_keyword] = ACTIONS(417),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [38] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(144),
    [sym_string] = STATE(144),
    [sym_byte_string] = STATE(144),
    [sym_here_string] = STATE(144),
    [sym_regex] = STATE(144),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(144),
    [sym_list] = STATE(144),
    [sym_vector] = STATE(144),
    [sym_structure] = STATE(144),
    [sym_hash] = STATE(144),
    [sym_graph] = STATE(144),
    [sym_quote] = STATE(144),
    [sym_quasiquote] = STATE(144),
    [sym_syntax] = STATE(144),
    [sym_quasisyntax] = STATE(144),
    [sym_unquote] = STATE(144),
    [sym_unquote_splicing] = STATE(144),
    [sym_unsyntax] = STATE(144),
    [sym_unsyntax_splicing] = STATE(144),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(419),
    [sym_character] = ACTIONS(421),
    [sym_symbol] = ACTIONS(419),
    [sym_keyword] = ACTIONS(421),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [39] = {
    [sym__skip] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_block_comment] = STATE(50),
    [sym_sexp_comment] = STATE(50),
    [sym__datum] = STATE(132),
    [sym_string] = STATE(132),
    [sym_byte_string] = STATE(132),
    [sym_here_string] = STATE(132),
    [sym_regex] = STATE(132),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(132),
    [sym_list] = STATE(132),
    [sym_vector] = STATE(132),
    [sym_structure] = STATE(132),
    [sym_hash] = STATE(132),
    [sym_graph] = STATE(132),
    [sym_quote] = STATE(132),
    [sym_quasiquote] = STATE(132),
    [sym_syntax] = STATE(132),
    [sym_quasisyntax] = STATE(132),
    [sym_unquote] = STATE(132),
    [sym_unquote_splicing] = STATE(132),
    [sym_unsyntax] = STATE(132),
    [sym_unsyntax_splicing] = STATE(132),
    [aux_sym_sexp_comment_repeat1] = STATE(50),
    [aux_sym__skip_token1] = ACTIONS(423),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(425),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(425),
    [sym_character] = ACTIONS(427),
    [sym_symbol] = ACTIONS(425),
    [sym_keyword] = ACTIONS(427),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [40] = {
    [sym__skip] = STATE(51),
    [sym_comment] = STATE(51),
    [sym_block_comment] = STATE(51),
    [sym_sexp_comment] = STATE(51),
    [sym__datum] = STATE(99),
    [sym_string] = STATE(99),
    [sym_byte_string] = STATE(99),
    [sym_here_string] = STATE(99),
    [sym_regex] = STATE(99),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(99),
    [sym_list] = STATE(99),
    [sym_vector] = STATE(99),
    [sym_structure] = STATE(99),
    [sym_hash] = STATE(99),
    [sym_graph] = STATE(99),
    [sym_quote] = STATE(99),
    [sym_quasiquote] = STATE(99),
    [sym_syntax] = STATE(99),
    [sym_quasisyntax] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_unquote_splicing] = STATE(99),
    [sym_unsyntax] = STATE(99),
    [sym_unsyntax_splicing] = STATE(99),
    [aux_sym_sexp_comment_repeat1] = STATE(51),
    [aux_sym__skip_token1] = ACTIONS(429),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(431),
    [sym_character] = ACTIONS(433),
    [sym_symbol] = ACTIONS(431),
    [sym_keyword] = ACTIONS(433),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [41] = {
    [sym__skip] = STATE(52),
    [sym_comment] = STATE(52),
    [sym_block_comment] = STATE(52),
    [sym_sexp_comment] = STATE(52),
    [sym__datum] = STATE(100),
    [sym_string] = STATE(100),
    [sym_byte_string] = STATE(100),
    [sym_here_string] = STATE(100),
    [sym_regex] = STATE(100),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(100),
    [sym_list] = STATE(100),
    [sym_vector] = STATE(100),
    [sym_structure] = STATE(100),
    [sym_hash] = STATE(100),
    [sym_graph] = STATE(100),
    [sym_quote] = STATE(100),
    [sym_quasiquote] = STATE(100),
    [sym_syntax] = STATE(100),
    [sym_quasisyntax] = STATE(100),
    [sym_unquote] = STATE(100),
    [sym_unquote_splicing] = STATE(100),
    [sym_unsyntax] = STATE(100),
    [sym_unsyntax_splicing] = STATE(100),
    [aux_sym_sexp_comment_repeat1] = STATE(52),
    [aux_sym__skip_token1] = ACTIONS(435),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(437),
    [sym_character] = ACTIONS(439),
    [sym_symbol] = ACTIONS(437),
    [sym_keyword] = ACTIONS(439),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [42] = {
    [sym__skip] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_block_comment] = STATE(53),
    [sym_sexp_comment] = STATE(53),
    [sym__datum] = STATE(102),
    [sym_string] = STATE(102),
    [sym_byte_string] = STATE(102),
    [sym_here_string] = STATE(102),
    [sym_regex] = STATE(102),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(102),
    [sym_list] = STATE(102),
    [sym_vector] = STATE(102),
    [sym_structure] = STATE(102),
    [sym_hash] = STATE(102),
    [sym_graph] = STATE(102),
    [sym_quote] = STATE(102),
    [sym_quasiquote] = STATE(102),
    [sym_syntax] = STATE(102),
    [sym_quasisyntax] = STATE(102),
    [sym_unquote] = STATE(102),
    [sym_unquote_splicing] = STATE(102),
    [sym_unsyntax] = STATE(102),
    [sym_unsyntax_splicing] = STATE(102),
    [aux_sym_sexp_comment_repeat1] = STATE(53),
    [aux_sym__skip_token1] = ACTIONS(441),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(443),
    [sym_character] = ACTIONS(445),
    [sym_symbol] = ACTIONS(443),
    [sym_keyword] = ACTIONS(445),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [43] = {
    [sym__skip] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_block_comment] = STATE(54),
    [sym_sexp_comment] = STATE(54),
    [sym__datum] = STATE(104),
    [sym_string] = STATE(104),
    [sym_byte_string] = STATE(104),
    [sym_here_string] = STATE(104),
    [sym_regex] = STATE(104),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(104),
    [sym_list] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_structure] = STATE(104),
    [sym_hash] = STATE(104),
    [sym_graph] = STATE(104),
    [sym_quote] = STATE(104),
    [sym_quasiquote] = STATE(104),
    [sym_syntax] = STATE(104),
    [sym_quasisyntax] = STATE(104),
    [sym_unquote] = STATE(104),
    [sym_unquote_splicing] = STATE(104),
    [sym_unsyntax] = STATE(104),
    [sym_unsyntax_splicing] = STATE(104),
    [aux_sym_sexp_comment_repeat1] = STATE(54),
    [aux_sym__skip_token1] = ACTIONS(447),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(449),
    [sym_character] = ACTIONS(451),
    [sym_symbol] = ACTIONS(449),
    [sym_keyword] = ACTIONS(451),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [44] = {
    [sym__skip] = STATE(55),
    [sym_comment] = STATE(55),
    [sym_block_comment] = STATE(55),
    [sym_sexp_comment] = STATE(55),
    [sym__datum] = STATE(106),
    [sym_string] = STATE(106),
    [sym_byte_string] = STATE(106),
    [sym_here_string] = STATE(106),
    [sym_regex] = STATE(106),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(106),
    [sym_list] = STATE(106),
    [sym_vector] = STATE(106),
    [sym_structure] = STATE(106),
    [sym_hash] = STATE(106),
    [sym_graph] = STATE(106),
    [sym_quote] = STATE(106),
    [sym_quasiquote] = STATE(106),
    [sym_syntax] = STATE(106),
    [sym_quasisyntax] = STATE(106),
    [sym_unquote] = STATE(106),
    [sym_unquote_splicing] = STATE(106),
    [sym_unsyntax] = STATE(106),
    [sym_unsyntax_splicing] = STATE(106),
    [aux_sym_sexp_comment_repeat1] = STATE(55),
    [aux_sym__skip_token1] = ACTIONS(453),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(455),
    [sym_character] = ACTIONS(457),
    [sym_symbol] = ACTIONS(455),
    [sym_keyword] = ACTIONS(457),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [45] = {
    [sym__skip] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_block_comment] = STATE(56),
    [sym_sexp_comment] = STATE(56),
    [sym__datum] = STATE(109),
    [sym_string] = STATE(109),
    [sym_byte_string] = STATE(109),
    [sym_here_string] = STATE(109),
    [sym_regex] = STATE(109),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(109),
    [sym_list] = STATE(109),
    [sym_vector] = STATE(109),
    [sym_structure] = STATE(109),
    [sym_hash] = STATE(109),
    [sym_graph] = STATE(109),
    [sym_quote] = STATE(109),
    [sym_quasiquote] = STATE(109),
    [sym_syntax] = STATE(109),
    [sym_quasisyntax] = STATE(109),
    [sym_unquote] = STATE(109),
    [sym_unquote_splicing] = STATE(109),
    [sym_unsyntax] = STATE(109),
    [sym_unsyntax_splicing] = STATE(109),
    [aux_sym_sexp_comment_repeat1] = STATE(56),
    [aux_sym__skip_token1] = ACTIONS(459),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(461),
    [sym_character] = ACTIONS(463),
    [sym_symbol] = ACTIONS(461),
    [sym_keyword] = ACTIONS(463),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [46] = {
    [sym__skip] = STATE(92),
    [sym_comment] = STATE(92),
    [sym_block_comment] = STATE(92),
    [sym_sexp_comment] = STATE(92),
    [sym__datum] = STATE(93),
    [sym_string] = STATE(93),
    [sym_byte_string] = STATE(93),
    [sym_here_string] = STATE(93),
    [sym_regex] = STATE(93),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(93),
    [sym_list] = STATE(93),
    [sym_vector] = STATE(93),
    [sym_structure] = STATE(93),
    [sym_hash] = STATE(93),
    [sym_graph] = STATE(93),
    [sym_quote] = STATE(93),
    [sym_quasiquote] = STATE(93),
    [sym_syntax] = STATE(93),
    [sym_quasisyntax] = STATE(93),
    [sym_unquote] = STATE(93),
    [sym_unquote_splicing] = STATE(93),
    [sym_unsyntax] = STATE(93),
    [sym_unsyntax_splicing] = STATE(93),
    [aux_sym_sexp_comment_repeat1] = STATE(92),
    [aux_sym__skip_token1] = ACTIONS(465),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(467),
    [sym_character] = ACTIONS(469),
    [sym_symbol] = ACTIONS(467),
    [sym_keyword] = ACTIONS(469),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [47] = {
    [sym__skip] = STATE(58),
    [sym_comment] = STATE(58),
    [sym_block_comment] = STATE(58),
    [sym_sexp_comment] = STATE(58),
    [sym__datum] = STATE(113),
    [sym_string] = STATE(113),
    [sym_byte_string] = STATE(113),
    [sym_here_string] = STATE(113),
    [sym_regex] = STATE(113),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(113),
    [sym_list] = STATE(113),
    [sym_vector] = STATE(113),
    [sym_structure] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_graph] = STATE(113),
    [sym_quote] = STATE(113),
    [sym_quasiquote] = STATE(113),
    [sym_syntax] = STATE(113),
    [sym_quasisyntax] = STATE(113),
    [sym_unquote] = STATE(113),
    [sym_unquote_splicing] = STATE(113),
    [sym_unsyntax] = STATE(113),
    [sym_unsyntax_splicing] = STATE(113),
    [aux_sym_sexp_comment_repeat1] = STATE(58),
    [aux_sym__skip_token1] = ACTIONS(471),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(473),
    [sym_character] = ACTIONS(475),
    [sym_symbol] = ACTIONS(473),
    [sym_keyword] = ACTIONS(475),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [48] = {
    [sym__skip] = STATE(59),
    [sym_comment] = STATE(59),
    [sym_block_comment] = STATE(59),
    [sym_sexp_comment] = STATE(59),
    [sym__datum] = STATE(115),
    [sym_string] = STATE(115),
    [sym_byte_string] = STATE(115),
    [sym_here_string] = STATE(115),
    [sym_regex] = STATE(115),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(115),
    [sym_list] = STATE(115),
    [sym_vector] = STATE(115),
    [sym_structure] = STATE(115),
    [sym_hash] = STATE(115),
    [sym_graph] = STATE(115),
    [sym_quote] = STATE(115),
    [sym_quasiquote] = STATE(115),
    [sym_syntax] = STATE(115),
    [sym_quasisyntax] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splicing] = STATE(115),
    [sym_unsyntax] = STATE(115),
    [sym_unsyntax_splicing] = STATE(115),
    [aux_sym_sexp_comment_repeat1] = STATE(59),
    [aux_sym__skip_token1] = ACTIONS(477),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(479),
    [sym_character] = ACTIONS(481),
    [sym_symbol] = ACTIONS(479),
    [sym_keyword] = ACTIONS(481),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [49] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(208),
    [sym_string] = STATE(208),
    [sym_byte_string] = STATE(208),
    [sym_here_string] = STATE(208),
    [sym_regex] = STATE(208),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(208),
    [sym_list] = STATE(208),
    [sym_vector] = STATE(208),
    [sym_structure] = STATE(208),
    [sym_hash] = STATE(208),
    [sym_graph] = STATE(208),
    [sym_quote] = STATE(208),
    [sym_quasiquote] = STATE(208),
    [sym_syntax] = STATE(208),
    [sym_quasisyntax] = STATE(208),
    [sym_unquote] = STATE(208),
    [sym_unquote_splicing] = STATE(208),
    [sym_unsyntax] = STATE(208),
    [sym_unsyntax_splicing] = STATE(208),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(483),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(483),
    [sym_character] = ACTIONS(493),
    [sym_symbol] = ACTIONS(483),
    [sym_keyword] = ACTIONS(493),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [50] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(124),
    [sym_string] = STATE(124),
    [sym_byte_string] = STATE(124),
    [sym_here_string] = STATE(124),
    [sym_regex] = STATE(124),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(124),
    [sym_list] = STATE(124),
    [sym_vector] = STATE(124),
    [sym_structure] = STATE(124),
    [sym_hash] = STATE(124),
    [sym_graph] = STATE(124),
    [sym_quote] = STATE(124),
    [sym_quasiquote] = STATE(124),
    [sym_syntax] = STATE(124),
    [sym_quasisyntax] = STATE(124),
    [sym_unquote] = STATE(124),
    [sym_unquote_splicing] = STATE(124),
    [sym_unsyntax] = STATE(124),
    [sym_unsyntax_splicing] = STATE(124),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(527),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(527),
    [sym_character] = ACTIONS(529),
    [sym_symbol] = ACTIONS(527),
    [sym_keyword] = ACTIONS(529),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [51] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(126),
    [sym_string] = STATE(126),
    [sym_byte_string] = STATE(126),
    [sym_here_string] = STATE(126),
    [sym_regex] = STATE(126),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(126),
    [sym_list] = STATE(126),
    [sym_vector] = STATE(126),
    [sym_structure] = STATE(126),
    [sym_hash] = STATE(126),
    [sym_graph] = STATE(126),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(531),
    [sym_character] = ACTIONS(533),
    [sym_symbol] = ACTIONS(531),
    [sym_keyword] = ACTIONS(533),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [52] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(127),
    [sym_string] = STATE(127),
    [sym_byte_string] = STATE(127),
    [sym_here_string] = STATE(127),
    [sym_regex] = STATE(127),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(127),
    [sym_list] = STATE(127),
    [sym_vector] = STATE(127),
    [sym_structure] = STATE(127),
    [sym_hash] = STATE(127),
    [sym_graph] = STATE(127),
    [sym_quote] = STATE(127),
    [sym_quasiquote] = STATE(127),
    [sym_syntax] = STATE(127),
    [sym_quasisyntax] = STATE(127),
    [sym_unquote] = STATE(127),
    [sym_unquote_splicing] = STATE(127),
    [sym_unsyntax] = STATE(127),
    [sym_unsyntax_splicing] = STATE(127),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(535),
    [sym_character] = ACTIONS(537),
    [sym_symbol] = ACTIONS(535),
    [sym_keyword] = ACTIONS(537),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [53] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(128),
    [sym_string] = STATE(128),
    [sym_byte_string] = STATE(128),
    [sym_here_string] = STATE(128),
    [sym_regex] = STATE(128),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(128),
    [sym_list] = STATE(128),
    [sym_vector] = STATE(128),
    [sym_structure] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_graph] = STATE(128),
    [sym_quote] = STATE(128),
    [sym_quasiquote] = STATE(128),
    [sym_syntax] = STATE(128),
    [sym_quasisyntax] = STATE(128),
    [sym_unquote] = STATE(128),
    [sym_unquote_splicing] = STATE(128),
    [sym_unsyntax] = STATE(128),
    [sym_unsyntax_splicing] = STATE(128),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(539),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(539),
    [sym_character] = ACTIONS(541),
    [sym_symbol] = ACTIONS(539),
    [sym_keyword] = ACTIONS(541),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [54] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(129),
    [sym_string] = STATE(129),
    [sym_byte_string] = STATE(129),
    [sym_here_string] = STATE(129),
    [sym_regex] = STATE(129),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(129),
    [sym_list] = STATE(129),
    [sym_vector] = STATE(129),
    [sym_structure] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_graph] = STATE(129),
    [sym_quote] = STATE(129),
    [sym_quasiquote] = STATE(129),
    [sym_syntax] = STATE(129),
    [sym_quasisyntax] = STATE(129),
    [sym_unquote] = STATE(129),
    [sym_unquote_splicing] = STATE(129),
    [sym_unsyntax] = STATE(129),
    [sym_unsyntax_splicing] = STATE(129),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(543),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(543),
    [sym_character] = ACTIONS(545),
    [sym_symbol] = ACTIONS(543),
    [sym_keyword] = ACTIONS(545),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [55] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(130),
    [sym_string] = STATE(130),
    [sym_byte_string] = STATE(130),
    [sym_here_string] = STATE(130),
    [sym_regex] = STATE(130),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(130),
    [sym_list] = STATE(130),
    [sym_vector] = STATE(130),
    [sym_structure] = STATE(130),
    [sym_hash] = STATE(130),
    [sym_graph] = STATE(130),
    [sym_quote] = STATE(130),
    [sym_quasiquote] = STATE(130),
    [sym_syntax] = STATE(130),
    [sym_quasisyntax] = STATE(130),
    [sym_unquote] = STATE(130),
    [sym_unquote_splicing] = STATE(130),
    [sym_unsyntax] = STATE(130),
    [sym_unsyntax_splicing] = STATE(130),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(547),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(547),
    [sym_character] = ACTIONS(549),
    [sym_symbol] = ACTIONS(547),
    [sym_keyword] = ACTIONS(549),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [56] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(131),
    [sym_string] = STATE(131),
    [sym_byte_string] = STATE(131),
    [sym_here_string] = STATE(131),
    [sym_regex] = STATE(131),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(131),
    [sym_list] = STATE(131),
    [sym_vector] = STATE(131),
    [sym_structure] = STATE(131),
    [sym_hash] = STATE(131),
    [sym_graph] = STATE(131),
    [sym_quote] = STATE(131),
    [sym_quasiquote] = STATE(131),
    [sym_syntax] = STATE(131),
    [sym_quasisyntax] = STATE(131),
    [sym_unquote] = STATE(131),
    [sym_unquote_splicing] = STATE(131),
    [sym_unsyntax] = STATE(131),
    [sym_unsyntax_splicing] = STATE(131),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(551),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(551),
    [sym_character] = ACTIONS(553),
    [sym_symbol] = ACTIONS(551),
    [sym_keyword] = ACTIONS(553),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [57] = {
    [sym__skip] = STATE(34),
    [sym_comment] = STATE(34),
    [sym_block_comment] = STATE(34),
    [sym_sexp_comment] = STATE(34),
    [sym__datum] = STATE(159),
    [sym_string] = STATE(159),
    [sym_byte_string] = STATE(159),
    [sym_here_string] = STATE(159),
    [sym_regex] = STATE(159),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(159),
    [sym_list] = STATE(159),
    [sym_vector] = STATE(159),
    [sym_structure] = STATE(159),
    [sym_hash] = STATE(159),
    [sym_graph] = STATE(159),
    [sym_quote] = STATE(159),
    [sym_quasiquote] = STATE(159),
    [sym_syntax] = STATE(159),
    [sym_quasisyntax] = STATE(159),
    [sym_unquote] = STATE(159),
    [sym_unquote_splicing] = STATE(159),
    [sym_unsyntax] = STATE(159),
    [sym_unsyntax_splicing] = STATE(159),
    [aux_sym_sexp_comment_repeat1] = STATE(34),
    [aux_sym__skip_token1] = ACTIONS(555),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(557),
    [sym_character] = ACTIONS(559),
    [sym_symbol] = ACTIONS(557),
    [sym_keyword] = ACTIONS(559),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [58] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(112),
    [sym_string] = STATE(112),
    [sym_byte_string] = STATE(112),
    [sym_here_string] = STATE(112),
    [sym_regex] = STATE(112),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(112),
    [sym_list] = STATE(112),
    [sym_vector] = STATE(112),
    [sym_structure] = STATE(112),
    [sym_hash] = STATE(112),
    [sym_graph] = STATE(112),
    [sym_quote] = STATE(112),
    [sym_quasiquote] = STATE(112),
    [sym_syntax] = STATE(112),
    [sym_quasisyntax] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splicing] = STATE(112),
    [sym_unsyntax] = STATE(112),
    [sym_unsyntax_splicing] = STATE(112),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(561),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(561),
    [sym_character] = ACTIONS(563),
    [sym_symbol] = ACTIONS(561),
    [sym_keyword] = ACTIONS(563),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [59] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(94),
    [sym_string] = STATE(94),
    [sym_byte_string] = STATE(94),
    [sym_here_string] = STATE(94),
    [sym_regex] = STATE(94),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(94),
    [sym_list] = STATE(94),
    [sym_vector] = STATE(94),
    [sym_structure] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_graph] = STATE(94),
    [sym_quote] = STATE(94),
    [sym_quasiquote] = STATE(94),
    [sym_syntax] = STATE(94),
    [sym_quasisyntax] = STATE(94),
    [sym_unquote] = STATE(94),
    [sym_unquote_splicing] = STATE(94),
    [sym_unsyntax] = STATE(94),
    [sym_unsyntax_splicing] = STATE(94),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(565),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(565),
    [sym_character] = ACTIONS(567),
    [sym_symbol] = ACTIONS(565),
    [sym_keyword] = ACTIONS(567),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [60] = {
    [sym__skip] = STATE(61),
    [sym_comment] = STATE(61),
    [sym_block_comment] = STATE(61),
    [sym_sexp_comment] = STATE(61),
    [sym__datum] = STATE(95),
    [sym_string] = STATE(95),
    [sym_byte_string] = STATE(95),
    [sym_here_string] = STATE(95),
    [sym_regex] = STATE(95),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(95),
    [sym_list] = STATE(95),
    [sym_vector] = STATE(95),
    [sym_structure] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_graph] = STATE(95),
    [sym_quote] = STATE(95),
    [sym_quasiquote] = STATE(95),
    [sym_syntax] = STATE(95),
    [sym_quasisyntax] = STATE(95),
    [sym_unquote] = STATE(95),
    [sym_unquote_splicing] = STATE(95),
    [sym_unsyntax] = STATE(95),
    [sym_unsyntax_splicing] = STATE(95),
    [aux_sym_sexp_comment_repeat1] = STATE(61),
    [aux_sym__skip_token1] = ACTIONS(569),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(571),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(571),
    [sym_character] = ACTIONS(573),
    [sym_symbol] = ACTIONS(571),
    [sym_keyword] = ACTIONS(573),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [61] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(97),
    [sym_string] = STATE(97),
    [sym_byte_string] = STATE(97),
    [sym_here_string] = STATE(97),
    [sym_regex] = STATE(97),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(97),
    [sym_list] = STATE(97),
    [sym_vector] = STATE(97),
    [sym_structure] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_graph] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_syntax] = STATE(97),
    [sym_quasisyntax] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_unquote_splicing] = STATE(97),
    [sym_unsyntax] = STATE(97),
    [sym_unsyntax_splicing] = STATE(97),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(575),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(575),
    [sym_character] = ACTIONS(577),
    [sym_symbol] = ACTIONS(575),
    [sym_keyword] = ACTIONS(577),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [62] = {
    [sym__skip] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym_sexp_comment] = STATE(72),
    [sym__datum] = STATE(210),
    [sym_string] = STATE(210),
    [sym_byte_string] = STATE(210),
    [sym_here_string] = STATE(210),
    [sym_regex] = STATE(210),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(210),
    [sym_list] = STATE(210),
    [sym_vector] = STATE(210),
    [sym_structure] = STATE(210),
    [sym_hash] = STATE(210),
    [sym_graph] = STATE(210),
    [sym_quote] = STATE(210),
    [sym_quasiquote] = STATE(210),
    [sym_syntax] = STATE(210),
    [sym_quasisyntax] = STATE(210),
    [sym_unquote] = STATE(210),
    [sym_unquote_splicing] = STATE(210),
    [sym_unsyntax] = STATE(210),
    [sym_unsyntax_splicing] = STATE(210),
    [aux_sym_sexp_comment_repeat1] = STATE(72),
    [aux_sym__skip_token1] = ACTIONS(579),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(581),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(581),
    [sym_character] = ACTIONS(583),
    [sym_symbol] = ACTIONS(581),
    [sym_keyword] = ACTIONS(583),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [63] = {
    [sym__skip] = STATE(73),
    [sym_comment] = STATE(73),
    [sym_block_comment] = STATE(73),
    [sym_sexp_comment] = STATE(73),
    [sym__datum] = STATE(177),
    [sym_string] = STATE(177),
    [sym_byte_string] = STATE(177),
    [sym_here_string] = STATE(177),
    [sym_regex] = STATE(177),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(177),
    [sym_list] = STATE(177),
    [sym_vector] = STATE(177),
    [sym_structure] = STATE(177),
    [sym_hash] = STATE(177),
    [sym_graph] = STATE(177),
    [sym_quote] = STATE(177),
    [sym_quasiquote] = STATE(177),
    [sym_syntax] = STATE(177),
    [sym_quasisyntax] = STATE(177),
    [sym_unquote] = STATE(177),
    [sym_unquote_splicing] = STATE(177),
    [sym_unsyntax] = STATE(177),
    [sym_unsyntax_splicing] = STATE(177),
    [aux_sym_sexp_comment_repeat1] = STATE(73),
    [aux_sym__skip_token1] = ACTIONS(585),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(587),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(587),
    [sym_character] = ACTIONS(589),
    [sym_symbol] = ACTIONS(587),
    [sym_keyword] = ACTIONS(589),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [64] = {
    [sym__skip] = STATE(74),
    [sym_comment] = STATE(74),
    [sym_block_comment] = STATE(74),
    [sym_sexp_comment] = STATE(74),
    [sym__datum] = STATE(178),
    [sym_string] = STATE(178),
    [sym_byte_string] = STATE(178),
    [sym_here_string] = STATE(178),
    [sym_regex] = STATE(178),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(178),
    [sym_list] = STATE(178),
    [sym_vector] = STATE(178),
    [sym_structure] = STATE(178),
    [sym_hash] = STATE(178),
    [sym_graph] = STATE(178),
    [sym_quote] = STATE(178),
    [sym_quasiquote] = STATE(178),
    [sym_syntax] = STATE(178),
    [sym_quasisyntax] = STATE(178),
    [sym_unquote] = STATE(178),
    [sym_unquote_splicing] = STATE(178),
    [sym_unsyntax] = STATE(178),
    [sym_unsyntax_splicing] = STATE(178),
    [aux_sym_sexp_comment_repeat1] = STATE(74),
    [aux_sym__skip_token1] = ACTIONS(591),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(593),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(593),
    [sym_character] = ACTIONS(595),
    [sym_symbol] = ACTIONS(593),
    [sym_keyword] = ACTIONS(595),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [65] = {
    [sym__skip] = STATE(75),
    [sym_comment] = STATE(75),
    [sym_block_comment] = STATE(75),
    [sym_sexp_comment] = STATE(75),
    [sym__datum] = STATE(179),
    [sym_string] = STATE(179),
    [sym_byte_string] = STATE(179),
    [sym_here_string] = STATE(179),
    [sym_regex] = STATE(179),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(179),
    [sym_list] = STATE(179),
    [sym_vector] = STATE(179),
    [sym_structure] = STATE(179),
    [sym_hash] = STATE(179),
    [sym_graph] = STATE(179),
    [sym_quote] = STATE(179),
    [sym_quasiquote] = STATE(179),
    [sym_syntax] = STATE(179),
    [sym_quasisyntax] = STATE(179),
    [sym_unquote] = STATE(179),
    [sym_unquote_splicing] = STATE(179),
    [sym_unsyntax] = STATE(179),
    [sym_unsyntax_splicing] = STATE(179),
    [aux_sym_sexp_comment_repeat1] = STATE(75),
    [aux_sym__skip_token1] = ACTIONS(597),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(599),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(599),
    [sym_character] = ACTIONS(601),
    [sym_symbol] = ACTIONS(599),
    [sym_keyword] = ACTIONS(601),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [66] = {
    [sym__skip] = STATE(76),
    [sym_comment] = STATE(76),
    [sym_block_comment] = STATE(76),
    [sym_sexp_comment] = STATE(76),
    [sym__datum] = STATE(180),
    [sym_string] = STATE(180),
    [sym_byte_string] = STATE(180),
    [sym_here_string] = STATE(180),
    [sym_regex] = STATE(180),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(180),
    [sym_list] = STATE(180),
    [sym_vector] = STATE(180),
    [sym_structure] = STATE(180),
    [sym_hash] = STATE(180),
    [sym_graph] = STATE(180),
    [sym_quote] = STATE(180),
    [sym_quasiquote] = STATE(180),
    [sym_syntax] = STATE(180),
    [sym_quasisyntax] = STATE(180),
    [sym_unquote] = STATE(180),
    [sym_unquote_splicing] = STATE(180),
    [sym_unsyntax] = STATE(180),
    [sym_unsyntax_splicing] = STATE(180),
    [aux_sym_sexp_comment_repeat1] = STATE(76),
    [aux_sym__skip_token1] = ACTIONS(603),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(605),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(605),
    [sym_character] = ACTIONS(607),
    [sym_symbol] = ACTIONS(605),
    [sym_keyword] = ACTIONS(607),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [67] = {
    [sym__skip] = STATE(77),
    [sym_comment] = STATE(77),
    [sym_block_comment] = STATE(77),
    [sym_sexp_comment] = STATE(77),
    [sym__datum] = STATE(181),
    [sym_string] = STATE(181),
    [sym_byte_string] = STATE(181),
    [sym_here_string] = STATE(181),
    [sym_regex] = STATE(181),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(181),
    [sym_list] = STATE(181),
    [sym_vector] = STATE(181),
    [sym_structure] = STATE(181),
    [sym_hash] = STATE(181),
    [sym_graph] = STATE(181),
    [sym_quote] = STATE(181),
    [sym_quasiquote] = STATE(181),
    [sym_syntax] = STATE(181),
    [sym_quasisyntax] = STATE(181),
    [sym_unquote] = STATE(181),
    [sym_unquote_splicing] = STATE(181),
    [sym_unsyntax] = STATE(181),
    [sym_unsyntax_splicing] = STATE(181),
    [aux_sym_sexp_comment_repeat1] = STATE(77),
    [aux_sym__skip_token1] = ACTIONS(609),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(611),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(611),
    [sym_character] = ACTIONS(613),
    [sym_symbol] = ACTIONS(611),
    [sym_keyword] = ACTIONS(613),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [68] = {
    [sym__skip] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_block_comment] = STATE(78),
    [sym_sexp_comment] = STATE(78),
    [sym__datum] = STATE(183),
    [sym_string] = STATE(183),
    [sym_byte_string] = STATE(183),
    [sym_here_string] = STATE(183),
    [sym_regex] = STATE(183),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(183),
    [sym_list] = STATE(183),
    [sym_vector] = STATE(183),
    [sym_structure] = STATE(183),
    [sym_hash] = STATE(183),
    [sym_graph] = STATE(183),
    [sym_quote] = STATE(183),
    [sym_quasiquote] = STATE(183),
    [sym_syntax] = STATE(183),
    [sym_quasisyntax] = STATE(183),
    [sym_unquote] = STATE(183),
    [sym_unquote_splicing] = STATE(183),
    [sym_unsyntax] = STATE(183),
    [sym_unsyntax_splicing] = STATE(183),
    [aux_sym_sexp_comment_repeat1] = STATE(78),
    [aux_sym__skip_token1] = ACTIONS(615),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(617),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(617),
    [sym_character] = ACTIONS(619),
    [sym_symbol] = ACTIONS(617),
    [sym_keyword] = ACTIONS(619),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [69] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(185),
    [sym_string] = STATE(185),
    [sym_byte_string] = STATE(185),
    [sym_here_string] = STATE(185),
    [sym_regex] = STATE(185),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(185),
    [sym_list] = STATE(185),
    [sym_vector] = STATE(185),
    [sym_structure] = STATE(185),
    [sym_hash] = STATE(185),
    [sym_graph] = STATE(185),
    [sym_quote] = STATE(185),
    [sym_quasiquote] = STATE(185),
    [sym_syntax] = STATE(185),
    [sym_quasisyntax] = STATE(185),
    [sym_unquote] = STATE(185),
    [sym_unquote_splicing] = STATE(185),
    [sym_unsyntax] = STATE(185),
    [sym_unsyntax_splicing] = STATE(185),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(621),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(623),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(623),
    [sym_character] = ACTIONS(625),
    [sym_symbol] = ACTIONS(623),
    [sym_keyword] = ACTIONS(625),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [70] = {
    [sym__skip] = STATE(80),
    [sym_comment] = STATE(80),
    [sym_block_comment] = STATE(80),
    [sym_sexp_comment] = STATE(80),
    [sym__datum] = STATE(186),
    [sym_string] = STATE(186),
    [sym_byte_string] = STATE(186),
    [sym_here_string] = STATE(186),
    [sym_regex] = STATE(186),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(186),
    [sym_list] = STATE(186),
    [sym_vector] = STATE(186),
    [sym_structure] = STATE(186),
    [sym_hash] = STATE(186),
    [sym_graph] = STATE(186),
    [sym_quote] = STATE(186),
    [sym_quasiquote] = STATE(186),
    [sym_syntax] = STATE(186),
    [sym_quasisyntax] = STATE(186),
    [sym_unquote] = STATE(186),
    [sym_unquote_splicing] = STATE(186),
    [sym_unsyntax] = STATE(186),
    [sym_unsyntax_splicing] = STATE(186),
    [aux_sym_sexp_comment_repeat1] = STATE(80),
    [aux_sym__skip_token1] = ACTIONS(627),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(629),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(629),
    [sym_character] = ACTIONS(631),
    [sym_symbol] = ACTIONS(629),
    [sym_keyword] = ACTIONS(631),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [71] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(118),
    [sym_string] = STATE(118),
    [sym_byte_string] = STATE(118),
    [sym_here_string] = STATE(118),
    [sym_regex] = STATE(118),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(118),
    [sym_list] = STATE(118),
    [sym_vector] = STATE(118),
    [sym_structure] = STATE(118),
    [sym_hash] = STATE(118),
    [sym_graph] = STATE(118),
    [sym_quote] = STATE(118),
    [sym_quasiquote] = STATE(118),
    [sym_syntax] = STATE(118),
    [sym_quasisyntax] = STATE(118),
    [sym_unquote] = STATE(118),
    [sym_unquote_splicing] = STATE(118),
    [sym_unsyntax] = STATE(118),
    [sym_unsyntax_splicing] = STATE(118),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(633),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(633),
    [sym_character] = ACTIONS(635),
    [sym_symbol] = ACTIONS(633),
    [sym_keyword] = ACTIONS(635),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [72] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(190),
    [sym_string] = STATE(190),
    [sym_byte_string] = STATE(190),
    [sym_here_string] = STATE(190),
    [sym_regex] = STATE(190),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(190),
    [sym_list] = STATE(190),
    [sym_vector] = STATE(190),
    [sym_structure] = STATE(190),
    [sym_hash] = STATE(190),
    [sym_graph] = STATE(190),
    [sym_quote] = STATE(190),
    [sym_quasiquote] = STATE(190),
    [sym_syntax] = STATE(190),
    [sym_quasisyntax] = STATE(190),
    [sym_unquote] = STATE(190),
    [sym_unquote_splicing] = STATE(190),
    [sym_unsyntax] = STATE(190),
    [sym_unsyntax_splicing] = STATE(190),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(637),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(637),
    [sym_character] = ACTIONS(639),
    [sym_symbol] = ACTIONS(637),
    [sym_keyword] = ACTIONS(639),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [73] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(192),
    [sym_string] = STATE(192),
    [sym_byte_string] = STATE(192),
    [sym_here_string] = STATE(192),
    [sym_regex] = STATE(192),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(192),
    [sym_list] = STATE(192),
    [sym_vector] = STATE(192),
    [sym_structure] = STATE(192),
    [sym_hash] = STATE(192),
    [sym_graph] = STATE(192),
    [sym_quote] = STATE(192),
    [sym_quasiquote] = STATE(192),
    [sym_syntax] = STATE(192),
    [sym_quasisyntax] = STATE(192),
    [sym_unquote] = STATE(192),
    [sym_unquote_splicing] = STATE(192),
    [sym_unsyntax] = STATE(192),
    [sym_unsyntax_splicing] = STATE(192),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(641),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(641),
    [sym_character] = ACTIONS(643),
    [sym_symbol] = ACTIONS(641),
    [sym_keyword] = ACTIONS(643),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [74] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(193),
    [sym_string] = STATE(193),
    [sym_byte_string] = STATE(193),
    [sym_here_string] = STATE(193),
    [sym_regex] = STATE(193),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(193),
    [sym_list] = STATE(193),
    [sym_vector] = STATE(193),
    [sym_structure] = STATE(193),
    [sym_hash] = STATE(193),
    [sym_graph] = STATE(193),
    [sym_quote] = STATE(193),
    [sym_quasiquote] = STATE(193),
    [sym_syntax] = STATE(193),
    [sym_quasisyntax] = STATE(193),
    [sym_unquote] = STATE(193),
    [sym_unquote_splicing] = STATE(193),
    [sym_unsyntax] = STATE(193),
    [sym_unsyntax_splicing] = STATE(193),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(645),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(645),
    [sym_character] = ACTIONS(647),
    [sym_symbol] = ACTIONS(645),
    [sym_keyword] = ACTIONS(647),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [75] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(211),
    [sym_string] = STATE(211),
    [sym_byte_string] = STATE(211),
    [sym_here_string] = STATE(211),
    [sym_regex] = STATE(211),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(211),
    [sym_list] = STATE(211),
    [sym_vector] = STATE(211),
    [sym_structure] = STATE(211),
    [sym_hash] = STATE(211),
    [sym_graph] = STATE(211),
    [sym_quote] = STATE(211),
    [sym_quasiquote] = STATE(211),
    [sym_syntax] = STATE(211),
    [sym_quasisyntax] = STATE(211),
    [sym_unquote] = STATE(211),
    [sym_unquote_splicing] = STATE(211),
    [sym_unsyntax] = STATE(211),
    [sym_unsyntax_splicing] = STATE(211),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(649),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(649),
    [sym_character] = ACTIONS(651),
    [sym_symbol] = ACTIONS(649),
    [sym_keyword] = ACTIONS(651),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [76] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(195),
    [sym_string] = STATE(195),
    [sym_byte_string] = STATE(195),
    [sym_here_string] = STATE(195),
    [sym_regex] = STATE(195),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(195),
    [sym_list] = STATE(195),
    [sym_vector] = STATE(195),
    [sym_structure] = STATE(195),
    [sym_hash] = STATE(195),
    [sym_graph] = STATE(195),
    [sym_quote] = STATE(195),
    [sym_quasiquote] = STATE(195),
    [sym_syntax] = STATE(195),
    [sym_quasisyntax] = STATE(195),
    [sym_unquote] = STATE(195),
    [sym_unquote_splicing] = STATE(195),
    [sym_unsyntax] = STATE(195),
    [sym_unsyntax_splicing] = STATE(195),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(653),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(653),
    [sym_character] = ACTIONS(655),
    [sym_symbol] = ACTIONS(653),
    [sym_keyword] = ACTIONS(655),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [77] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(196),
    [sym_string] = STATE(196),
    [sym_byte_string] = STATE(196),
    [sym_here_string] = STATE(196),
    [sym_regex] = STATE(196),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(196),
    [sym_list] = STATE(196),
    [sym_vector] = STATE(196),
    [sym_structure] = STATE(196),
    [sym_hash] = STATE(196),
    [sym_graph] = STATE(196),
    [sym_quote] = STATE(196),
    [sym_quasiquote] = STATE(196),
    [sym_syntax] = STATE(196),
    [sym_quasisyntax] = STATE(196),
    [sym_unquote] = STATE(196),
    [sym_unquote_splicing] = STATE(196),
    [sym_unsyntax] = STATE(196),
    [sym_unsyntax_splicing] = STATE(196),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(657),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(657),
    [sym_character] = ACTIONS(659),
    [sym_symbol] = ACTIONS(657),
    [sym_keyword] = ACTIONS(659),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [78] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(197),
    [sym_string] = STATE(197),
    [sym_byte_string] = STATE(197),
    [sym_here_string] = STATE(197),
    [sym_regex] = STATE(197),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(197),
    [sym_list] = STATE(197),
    [sym_vector] = STATE(197),
    [sym_structure] = STATE(197),
    [sym_hash] = STATE(197),
    [sym_graph] = STATE(197),
    [sym_quote] = STATE(197),
    [sym_quasiquote] = STATE(197),
    [sym_syntax] = STATE(197),
    [sym_quasisyntax] = STATE(197),
    [sym_unquote] = STATE(197),
    [sym_unquote_splicing] = STATE(197),
    [sym_unsyntax] = STATE(197),
    [sym_unsyntax_splicing] = STATE(197),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(661),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(661),
    [sym_character] = ACTIONS(663),
    [sym_symbol] = ACTIONS(661),
    [sym_keyword] = ACTIONS(663),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [79] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(198),
    [sym_string] = STATE(198),
    [sym_byte_string] = STATE(198),
    [sym_here_string] = STATE(198),
    [sym_regex] = STATE(198),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(198),
    [sym_list] = STATE(198),
    [sym_vector] = STATE(198),
    [sym_structure] = STATE(198),
    [sym_hash] = STATE(198),
    [sym_graph] = STATE(198),
    [sym_quote] = STATE(198),
    [sym_quasiquote] = STATE(198),
    [sym_syntax] = STATE(198),
    [sym_quasisyntax] = STATE(198),
    [sym_unquote] = STATE(198),
    [sym_unquote_splicing] = STATE(198),
    [sym_unsyntax] = STATE(198),
    [sym_unsyntax_splicing] = STATE(198),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(665),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(665),
    [sym_character] = ACTIONS(667),
    [sym_symbol] = ACTIONS(665),
    [sym_keyword] = ACTIONS(667),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [80] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(199),
    [sym_string] = STATE(199),
    [sym_byte_string] = STATE(199),
    [sym_here_string] = STATE(199),
    [sym_regex] = STATE(199),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(199),
    [sym_list] = STATE(199),
    [sym_vector] = STATE(199),
    [sym_structure] = STATE(199),
    [sym_hash] = STATE(199),
    [sym_graph] = STATE(199),
    [sym_quote] = STATE(199),
    [sym_quasiquote] = STATE(199),
    [sym_syntax] = STATE(199),
    [sym_quasisyntax] = STATE(199),
    [sym_unquote] = STATE(199),
    [sym_unquote_splicing] = STATE(199),
    [sym_unsyntax] = STATE(199),
    [sym_unsyntax_splicing] = STATE(199),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(669),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(669),
    [sym_character] = ACTIONS(671),
    [sym_symbol] = ACTIONS(669),
    [sym_keyword] = ACTIONS(671),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [81] = {
    [sym__skip] = STATE(82),
    [sym_comment] = STATE(82),
    [sym_block_comment] = STATE(82),
    [sym_sexp_comment] = STATE(82),
    [sym__datum] = STATE(200),
    [sym_string] = STATE(200),
    [sym_byte_string] = STATE(200),
    [sym_here_string] = STATE(200),
    [sym_regex] = STATE(200),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(200),
    [sym_list] = STATE(200),
    [sym_vector] = STATE(200),
    [sym_structure] = STATE(200),
    [sym_hash] = STATE(200),
    [sym_graph] = STATE(200),
    [sym_quote] = STATE(200),
    [sym_quasiquote] = STATE(200),
    [sym_syntax] = STATE(200),
    [sym_quasisyntax] = STATE(200),
    [sym_unquote] = STATE(200),
    [sym_unquote_splicing] = STATE(200),
    [sym_unsyntax] = STATE(200),
    [sym_unsyntax_splicing] = STATE(200),
    [aux_sym_sexp_comment_repeat1] = STATE(82),
    [aux_sym__skip_token1] = ACTIONS(673),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(675),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(675),
    [sym_character] = ACTIONS(677),
    [sym_symbol] = ACTIONS(675),
    [sym_keyword] = ACTIONS(677),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [82] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(202),
    [sym_string] = STATE(202),
    [sym_byte_string] = STATE(202),
    [sym_here_string] = STATE(202),
    [sym_regex] = STATE(202),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(202),
    [sym_list] = STATE(202),
    [sym_vector] = STATE(202),
    [sym_structure] = STATE(202),
    [sym_hash] = STATE(202),
    [sym_graph] = STATE(202),
    [sym_quote] = STATE(202),
    [sym_quasiquote] = STATE(202),
    [sym_syntax] = STATE(202),
    [sym_quasisyntax] = STATE(202),
    [sym_unquote] = STATE(202),
    [sym_unquote_splicing] = STATE(202),
    [sym_unsyntax] = STATE(202),
    [sym_unsyntax_splicing] = STATE(202),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(679),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(679),
    [sym_character] = ACTIONS(681),
    [sym_symbol] = ACTIONS(679),
    [sym_keyword] = ACTIONS(681),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [83] = {
    [sym__skip] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_block_comment] = STATE(49),
    [sym_sexp_comment] = STATE(49),
    [sym__datum] = STATE(182),
    [sym_string] = STATE(182),
    [sym_byte_string] = STATE(182),
    [sym_here_string] = STATE(182),
    [sym_regex] = STATE(182),
    [sym__real_string] = STATE(201),
    [sym_box] = STATE(182),
    [sym_list] = STATE(182),
    [sym_vector] = STATE(182),
    [sym_structure] = STATE(182),
    [sym_hash] = STATE(182),
    [sym_graph] = STATE(182),
    [sym_quote] = STATE(182),
    [sym_quasiquote] = STATE(182),
    [sym_syntax] = STATE(182),
    [sym_quasisyntax] = STATE(182),
    [sym_unquote] = STATE(182),
    [sym_unquote_splicing] = STATE(182),
    [sym_unsyntax] = STATE(182),
    [sym_unsyntax_splicing] = STATE(182),
    [aux_sym_sexp_comment_repeat1] = STATE(49),
    [aux_sym__skip_token1] = ACTIONS(683),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(685),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_number] = ACTIONS(685),
    [sym_character] = ACTIONS(687),
    [sym_symbol] = ACTIONS(685),
    [sym_keyword] = ACTIONS(687),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhashalw] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_POUND_SQUOTE] = ACTIONS(515),
    [anon_sym_POUND_BQUOTE] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COMMA_AT] = ACTIONS(521),
    [anon_sym_POUND_COMMA] = ACTIONS(523),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(525),
  },
  [84] = {
    [sym__skip] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_block_comment] = STATE(35),
    [sym_sexp_comment] = STATE(35),
    [sym__datum] = STATE(153),
    [sym_string] = STATE(153),
    [sym_byte_string] = STATE(153),
    [sym_here_string] = STATE(153),
    [sym_regex] = STATE(153),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(153),
    [sym_list] = STATE(153),
    [sym_vector] = STATE(153),
    [sym_structure] = STATE(153),
    [sym_hash] = STATE(153),
    [sym_graph] = STATE(153),
    [sym_quote] = STATE(153),
    [sym_quasiquote] = STATE(153),
    [sym_syntax] = STATE(153),
    [sym_quasisyntax] = STATE(153),
    [sym_unquote] = STATE(153),
    [sym_unquote_splicing] = STATE(153),
    [sym_unsyntax] = STATE(153),
    [sym_unsyntax_splicing] = STATE(153),
    [aux_sym_sexp_comment_repeat1] = STATE(35),
    [aux_sym__skip_token1] = ACTIONS(689),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(691),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(691),
    [sym_character] = ACTIONS(693),
    [sym_symbol] = ACTIONS(691),
    [sym_keyword] = ACTIONS(693),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [85] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(107),
    [sym_string] = STATE(107),
    [sym_byte_string] = STATE(107),
    [sym_here_string] = STATE(107),
    [sym_regex] = STATE(107),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(107),
    [sym_list] = STATE(107),
    [sym_vector] = STATE(107),
    [sym_structure] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_graph] = STATE(107),
    [sym_quote] = STATE(107),
    [sym_quasiquote] = STATE(107),
    [sym_syntax] = STATE(107),
    [sym_quasisyntax] = STATE(107),
    [sym_unquote] = STATE(107),
    [sym_unquote_splicing] = STATE(107),
    [sym_unsyntax] = STATE(107),
    [sym_unsyntax_splicing] = STATE(107),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(695),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(697),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(697),
    [sym_character] = ACTIONS(699),
    [sym_symbol] = ACTIONS(697),
    [sym_keyword] = ACTIONS(699),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
  [86] = {
    [sym__skip] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_block_comment] = STATE(26),
    [sym_sexp_comment] = STATE(26),
    [sym__datum] = STATE(148),
    [sym_string] = STATE(148),
    [sym_byte_string] = STATE(148),
    [sym_here_string] = STATE(148),
    [sym_regex] = STATE(148),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(148),
    [sym_list] = STATE(148),
    [sym_vector] = STATE(148),
    [sym_structure] = STATE(148),
    [sym_hash] = STATE(148),
    [sym_graph] = STATE(148),
    [sym_quote] = STATE(148),
    [sym_quasiquote] = STATE(148),
    [sym_syntax] = STATE(148),
    [sym_quasisyntax] = STATE(148),
    [sym_unquote] = STATE(148),
    [sym_unquote_splicing] = STATE(148),
    [sym_unsyntax] = STATE(148),
    [sym_unsyntax_splicing] = STATE(148),
    [aux_sym_sexp_comment_repeat1] = STATE(26),
    [aux_sym__skip_token1] = ACTIONS(701),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(703),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(703),
    [sym_character] = ACTIONS(705),
    [sym_symbol] = ACTIONS(703),
    [sym_keyword] = ACTIONS(705),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [87] = {
    [sym__skip] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_block_comment] = STATE(27),
    [sym_sexp_comment] = STATE(27),
    [sym__datum] = STATE(149),
    [sym_string] = STATE(149),
    [sym_byte_string] = STATE(149),
    [sym_here_string] = STATE(149),
    [sym_regex] = STATE(149),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(149),
    [sym_list] = STATE(149),
    [sym_vector] = STATE(149),
    [sym_structure] = STATE(149),
    [sym_hash] = STATE(149),
    [sym_graph] = STATE(149),
    [sym_quote] = STATE(149),
    [sym_quasiquote] = STATE(149),
    [sym_syntax] = STATE(149),
    [sym_quasisyntax] = STATE(149),
    [sym_unquote] = STATE(149),
    [sym_unquote_splicing] = STATE(149),
    [sym_unsyntax] = STATE(149),
    [sym_unsyntax_splicing] = STATE(149),
    [aux_sym_sexp_comment_repeat1] = STATE(27),
    [aux_sym__skip_token1] = ACTIONS(707),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(709),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(709),
    [sym_character] = ACTIONS(711),
    [sym_symbol] = ACTIONS(709),
    [sym_keyword] = ACTIONS(711),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [88] = {
    [sym__skip] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_block_comment] = STATE(28),
    [sym_sexp_comment] = STATE(28),
    [sym__datum] = STATE(151),
    [sym_string] = STATE(151),
    [sym_byte_string] = STATE(151),
    [sym_here_string] = STATE(151),
    [sym_regex] = STATE(151),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(151),
    [sym_list] = STATE(151),
    [sym_vector] = STATE(151),
    [sym_structure] = STATE(151),
    [sym_hash] = STATE(151),
    [sym_graph] = STATE(151),
    [sym_quote] = STATE(151),
    [sym_quasiquote] = STATE(151),
    [sym_syntax] = STATE(151),
    [sym_quasisyntax] = STATE(151),
    [sym_unquote] = STATE(151),
    [sym_unquote_splicing] = STATE(151),
    [sym_unsyntax] = STATE(151),
    [sym_unsyntax_splicing] = STATE(151),
    [aux_sym_sexp_comment_repeat1] = STATE(28),
    [aux_sym__skip_token1] = ACTIONS(713),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(715),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(715),
    [sym_character] = ACTIONS(717),
    [sym_symbol] = ACTIONS(715),
    [sym_keyword] = ACTIONS(717),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [89] = {
    [sym__skip] = STATE(29),
    [sym_comment] = STATE(29),
    [sym_block_comment] = STATE(29),
    [sym_sexp_comment] = STATE(29),
    [sym__datum] = STATE(152),
    [sym_string] = STATE(152),
    [sym_byte_string] = STATE(152),
    [sym_here_string] = STATE(152),
    [sym_regex] = STATE(152),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(152),
    [sym_list] = STATE(152),
    [sym_vector] = STATE(152),
    [sym_structure] = STATE(152),
    [sym_hash] = STATE(152),
    [sym_graph] = STATE(152),
    [sym_quote] = STATE(152),
    [sym_quasiquote] = STATE(152),
    [sym_syntax] = STATE(152),
    [sym_quasisyntax] = STATE(152),
    [sym_unquote] = STATE(152),
    [sym_unquote_splicing] = STATE(152),
    [sym_unsyntax] = STATE(152),
    [sym_unsyntax_splicing] = STATE(152),
    [aux_sym_sexp_comment_repeat1] = STATE(29),
    [aux_sym__skip_token1] = ACTIONS(719),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(721),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(721),
    [sym_character] = ACTIONS(723),
    [sym_symbol] = ACTIONS(721),
    [sym_keyword] = ACTIONS(723),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [90] = {
    [sym__skip] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_block_comment] = STATE(30),
    [sym_sexp_comment] = STATE(30),
    [sym__datum] = STATE(154),
    [sym_string] = STATE(154),
    [sym_byte_string] = STATE(154),
    [sym_here_string] = STATE(154),
    [sym_regex] = STATE(154),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(154),
    [sym_list] = STATE(154),
    [sym_vector] = STATE(154),
    [sym_structure] = STATE(154),
    [sym_hash] = STATE(154),
    [sym_graph] = STATE(154),
    [sym_quote] = STATE(154),
    [sym_quasiquote] = STATE(154),
    [sym_syntax] = STATE(154),
    [sym_quasisyntax] = STATE(154),
    [sym_unquote] = STATE(154),
    [sym_unquote_splicing] = STATE(154),
    [sym_unsyntax] = STATE(154),
    [sym_unsyntax_splicing] = STATE(154),
    [aux_sym_sexp_comment_repeat1] = STATE(30),
    [aux_sym__skip_token1] = ACTIONS(725),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(727),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(727),
    [sym_character] = ACTIONS(729),
    [sym_symbol] = ACTIONS(727),
    [sym_keyword] = ACTIONS(729),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [91] = {
    [sym__skip] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym_sexp_comment] = STATE(31),
    [sym__datum] = STATE(155),
    [sym_string] = STATE(155),
    [sym_byte_string] = STATE(155),
    [sym_here_string] = STATE(155),
    [sym_regex] = STATE(155),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(155),
    [sym_list] = STATE(155),
    [sym_vector] = STATE(155),
    [sym_structure] = STATE(155),
    [sym_hash] = STATE(155),
    [sym_graph] = STATE(155),
    [sym_quote] = STATE(155),
    [sym_quasiquote] = STATE(155),
    [sym_syntax] = STATE(155),
    [sym_quasisyntax] = STATE(155),
    [sym_unquote] = STATE(155),
    [sym_unquote_splicing] = STATE(155),
    [sym_unsyntax] = STATE(155),
    [sym_unsyntax_splicing] = STATE(155),
    [aux_sym_sexp_comment_repeat1] = STATE(31),
    [aux_sym__skip_token1] = ACTIONS(731),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(733),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(733),
    [sym_character] = ACTIONS(735),
    [sym_symbol] = ACTIONS(733),
    [sym_keyword] = ACTIONS(735),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [anon_sym_POUNDhash] = ACTIONS(35),
    [anon_sym_POUNDhashalw] = ACTIONS(37),
    [anon_sym_POUNDhasheq] = ACTIONS(35),
    [anon_sym_POUNDhasheqv] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_POUND_SQUOTE] = ACTIONS(43),
    [anon_sym_POUND_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_COMMA_AT] = ACTIONS(49),
    [anon_sym_POUND_COMMA] = ACTIONS(51),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(53),
  },
  [92] = {
    [sym__skip] = STATE(133),
    [sym_comment] = STATE(133),
    [sym_block_comment] = STATE(133),
    [sym_sexp_comment] = STATE(133),
    [sym__datum] = STATE(111),
    [sym_string] = STATE(111),
    [sym_byte_string] = STATE(111),
    [sym_here_string] = STATE(111),
    [sym_regex] = STATE(111),
    [sym__real_string] = STATE(114),
    [sym_box] = STATE(111),
    [sym_list] = STATE(111),
    [sym_vector] = STATE(111),
    [sym_structure] = STATE(111),
    [sym_hash] = STATE(111),
    [sym_graph] = STATE(111),
    [sym_quote] = STATE(111),
    [sym_quasiquote] = STATE(111),
    [sym_syntax] = STATE(111),
    [sym_quasisyntax] = STATE(111),
    [sym_unquote] = STATE(111),
    [sym_unquote_splicing] = STATE(111),
    [sym_unsyntax] = STATE(111),
    [sym_unsyntax_splicing] = STATE(111),
    [aux_sym_sexp_comment_repeat1] = STATE(133),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(345),
    [anon_sym_POUND_PIPE] = ACTIONS(347),
    [anon_sym_POUND_SEMI] = ACTIONS(349),
    [sym__line_comment] = ACTIONS(345),
    [sym_boolean] = ACTIONS(737),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_POUND_LT_LT] = ACTIONS(159),
    [aux_sym_regex_token1] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(737),
    [sym_character] = ACTIONS(739),
    [sym_symbol] = ACTIONS(737),
    [sym_keyword] = ACTIONS(739),
    [anon_sym_POUND_AMP] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_POUNDfl] = ACTIONS(175),
    [anon_sym_POUNDfx] = ACTIONS(175),
    [anon_sym_POUNDs] = ACTIONS(177),
    [anon_sym_POUNDhash] = ACTIONS(179),
    [anon_sym_POUNDhashalw] = ACTIONS(181),
    [anon_sym_POUNDhasheq] = ACTIONS(179),
    [anon_sym_POUNDhasheqv] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COMMA_AT] = ACTIONS(193),
    [anon_sym_POUND_COMMA] = ACTIONS(195),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(197),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(743), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(741), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [45] = 2,
    ACTIONS(747), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(745), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [90] = 2,
    ACTIONS(751), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(749), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [135] = 2,
    ACTIONS(755), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(753), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [180] = 2,
    ACTIONS(759), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(757), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [225] = 2,
    ACTIONS(763), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(761), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [270] = 2,
    ACTIONS(767), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(765), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [315] = 2,
    ACTIONS(771), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(769), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [360] = 2,
    ACTIONS(775), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(773), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [405] = 2,
    ACTIONS(779), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(777), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [450] = 2,
    ACTIONS(783), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(781), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [495] = 2,
    ACTIONS(787), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(785), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [540] = 2,
    ACTIONS(791), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(789), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [585] = 2,
    ACTIONS(795), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(793), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [630] = 2,
    ACTIONS(799), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(797), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [675] = 2,
    ACTIONS(803), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(801), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [720] = 2,
    ACTIONS(807), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(805), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [765] = 2,
    ACTIONS(811), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(809), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [810] = 2,
    ACTIONS(815), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(813), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [855] = 2,
    ACTIONS(819), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(817), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [900] = 2,
    ACTIONS(823), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(821), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [945] = 2,
    ACTIONS(827), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(825), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [990] = 2,
    ACTIONS(831), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(829), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1035] = 2,
    ACTIONS(835), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(833), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1080] = 2,
    ACTIONS(839), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(837), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1125] = 2,
    ACTIONS(843), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(841), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1170] = 2,
    ACTIONS(847), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(845), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1215] = 2,
    ACTIONS(851), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(849), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1260] = 2,
    ACTIONS(855), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(853), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1305] = 2,
    ACTIONS(859), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(857), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1350] = 2,
    ACTIONS(863), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(861), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1395] = 2,
    ACTIONS(867), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(865), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1440] = 2,
    ACTIONS(871), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(869), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1485] = 2,
    ACTIONS(875), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(873), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1530] = 2,
    ACTIONS(879), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(877), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1575] = 2,
    ACTIONS(883), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(881), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1620] = 2,
    ACTIONS(887), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(885), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1665] = 2,
    ACTIONS(891), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(889), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1710] = 2,
    ACTIONS(895), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(893), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1755] = 2,
    ACTIONS(899), 10,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(897), 30,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1800] = 7,
    ACTIONS(901), 1,
      aux_sym__skip_token1,
    ACTIONS(907), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(910), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(904), 2,
      aux_sym_comment_token1,
      sym__line_comment,
    STATE(133), 5,
      sym__skip,
      sym_comment,
      sym_block_comment,
      sym_sexp_comment,
      aux_sym_sexp_comment_repeat1,
    ACTIONS(913), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(915), 20,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [1853] = 2,
    ACTIONS(775), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(773), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1895] = 2,
    ACTIONS(883), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(881), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1937] = 2,
    ACTIONS(887), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(885), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1979] = 2,
    ACTIONS(891), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(889), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2021] = 2,
    ACTIONS(895), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(893), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2063] = 2,
    ACTIONS(815), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(813), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2105] = 2,
    ACTIONS(819), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(817), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2147] = 2,
    ACTIONS(747), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(745), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2189] = 2,
    ACTIONS(751), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(749), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2231] = 2,
    ACTIONS(827), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(825), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2273] = 2,
    ACTIONS(759), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(757), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2315] = 2,
    ACTIONS(835), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(833), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2357] = 2,
    ACTIONS(847), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(845), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2399] = 2,
    ACTIONS(755), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(753), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2441] = 2,
    ACTIONS(767), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(765), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2483] = 2,
    ACTIONS(771), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(769), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2525] = 2,
    ACTIONS(879), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(877), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2567] = 2,
    ACTIONS(779), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(777), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2609] = 2,
    ACTIONS(787), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(785), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2651] = 2,
    ACTIONS(799), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(797), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2693] = 2,
    ACTIONS(795), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(793), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2735] = 2,
    ACTIONS(807), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(805), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2777] = 2,
    ACTIONS(743), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(741), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2819] = 2,
    ACTIONS(823), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(821), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2861] = 2,
    ACTIONS(783), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(781), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2903] = 2,
    ACTIONS(831), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(829), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2945] = 2,
    ACTIONS(791), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(789), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2987] = 2,
    ACTIONS(803), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(801), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3029] = 2,
    ACTIONS(859), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(857), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3071] = 2,
    ACTIONS(843), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(841), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3113] = 2,
    ACTIONS(811), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(809), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3155] = 2,
    ACTIONS(839), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(837), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3197] = 2,
    ACTIONS(763), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(761), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3239] = 2,
    ACTIONS(851), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(849), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3281] = 2,
    ACTIONS(863), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(861), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3323] = 2,
    ACTIONS(867), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(865), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3365] = 2,
    ACTIONS(871), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(869), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3407] = 2,
    ACTIONS(899), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(897), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3449] = 2,
    ACTIONS(875), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(873), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3491] = 2,
    ACTIONS(855), 9,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(853), 28,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3533] = 2,
    ACTIONS(851), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(849), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3571] = 2,
    ACTIONS(847), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(845), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3609] = 2,
    ACTIONS(755), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(753), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3647] = 2,
    ACTIONS(767), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(765), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3685] = 2,
    ACTIONS(771), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(769), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3723] = 2,
    ACTIONS(779), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(777), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3761] = 2,
    ACTIONS(787), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(785), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3799] = 2,
    ACTIONS(795), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(793), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3837] = 2,
    ACTIONS(799), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(797), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3875] = 2,
    ACTIONS(807), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(805), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3913] = 2,
    ACTIONS(763), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(761), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3951] = 2,
    ACTIONS(743), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(741), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [3989] = 2,
    ACTIONS(823), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(821), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4027] = 2,
    ACTIONS(859), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(857), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4065] = 2,
    ACTIONS(839), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(837), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4103] = 2,
    ACTIONS(863), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(861), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4141] = 2,
    ACTIONS(867), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(865), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4179] = 2,
    ACTIONS(871), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(869), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4217] = 2,
    ACTIONS(875), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(873), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4255] = 2,
    ACTIONS(879), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(877), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4293] = 2,
    ACTIONS(835), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(833), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4331] = 2,
    ACTIONS(887), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(885), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4369] = 2,
    ACTIONS(891), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(889), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4407] = 2,
    ACTIONS(895), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(893), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4445] = 2,
    ACTIONS(815), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(813), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4483] = 2,
    ACTIONS(819), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(817), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4521] = 2,
    ACTIONS(751), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(749), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4559] = 2,
    ACTIONS(827), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(825), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4597] = 2,
    ACTIONS(759), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(757), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4635] = 2,
    ACTIONS(855), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(853), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4673] = 2,
    ACTIONS(775), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(773), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4711] = 2,
    ACTIONS(783), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(781), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4749] = 2,
    ACTIONS(791), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(789), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4787] = 2,
    ACTIONS(803), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(801), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4825] = 2,
    ACTIONS(843), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(841), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4863] = 2,
    ACTIONS(811), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(809), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4901] = 2,
    ACTIONS(899), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(897), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4939] = 2,
    ACTIONS(883), 8,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(881), 25,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhashalw,
      anon_sym_POUNDhasheqv,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [4977] = 7,
    ACTIONS(491), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    ACTIONS(917), 1,
      sym_decimal,
    STATE(204), 1,
      sym__real_string,
    STATE(205), 1,
      sym_list,
  [4999] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(919), 1,
      sym_decimal,
    STATE(134), 1,
      sym__real_string,
    STATE(158), 1,
      sym_list,
  [5021] = 7,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(921), 1,
      sym_decimal,
    STATE(101), 1,
      sym__real_string,
    STATE(103), 1,
      sym_list,
  [5043] = 6,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_EQ,
    STATE(174), 1,
      sym_list,
  [5062] = 6,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(927), 1,
      anon_sym_POUND,
    ACTIONS(929), 1,
      anon_sym_EQ,
    STATE(167), 1,
      sym_list,
  [5081] = 6,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_POUND,
    ACTIONS(933), 1,
      anon_sym_EQ,
    STATE(120), 1,
      sym_list,
  [5100] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(937), 1,
      aux_sym_block_comment_token1,
    ACTIONS(939), 1,
      anon_sym_PIPE_POUND,
    STATE(222), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5114] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(941), 1,
      aux_sym_block_comment_token1,
    ACTIONS(943), 1,
      anon_sym_PIPE_POUND,
    STATE(223), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5128] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(945), 1,
      aux_sym_block_comment_token1,
    ACTIONS(947), 1,
      anon_sym_PIPE_POUND,
    STATE(226), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5142] = 5,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(949), 1,
      sym_decimal,
    STATE(103), 1,
      sym_list,
  [5158] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(941), 1,
      aux_sym_block_comment_token1,
    ACTIONS(951), 1,
      anon_sym_PIPE_POUND,
    STATE(223), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5172] = 4,
    ACTIONS(953), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(956), 1,
      aux_sym_block_comment_token1,
    ACTIONS(959), 1,
      anon_sym_PIPE_POUND,
    STATE(223), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5186] = 5,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      sym_decimal,
    STATE(158), 1,
      sym_list,
  [5202] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(963), 1,
      aux_sym_block_comment_token1,
    ACTIONS(965), 1,
      anon_sym_PIPE_POUND,
    STATE(228), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5216] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(941), 1,
      aux_sym_block_comment_token1,
    ACTIONS(967), 1,
      anon_sym_PIPE_POUND,
    STATE(223), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5230] = 5,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    ACTIONS(969), 1,
      sym_decimal,
    STATE(205), 1,
      sym_list,
  [5246] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(941), 1,
      aux_sym_block_comment_token1,
    ACTIONS(971), 1,
      anon_sym_PIPE_POUND,
    STATE(223), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5260] = 4,
    ACTIONS(935), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(973), 1,
      aux_sym_block_comment_token1,
    ACTIONS(975), 1,
      anon_sym_PIPE_POUND,
    STATE(219), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5274] = 4,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_list,
  [5287] = 3,
    ACTIONS(977), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(979), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5298] = 3,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
    STATE(244), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(983), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5309] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_list,
  [5322] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_list,
  [5335] = 4,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_list,
  [5348] = 4,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_list,
  [5361] = 3,
    ACTIONS(985), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(987), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5372] = 3,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(979), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5383] = 4,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_list,
  [5396] = 4,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(175), 1,
      sym_list,
  [5409] = 4,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_list,
  [5422] = 3,
    ACTIONS(992), 1,
      anon_sym_DQUOTE,
    STATE(238), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(994), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5433] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_list,
  [5446] = 3,
    ACTIONS(996), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(979), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5457] = 3,
    ACTIONS(998), 1,
      anon_sym_DQUOTE,
    STATE(231), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(1000), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [5468] = 2,
    ACTIONS(855), 1,
      aux_sym_block_comment_token1,
    ACTIONS(853), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [5476] = 2,
    ACTIONS(859), 1,
      aux_sym_block_comment_token1,
    ACTIONS(857), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [5484] = 2,
    ACTIONS(491), 1,
      anon_sym_DQUOTE,
    STATE(207), 1,
      sym__real_string,
  [5491] = 2,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym__real_string,
  [5498] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym__real_string,
  [5505] = 1,
    ACTIONS(1002), 1,
      sym__here_string_body,
  [5509] = 1,
    ACTIONS(559), 1,
      sym_lang_name,
  [5513] = 1,
    ACTIONS(1004), 1,
      sym__here_string_body,
  [5517] = 1,
    ACTIONS(1006), 1,
      ts_builtin_sym_end,
  [5521] = 1,
    ACTIONS(481), 1,
      sym_lang_name,
  [5525] = 1,
    ACTIONS(1008), 1,
      sym__here_string_body,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(93)] = 0,
  [SMALL_STATE(94)] = 45,
  [SMALL_STATE(95)] = 90,
  [SMALL_STATE(96)] = 135,
  [SMALL_STATE(97)] = 180,
  [SMALL_STATE(98)] = 225,
  [SMALL_STATE(99)] = 270,
  [SMALL_STATE(100)] = 315,
  [SMALL_STATE(101)] = 360,
  [SMALL_STATE(102)] = 405,
  [SMALL_STATE(103)] = 450,
  [SMALL_STATE(104)] = 495,
  [SMALL_STATE(105)] = 540,
  [SMALL_STATE(106)] = 585,
  [SMALL_STATE(107)] = 630,
  [SMALL_STATE(108)] = 675,
  [SMALL_STATE(109)] = 720,
  [SMALL_STATE(110)] = 765,
  [SMALL_STATE(111)] = 810,
  [SMALL_STATE(112)] = 855,
  [SMALL_STATE(113)] = 900,
  [SMALL_STATE(114)] = 945,
  [SMALL_STATE(115)] = 990,
  [SMALL_STATE(116)] = 1035,
  [SMALL_STATE(117)] = 1080,
  [SMALL_STATE(118)] = 1125,
  [SMALL_STATE(119)] = 1170,
  [SMALL_STATE(120)] = 1215,
  [SMALL_STATE(121)] = 1260,
  [SMALL_STATE(122)] = 1305,
  [SMALL_STATE(123)] = 1350,
  [SMALL_STATE(124)] = 1395,
  [SMALL_STATE(125)] = 1440,
  [SMALL_STATE(126)] = 1485,
  [SMALL_STATE(127)] = 1530,
  [SMALL_STATE(128)] = 1575,
  [SMALL_STATE(129)] = 1620,
  [SMALL_STATE(130)] = 1665,
  [SMALL_STATE(131)] = 1710,
  [SMALL_STATE(132)] = 1755,
  [SMALL_STATE(133)] = 1800,
  [SMALL_STATE(134)] = 1853,
  [SMALL_STATE(135)] = 1895,
  [SMALL_STATE(136)] = 1937,
  [SMALL_STATE(137)] = 1979,
  [SMALL_STATE(138)] = 2021,
  [SMALL_STATE(139)] = 2063,
  [SMALL_STATE(140)] = 2105,
  [SMALL_STATE(141)] = 2147,
  [SMALL_STATE(142)] = 2189,
  [SMALL_STATE(143)] = 2231,
  [SMALL_STATE(144)] = 2273,
  [SMALL_STATE(145)] = 2315,
  [SMALL_STATE(146)] = 2357,
  [SMALL_STATE(147)] = 2399,
  [SMALL_STATE(148)] = 2441,
  [SMALL_STATE(149)] = 2483,
  [SMALL_STATE(150)] = 2525,
  [SMALL_STATE(151)] = 2567,
  [SMALL_STATE(152)] = 2609,
  [SMALL_STATE(153)] = 2651,
  [SMALL_STATE(154)] = 2693,
  [SMALL_STATE(155)] = 2735,
  [SMALL_STATE(156)] = 2777,
  [SMALL_STATE(157)] = 2819,
  [SMALL_STATE(158)] = 2861,
  [SMALL_STATE(159)] = 2903,
  [SMALL_STATE(160)] = 2945,
  [SMALL_STATE(161)] = 2987,
  [SMALL_STATE(162)] = 3029,
  [SMALL_STATE(163)] = 3071,
  [SMALL_STATE(164)] = 3113,
  [SMALL_STATE(165)] = 3155,
  [SMALL_STATE(166)] = 3197,
  [SMALL_STATE(167)] = 3239,
  [SMALL_STATE(168)] = 3281,
  [SMALL_STATE(169)] = 3323,
  [SMALL_STATE(170)] = 3365,
  [SMALL_STATE(171)] = 3407,
  [SMALL_STATE(172)] = 3449,
  [SMALL_STATE(173)] = 3491,
  [SMALL_STATE(174)] = 3533,
  [SMALL_STATE(175)] = 3571,
  [SMALL_STATE(176)] = 3609,
  [SMALL_STATE(177)] = 3647,
  [SMALL_STATE(178)] = 3685,
  [SMALL_STATE(179)] = 3723,
  [SMALL_STATE(180)] = 3761,
  [SMALL_STATE(181)] = 3799,
  [SMALL_STATE(182)] = 3837,
  [SMALL_STATE(183)] = 3875,
  [SMALL_STATE(184)] = 3913,
  [SMALL_STATE(185)] = 3951,
  [SMALL_STATE(186)] = 3989,
  [SMALL_STATE(187)] = 4027,
  [SMALL_STATE(188)] = 4065,
  [SMALL_STATE(189)] = 4103,
  [SMALL_STATE(190)] = 4141,
  [SMALL_STATE(191)] = 4179,
  [SMALL_STATE(192)] = 4217,
  [SMALL_STATE(193)] = 4255,
  [SMALL_STATE(194)] = 4293,
  [SMALL_STATE(195)] = 4331,
  [SMALL_STATE(196)] = 4369,
  [SMALL_STATE(197)] = 4407,
  [SMALL_STATE(198)] = 4445,
  [SMALL_STATE(199)] = 4483,
  [SMALL_STATE(200)] = 4521,
  [SMALL_STATE(201)] = 4559,
  [SMALL_STATE(202)] = 4597,
  [SMALL_STATE(203)] = 4635,
  [SMALL_STATE(204)] = 4673,
  [SMALL_STATE(205)] = 4711,
  [SMALL_STATE(206)] = 4749,
  [SMALL_STATE(207)] = 4787,
  [SMALL_STATE(208)] = 4825,
  [SMALL_STATE(209)] = 4863,
  [SMALL_STATE(210)] = 4901,
  [SMALL_STATE(211)] = 4939,
  [SMALL_STATE(212)] = 4977,
  [SMALL_STATE(213)] = 4999,
  [SMALL_STATE(214)] = 5021,
  [SMALL_STATE(215)] = 5043,
  [SMALL_STATE(216)] = 5062,
  [SMALL_STATE(217)] = 5081,
  [SMALL_STATE(218)] = 5100,
  [SMALL_STATE(219)] = 5114,
  [SMALL_STATE(220)] = 5128,
  [SMALL_STATE(221)] = 5142,
  [SMALL_STATE(222)] = 5158,
  [SMALL_STATE(223)] = 5172,
  [SMALL_STATE(224)] = 5186,
  [SMALL_STATE(225)] = 5202,
  [SMALL_STATE(226)] = 5216,
  [SMALL_STATE(227)] = 5230,
  [SMALL_STATE(228)] = 5246,
  [SMALL_STATE(229)] = 5260,
  [SMALL_STATE(230)] = 5274,
  [SMALL_STATE(231)] = 5287,
  [SMALL_STATE(232)] = 5298,
  [SMALL_STATE(233)] = 5309,
  [SMALL_STATE(234)] = 5322,
  [SMALL_STATE(235)] = 5335,
  [SMALL_STATE(236)] = 5348,
  [SMALL_STATE(237)] = 5361,
  [SMALL_STATE(238)] = 5372,
  [SMALL_STATE(239)] = 5383,
  [SMALL_STATE(240)] = 5396,
  [SMALL_STATE(241)] = 5409,
  [SMALL_STATE(242)] = 5422,
  [SMALL_STATE(243)] = 5433,
  [SMALL_STATE(244)] = 5446,
  [SMALL_STATE(245)] = 5457,
  [SMALL_STATE(246)] = 5468,
  [SMALL_STATE(247)] = 5476,
  [SMALL_STATE(248)] = 5484,
  [SMALL_STATE(249)] = 5491,
  [SMALL_STATE(250)] = 5498,
  [SMALL_STATE(251)] = 5505,
  [SMALL_STATE(252)] = 5509,
  [SMALL_STATE(253)] = 5513,
  [SMALL_STATE(254)] = 5517,
  [SMALL_STATE(255)] = 5521,
  [SMALL_STATE(256)] = 5525,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(251),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_here_string, 2, 0, 0),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_here_string, 2, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 2, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 2, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3, 0, 0),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 3, 0, 0),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 3, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3, 0, 0),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3, 0, 0),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3, 0, 0),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3, 0, 0),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3, 0, 0),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2, 0, 0),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2, 0, 0),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sexp_comment_repeat1, 2, 0, 0),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2, 0, 0),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [956] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2, 0, 0),
  [987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1006] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__here_string_body = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__here_string_body] = sym__here_string_body,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__here_string_body] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_racket_external_scanner_create(void);
void tree_sitter_racket_external_scanner_destroy(void *);
bool tree_sitter_racket_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_racket_external_scanner_serialize(void *, char *);
void tree_sitter_racket_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_racket(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_racket_external_scanner_create,
      tree_sitter_racket_external_scanner_destroy,
      tree_sitter_racket_external_scanner_scan,
      tree_sitter_racket_external_scanner_serialize,
      tree_sitter_racket_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
