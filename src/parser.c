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
#define STATE_COUNT 177
#define LARGE_STATE_COUNT 65
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
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
  aux_sym_hash_token1 = 31,
  aux_sym_graph_token1 = 32,
  aux_sym_graph_token2 = 33,
  anon_sym_SQUOTE = 34,
  anon_sym_BQUOTE = 35,
  anon_sym_POUND_SQUOTE = 36,
  anon_sym_POUND_BQUOTE = 37,
  anon_sym_COMMA = 38,
  anon_sym_COMMA_AT = 39,
  anon_sym_POUND_COMMA = 40,
  anon_sym_POUND_COMMA_AT = 41,
  anon_sym_POUNDreader = 42,
  anon_sym_POUNDlang = 43,
  anon_sym_POUND_BANG = 44,
  sym_lang_name = 45,
  sym__here_string_body = 46,
  sym_program = 47,
  sym__token = 48,
  sym__skip = 49,
  sym_comment = 50,
  sym_block_comment = 51,
  sym_sexp_comment = 52,
  sym__datum = 53,
  sym_string = 54,
  sym_byte_string = 55,
  sym_here_string = 56,
  sym_regex = 57,
  sym__real_string = 58,
  sym_box = 59,
  sym_list = 60,
  sym_vector = 61,
  sym_structure = 62,
  sym_hash = 63,
  sym_graph = 64,
  sym_quote = 65,
  sym_quasiquote = 66,
  sym_syntax = 67,
  sym_quasisyntax = 68,
  sym_unquote = 69,
  sym_unquote_splicing = 70,
  sym_unsyntax = 71,
  sym_unsyntax_splicing = 72,
  sym_extension = 73,
  aux_sym_program_repeat1 = 74,
  aux_sym_block_comment_repeat1 = 75,
  aux_sym_sexp_comment_repeat1 = 76,
  aux_sym__real_string_repeat1 = 77,
  aux_sym_list_repeat1 = 78,
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
  [aux_sym_hash_token1] = "hash_token1",
  [aux_sym_graph_token1] = "graph_token1",
  [aux_sym_graph_token2] = "graph_token2",
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
  [aux_sym_hash_token1] = aux_sym_hash_token1,
  [aux_sym_graph_token1] = aux_sym_graph_token1,
  [aux_sym_graph_token2] = aux_sym_graph_token2,
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
  [aux_sym_hash_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_graph_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_graph_token2] = {
    .visible = false,
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 10,
  [11] = 10,
  [12] = 3,
  [13] = 4,
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 17,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 18,
  [36] = 19,
  [37] = 37,
  [38] = 31,
  [39] = 32,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 37,
  [46] = 21,
  [47] = 22,
  [48] = 23,
  [49] = 24,
  [50] = 25,
  [51] = 26,
  [52] = 52,
  [53] = 28,
  [54] = 29,
  [55] = 30,
  [56] = 33,
  [57] = 52,
  [58] = 40,
  [59] = 41,
  [60] = 42,
  [61] = 43,
  [62] = 34,
  [63] = 44,
  [64] = 20,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
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
  [106] = 70,
  [107] = 89,
  [108] = 91,
  [109] = 92,
  [110] = 93,
  [111] = 94,
  [112] = 95,
  [113] = 96,
  [114] = 78,
  [115] = 97,
  [116] = 79,
  [117] = 98,
  [118] = 80,
  [119] = 99,
  [120] = 100,
  [121] = 81,
  [122] = 101,
  [123] = 102,
  [124] = 82,
  [125] = 103,
  [126] = 66,
  [127] = 83,
  [128] = 90,
  [129] = 88,
  [130] = 71,
  [131] = 72,
  [132] = 73,
  [133] = 74,
  [134] = 75,
  [135] = 76,
  [136] = 77,
  [137] = 67,
  [138] = 85,
  [139] = 84,
  [140] = 104,
  [141] = 86,
  [142] = 65,
  [143] = 69,
  [144] = 87,
  [145] = 68,
  [146] = 146,
  [147] = 146,
  [148] = 148,
  [149] = 148,
  [150] = 150,
  [151] = 151,
  [152] = 150,
  [153] = 153,
  [154] = 153,
  [155] = 148,
  [156] = 150,
  [157] = 157,
  [158] = 157,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 160,
  [163] = 163,
  [164] = 163,
  [165] = 161,
  [166] = 166,
  [167] = 166,
  [168] = 85,
  [169] = 65,
  [170] = 170,
  [171] = 170,
  [172] = 172,
  [173] = 173,
  [174] = 172,
  [175] = 175,
  [176] = 175,
};

static TSCharacterRange aux_sym__skip_token1_character_set_1[] = {
  {'\t', '\r'}, {' ', ' '}, {0x85, 0x85}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f},
  {0x205f, 0x205f}, {0x3000, 0x3000}, {0xfeff, 0xfeff},
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
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '"', 260,
        '#', 256,
        '\'', 474,
        '(', 460,
        ')', 461,
        ',', 478,
        '.', 241,
        ';', 243,
        '[', 462,
        ']', 463,
        '`', 475,
        '{', 464,
        '|', 246,
        '}', 465,
      );
      if (set_contains(aux_sym__skip_token1_character_set_1, 11, lookahead)) ADVANCE(240);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(263);
      if (lookahead == 'U') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead == 'x') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
      if (set_contains(sym_escape_sequence_character_set_1, 13, lookahead)) ADVANCE(262);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(484);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 260,
        '#', 255,
        '\'', 474,
        '(', 460,
        ')', 461,
        ',', 479,
        '.', 242,
        ';', 243,
        '[', 462,
        '\\', 236,
        ']', 463,
        '`', 475,
        '{', 464,
        '|', 115,
        '}', 465,
        '+', 425,
        '-', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (set_contains(aux_sym__skip_token1_character_set_1, 11, lookahead)) ADVANCE(240);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '(') ADVANCE(460);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == '{') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(280);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '=') ADVANCE(473);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '=') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '=') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '=') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '=') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '=') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '=') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '=') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(16);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '#', 19,
        '.', 23,
        '/', 229,
        'I', 273,
        'i', 273,
        'L', 131,
        'S', 131,
        'l', 131,
        's', 131,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '#', 19,
        '.', 22,
        '/', 229,
        'I', 273,
        'i', 273,
        'L', 131,
        'S', 131,
        'l', 131,
        's', 131,
      );
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(346);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(31);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(33);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(175);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(193);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(292);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(393);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(192);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(61);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(391);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(392);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(352);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(190);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(306);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(306);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(386);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(348);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(16);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(360);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(360);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(31);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(336);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(390);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(356);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(176);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(191);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(177);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(194);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(178);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(195);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 71:
      if (lookahead == '<') ADVANCE(257);
      END_STATE();
    case 72:
      ADVANCE_MAP(
        'U', 417,
        'b', 400,
        'l', 405,
        'n', 403,
        'p', 401,
        'r', 404,
        's', 407,
        't', 402,
        'u', 413,
        'v', 408,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(399);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(399);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(259);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(2);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 94:
      if (lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 113:
      if (lookahead == 'w') ADVANCE(97);
      END_STATE();
    case 114:
      if (lookahead == 'x') ADVANCE(259);
      END_STATE();
    case 115:
      if (lookahead == '|') ADVANCE(457);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == '|') ADVANCE(458);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(394);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(371);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(395);
      END_STATE();
    case 122:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 123:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 124:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(377);
      END_STATE();
    case 125:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(185);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(370);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 127:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 128:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(189);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(157);
      END_STATE();
    case 129:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 130:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(376);
      END_STATE();
    case 131:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 132:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(158);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 144:
      ADVANCE_MAP(
        'B', 42,
        'b', 42,
        'D', 39,
        'd', 39,
        'O', 50,
        'o', 50,
        'X', 45,
        'x', 45,
      );
      END_STATE();
    case 145:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 146:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 147:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 148:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 149:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 150:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 151:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 152:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 153:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 154:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 155:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(470);
      END_STATE();
    case 156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(157);
      END_STATE();
    case 158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 173:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(471);
      END_STATE();
    case 174:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 175:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(369);
      END_STATE();
    case 176:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(372);
      END_STATE();
    case 177:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      END_STATE();
    case 178:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(378);
      END_STATE();
    case 179:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(469);
      END_STATE();
    case 180:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(290);
      END_STATE();
    case 181:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(304);
      END_STATE();
    case 182:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(394);
      END_STATE();
    case 183:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(371);
      END_STATE();
    case 184:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(334);
      END_STATE();
    case 185:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(370);
      END_STATE();
    case 186:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      END_STATE();
    case 187:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(20);
      END_STATE();
    case 188:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(342);
      END_STATE();
    case 189:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(157);
      END_STATE();
    case 190:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(273);
      END_STATE();
    case 191:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(369);
      END_STATE();
    case 192:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(156);
      END_STATE();
    case 193:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(372);
      END_STATE();
    case 194:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      END_STATE();
    case 195:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(378);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 200:
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(418);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(399);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(350);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(358);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(395);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(377);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(376);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(364);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(33);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(362);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(158);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 235:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(457);
      END_STATE();
    case 237:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 238:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '"', 260,
        '#', 255,
        '\'', 474,
        '(', 460,
        ',', 479,
        '.', 449,
        ';', 243,
        '[', 462,
        '\\', 236,
        '`', 475,
        '{', 464,
        '|', 115,
        '+', 425,
        '-', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (set_contains(aux_sym__skip_token1_character_set_1, 11, lookahead)) ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(457);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__skip_token1);
      if (set_contains(aux_sym__skip_token1_character_set_1, 11, lookahead)) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x85 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(244);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 0x85 ||
          lookahead == 0x2028 ||
          lookahead == 0x2029) ADVANCE(251);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x85 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == 'x') ADVANCE(467);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_POUND);
      ADVANCE_MAP(
        '!', 485,
        '%', 457,
        '&', 459,
        '\'', 476,
        ',', 481,
        ':', 458,
        ';', 249,
        '<', 71,
        '\\', 72,
        '`', 477,
        'f', 253,
        'l', 73,
        'p', 114,
        'r', 86,
        's', 468,
        't', 254,
        '|', 244,
        'B', 6,
        'b', 6,
        'C', 200,
        'c', 200,
        'D', 25,
        'd', 25,
        'F', 252,
        'T', 252,
        'H', 133,
        'h', 133,
        'O', 30,
        'o', 30,
        'X', 35,
        'x', 35,
        'E', 7,
        'I', 7,
        'e', 7,
        'i', 7,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(244);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_POUND_LT_LT);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(262);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
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
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 275,
        '.', 276,
        '/', 449,
        '@', 427,
        '\\', 236,
        '|', 115,
        '+', 429,
        '-', 429,
        'T', 430,
        't', 430,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 275,
        '.', 277,
        '/', 449,
        '@', 427,
        '\\', 236,
        '|', 115,
        '+', 429,
        '-', 429,
        'T', 430,
        't', 430,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(431);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 277,
        '@', 427,
        '\\', 236,
        '|', 115,
        '+', 429,
        '-', 429,
        'T', 430,
        't', 430,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 277,
        '@', 427,
        '\\', 236,
        '|', 115,
        '+', 429,
        '-', 429,
        'T', 430,
        't', 430,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(431);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 279,
        '.', 286,
        '/', 450,
        '@', 427,
        '\\', 236,
        '|', 115,
        '+', 429,
        '-', 429,
        'I', 384,
        'i', 384,
        'T', 430,
        't', 430,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 279,
        '.', 287,
        '/', 450,
        '@', 427,
        '\\', 236,
        '|', 115,
        '+', 429,
        '-', 429,
        'I', 384,
        'i', 384,
        'T', 430,
        't', 430,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(432);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 281,
        '.', 290,
        '/', 180,
        '@', 47,
        '+', 53,
        '-', 53,
        'T', 117,
        't', 117,
        '0', 280,
        '1', 280,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 281,
        '.', 291,
        '/', 180,
        '@', 47,
        '+', 53,
        '-', 53,
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
    case 282:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 283,
        '.', 295,
        '/', 222,
        '@', 51,
        '+', 58,
        '-', 58,
        'T', 118,
        't', 118,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 283,
        '.', 294,
        '/', 222,
        '@', 51,
        '+', 58,
        '-', 58,
        'T', 118,
        't', 118,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 287,
        '@', 427,
        '\\', 236,
        '|', 115,
        '+', 429,
        '-', 429,
        'I', 384,
        'i', 384,
        'T', 430,
        't', 430,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 287,
        '@', 427,
        '\\', 236,
        '|', 115,
        '+', 429,
        '-', 429,
        'I', 384,
        'i', 384,
        'T', 430,
        't', 430,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(432);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == '/') ADVANCE(454);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '/') ADVANCE(454);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(430);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(290);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 293,
        '.', 304,
        '/', 181,
        '@', 47,
        '+', 53,
        '-', 53,
        'I', 273,
        'i', 273,
        'T', 117,
        't', 117,
        '0', 292,
        '1', 292,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 293,
        '.', 305,
        '/', 181,
        '@', 47,
        '+', 53,
        '-', 53,
        'I', 273,
        'i', 273,
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
    case 294:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 294,
        '@', 51,
        '+', 58,
        '-', 58,
        'T', 118,
        't', 118,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 294,
        '@', 51,
        '+', 58,
        '-', 58,
        'T', 118,
        't', 118,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 297,
        '.', 311,
        '/', 223,
        '@', 51,
        '+', 58,
        '-', 58,
        'I', 273,
        'i', 273,
        'T', 118,
        't', 118,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 297,
        '.', 310,
        '/', 223,
        '@', 51,
        '+', 58,
        '-', 58,
        'I', 273,
        'i', 273,
        'T', 118,
        't', 118,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 301,
        '.', 315,
        '/', 217,
        '@', 54,
        '+', 59,
        '-', 59,
        'I', 273,
        'i', 273,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 301,
        '.', 314,
        '/', 217,
        '@', 54,
        '+', 59,
        '-', 59,
        'I', 273,
        'i', 273,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(430);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 305,
        '@', 47,
        '+', 53,
        '-', 53,
        'I', 273,
        'i', 273,
        'T', 117,
        't', 117,
        '0', 304,
        '1', 304,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 305,
        '@', 47,
        '+', 53,
        '-', 53,
        'I', 273,
        'i', 273,
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
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(306);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '/') ADVANCE(186);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 309,
        '.', 319,
        '/', 226,
        '@', 51,
        '+', 58,
        '-', 58,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 309,
        '.', 318,
        '/', 226,
        '@', 51,
        '+', 58,
        '-', 58,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 310,
        '@', 51,
        '+', 58,
        '-', 58,
        'I', 273,
        'i', 273,
        'T', 118,
        't', 118,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 310,
        '@', 51,
        '+', 58,
        '-', 58,
        'I', 273,
        'i', 273,
        'T', 118,
        't', 118,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '.') ADVANCE(323);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(314);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(314);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(317);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 318,
        '@', 51,
        '+', 58,
        '-', 58,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 318,
        '@', 51,
        '+', 58,
        '-', 58,
        'L', 122,
        'S', 122,
        'l', 122,
        's', 122,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 321,
        '.', 325,
        '/', 230,
        '@', 51,
        '+', 58,
        '-', 58,
        'I', 273,
        'i', 273,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 321,
        '.', 324,
        '/', 230,
        '@', 51,
        '+', 58,
        '-', 58,
        'I', 273,
        'i', 273,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(322);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(322);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 324,
        '@', 51,
        '+', 58,
        '-', 58,
        'I', 273,
        'i', 273,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 324,
        '@', 51,
        '+', 58,
        '-', 58,
        'I', 273,
        'i', 273,
        'L', 127,
        'S', 127,
        'l', 127,
        's', 127,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 327,
        '.', 331,
        '/', 212,
        '@', 54,
        '+', 59,
        '-', 59,
        'T', 120,
        't', 120,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 327,
        '.', 330,
        '/', 212,
        '@', 54,
        '+', 59,
        '-', 59,
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
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 333,
        '.', 339,
        '/', 214,
        '@', 54,
        '+', 59,
        '-', 59,
        'I', 273,
        'i', 273,
        'T', 120,
        't', 120,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 333,
        '.', 338,
        '/', 214,
        '@', 54,
        '+', 59,
        '-', 59,
        'I', 273,
        'i', 273,
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
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(335);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(334);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(335);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 337,
        '.', 342,
        '/', 188,
        '@', 47,
        '+', 53,
        '-', 53,
        'I', 273,
        'i', 273,
        '0', 336,
        '1', 336,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 337,
        '.', 343,
        '/', 188,
        '@', 47,
        '+', 53,
        '-', 53,
        'I', 273,
        'i', 273,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 338,
        '@', 54,
        '+', 59,
        '-', 59,
        'I', 273,
        'i', 273,
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
    case 339:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 338,
        '@', 54,
        '+', 59,
        '-', 59,
        'I', 273,
        'i', 273,
        'T', 120,
        't', 120,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(219);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '/') ADVANCE(219);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(342);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(344);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(344);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 347,
        '.', 350,
        '/', 202,
        '@', 56,
        '+', 60,
        '-', 60,
        'T', 121,
        't', 121,
      );
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
      ADVANCE_MAP(
        '#', 347,
        '.', 351,
        '/', 202,
        '@', 56,
        '+', 60,
        '-', 60,
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
    case 348:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '.') ADVANCE(354);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(348);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '.') ADVANCE(355);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(351);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
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
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
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
        '/', 203,
        '@', 56,
        '+', 60,
        '-', 60,
        'I', 273,
        'i', 273,
        'T', 121,
        't', 121,
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
        '/', 203,
        '@', 56,
        '+', 60,
        '-', 60,
        'I', 273,
        'i', 273,
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
    case 354:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 357,
        '.', 362,
        '/', 210,
        '@', 56,
        '+', 60,
        '-', 60,
        'I', 273,
        'i', 273,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(356);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 357,
        '.', 363,
        '/', 210,
        '@', 56,
        '+', 60,
        '-', 60,
        'I', 273,
        'i', 273,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 359,
        '@', 56,
        '+', 60,
        '-', 60,
        'I', 273,
        'i', 273,
        'T', 121,
        't', 121,
      );
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
      ADVANCE_MAP(
        '#', 359,
        '@', 56,
        '+', 60,
        '-', 60,
        'I', 273,
        'i', 273,
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
    case 360:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(361);
      if (lookahead == '.') ADVANCE(364);
      if (lookahead == '/') ADVANCE(208);
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
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == '/') ADVANCE(208);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(362);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(364);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(365);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(427);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(429);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(427);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(429);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(427);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(437);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(438);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(201);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
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
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(413);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(414);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(455);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == '/') ADVANCE(455);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(433);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(433);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(445);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(423);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(424);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(426);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(423);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(424);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(426);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(367);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(384);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(441);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '|') ADVANCE(115);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(116);
      if ((!eof && set_contains(sym_symbol_character_set_1, 21, lookahead))) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_hash_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(469);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_graph_token1);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_graph_token2);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(480);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(251);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_lang_name);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 238},
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
  [15] = {.lex_state = 238},
  [16] = {.lex_state = 238},
  [17] = {.lex_state = 238},
  [18] = {.lex_state = 238},
  [19] = {.lex_state = 238},
  [20] = {.lex_state = 238},
  [21] = {.lex_state = 238},
  [22] = {.lex_state = 238},
  [23] = {.lex_state = 238},
  [24] = {.lex_state = 238},
  [25] = {.lex_state = 238},
  [26] = {.lex_state = 238},
  [27] = {.lex_state = 238},
  [28] = {.lex_state = 238},
  [29] = {.lex_state = 238},
  [30] = {.lex_state = 238},
  [31] = {.lex_state = 238},
  [32] = {.lex_state = 238},
  [33] = {.lex_state = 238},
  [34] = {.lex_state = 238},
  [35] = {.lex_state = 238},
  [36] = {.lex_state = 238},
  [37] = {.lex_state = 238},
  [38] = {.lex_state = 238},
  [39] = {.lex_state = 238},
  [40] = {.lex_state = 238},
  [41] = {.lex_state = 238},
  [42] = {.lex_state = 238},
  [43] = {.lex_state = 238},
  [44] = {.lex_state = 238},
  [45] = {.lex_state = 238},
  [46] = {.lex_state = 238},
  [47] = {.lex_state = 238},
  [48] = {.lex_state = 238},
  [49] = {.lex_state = 238},
  [50] = {.lex_state = 238},
  [51] = {.lex_state = 238},
  [52] = {.lex_state = 238},
  [53] = {.lex_state = 238},
  [54] = {.lex_state = 238},
  [55] = {.lex_state = 238},
  [56] = {.lex_state = 238},
  [57] = {.lex_state = 238},
  [58] = {.lex_state = 238},
  [59] = {.lex_state = 238},
  [60] = {.lex_state = 238},
  [61] = {.lex_state = 238},
  [62] = {.lex_state = 238},
  [63] = {.lex_state = 238},
  [64] = {.lex_state = 238},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
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
  [105] = {.lex_state = 238},
  [106] = {.lex_state = 238},
  [107] = {.lex_state = 238},
  [108] = {.lex_state = 238},
  [109] = {.lex_state = 238},
  [110] = {.lex_state = 238},
  [111] = {.lex_state = 238},
  [112] = {.lex_state = 238},
  [113] = {.lex_state = 238},
  [114] = {.lex_state = 238},
  [115] = {.lex_state = 238},
  [116] = {.lex_state = 238},
  [117] = {.lex_state = 238},
  [118] = {.lex_state = 238},
  [119] = {.lex_state = 238},
  [120] = {.lex_state = 238},
  [121] = {.lex_state = 238},
  [122] = {.lex_state = 238},
  [123] = {.lex_state = 238},
  [124] = {.lex_state = 238},
  [125] = {.lex_state = 238},
  [126] = {.lex_state = 238},
  [127] = {.lex_state = 238},
  [128] = {.lex_state = 238},
  [129] = {.lex_state = 238},
  [130] = {.lex_state = 238},
  [131] = {.lex_state = 238},
  [132] = {.lex_state = 238},
  [133] = {.lex_state = 238},
  [134] = {.lex_state = 238},
  [135] = {.lex_state = 238},
  [136] = {.lex_state = 238},
  [137] = {.lex_state = 238},
  [138] = {.lex_state = 238},
  [139] = {.lex_state = 238},
  [140] = {.lex_state = 238},
  [141] = {.lex_state = 238},
  [142] = {.lex_state = 238},
  [143] = {.lex_state = 238},
  [144] = {.lex_state = 238},
  [145] = {.lex_state = 238},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 24},
  [149] = {.lex_state = 24},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 24},
  [152] = {.lex_state = 24},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 24},
  [156] = {.lex_state = 24},
  [157] = {.lex_state = 238},
  [158] = {.lex_state = 238},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 238},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 238},
  [163] = {.lex_state = 238},
  [164] = {.lex_state = 238},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 24},
  [169] = {.lex_state = 24},
  [170] = {.lex_state = 238},
  [171] = {.lex_state = 238},
  [172] = {.lex_state = 0, .external_lex_state = 1},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0, .external_lex_state = 1},
  [175] = {.lex_state = 235},
  [176] = {.lex_state = 235},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__here_string_body] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(173),
    [sym__token] = STATE(15),
    [sym__skip] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym_sexp_comment] = STATE(15),
    [sym__datum] = STATE(15),
    [sym_string] = STATE(15),
    [sym_byte_string] = STATE(15),
    [sym_here_string] = STATE(15),
    [sym_regex] = STATE(15),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_structure] = STATE(15),
    [sym_hash] = STATE(15),
    [sym_graph] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_quasiquote] = STATE(15),
    [sym_syntax] = STATE(15),
    [sym_quasisyntax] = STATE(15),
    [sym_unquote] = STATE(15),
    [sym_unquote_splicing] = STATE(15),
    [sym_unsyntax] = STATE(15),
    [sym_unsyntax_splicing] = STATE(15),
    [sym_extension] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
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
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
    [anon_sym_POUNDreader] = ACTIONS(57),
    [anon_sym_POUNDlang] = ACTIONS(59),
    [anon_sym_POUND_BANG] = ACTIONS(61),
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
    [sym__real_string] = STATE(69),
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
    [aux_sym__skip_token1] = ACTIONS(63),
    [sym_dot] = ACTIONS(66),
    [aux_sym_comment_token1] = ACTIONS(69),
    [anon_sym_POUND_PIPE] = ACTIONS(72),
    [anon_sym_POUND_SEMI] = ACTIONS(75),
    [sym__line_comment] = ACTIONS(69),
    [sym_boolean] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_POUND_LT_LT] = ACTIONS(81),
    [aux_sym_regex_token1] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym_number] = ACTIONS(66),
    [sym_character] = ACTIONS(63),
    [sym_symbol] = ACTIONS(66),
    [sym_keyword] = ACTIONS(63),
    [anon_sym_POUND_AMP] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_POUNDfl] = ACTIONS(104),
    [anon_sym_POUNDfx] = ACTIONS(104),
    [anon_sym_POUNDs] = ACTIONS(107),
    [aux_sym_hash_token1] = ACTIONS(110),
    [aux_sym_graph_token1] = ACTIONS(113),
    [aux_sym_graph_token2] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_POUND_SQUOTE] = ACTIONS(125),
    [anon_sym_POUND_BQUOTE] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_COMMA_AT] = ACTIONS(134),
    [anon_sym_POUND_COMMA] = ACTIONS(137),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(140),
    [anon_sym_POUNDreader] = ACTIONS(143),
    [anon_sym_POUNDlang] = ACTIONS(146),
    [anon_sym_POUND_BANG] = ACTIONS(149),
  },
  [3] = {
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
    [sym__real_string] = STATE(69),
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
    [aux_sym__skip_token1] = ACTIONS(152),
    [sym_dot] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(154),
    [sym_character] = ACTIONS(152),
    [sym_symbol] = ACTIONS(154),
    [sym_keyword] = ACTIONS(152),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [4] = {
    [sym__token] = STATE(8),
    [sym__skip] = STATE(8),
    [sym_comment] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_sexp_comment] = STATE(8),
    [sym__datum] = STATE(8),
    [sym_string] = STATE(8),
    [sym_byte_string] = STATE(8),
    [sym_here_string] = STATE(8),
    [sym_regex] = STATE(8),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_structure] = STATE(8),
    [sym_hash] = STATE(8),
    [sym_graph] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_quasiquote] = STATE(8),
    [sym_syntax] = STATE(8),
    [sym_quasisyntax] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_unquote_splicing] = STATE(8),
    [sym_unsyntax] = STATE(8),
    [sym_unsyntax_splicing] = STATE(8),
    [sym_extension] = STATE(8),
    [aux_sym_list_repeat1] = STATE(8),
    [aux_sym__skip_token1] = ACTIONS(212),
    [sym_dot] = ACTIONS(214),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(214),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(214),
    [sym_character] = ACTIONS(212),
    [sym_symbol] = ACTIONS(214),
    [sym_keyword] = ACTIONS(212),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(176),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
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
    [sym__real_string] = STATE(69),
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
    [aux_sym__skip_token1] = ACTIONS(216),
    [sym_dot] = ACTIONS(218),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(218),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(218),
    [sym_character] = ACTIONS(216),
    [sym_symbol] = ACTIONS(218),
    [sym_keyword] = ACTIONS(216),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
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
    [sym__real_string] = STATE(69),
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
    [aux_sym__skip_token1] = ACTIONS(216),
    [sym_dot] = ACTIONS(218),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(218),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(218),
    [sym_character] = ACTIONS(216),
    [sym_symbol] = ACTIONS(218),
    [sym_keyword] = ACTIONS(216),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
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
    [sym__real_string] = STATE(69),
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
    [aux_sym__skip_token1] = ACTIONS(216),
    [sym_dot] = ACTIONS(218),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(218),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(218),
    [sym_character] = ACTIONS(216),
    [sym_symbol] = ACTIONS(218),
    [sym_keyword] = ACTIONS(216),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [8] = {
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
    [sym__real_string] = STATE(69),
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
    [aux_sym__skip_token1] = ACTIONS(216),
    [sym_dot] = ACTIONS(218),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(218),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(218),
    [sym_character] = ACTIONS(216),
    [sym_symbol] = ACTIONS(218),
    [sym_keyword] = ACTIONS(216),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [9] = {
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
    [sym__real_string] = STATE(69),
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
    [aux_sym__skip_token1] = ACTIONS(216),
    [sym_dot] = ACTIONS(218),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(218),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(218),
    [sym_character] = ACTIONS(216),
    [sym_symbol] = ACTIONS(218),
    [sym_keyword] = ACTIONS(216),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(220),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [10] = {
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
    [sym__real_string] = STATE(69),
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
    [aux_sym__skip_token1] = ACTIONS(224),
    [sym_dot] = ACTIONS(226),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(226),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(226),
    [sym_character] = ACTIONS(224),
    [sym_symbol] = ACTIONS(226),
    [sym_keyword] = ACTIONS(224),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [11] = {
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
    [sym__real_string] = STATE(69),
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
    [aux_sym__skip_token1] = ACTIONS(228),
    [sym_dot] = ACTIONS(230),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(230),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(230),
    [sym_character] = ACTIONS(228),
    [sym_symbol] = ACTIONS(230),
    [sym_keyword] = ACTIONS(228),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [12] = {
    [sym__token] = STATE(9),
    [sym__skip] = STATE(9),
    [sym_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_sexp_comment] = STATE(9),
    [sym__datum] = STATE(9),
    [sym_string] = STATE(9),
    [sym_byte_string] = STATE(9),
    [sym_here_string] = STATE(9),
    [sym_regex] = STATE(9),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_structure] = STATE(9),
    [sym_hash] = STATE(9),
    [sym_graph] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_quasiquote] = STATE(9),
    [sym_syntax] = STATE(9),
    [sym_quasisyntax] = STATE(9),
    [sym_unquote] = STATE(9),
    [sym_unquote_splicing] = STATE(9),
    [sym_unsyntax] = STATE(9),
    [sym_unsyntax_splicing] = STATE(9),
    [sym_extension] = STATE(9),
    [aux_sym_list_repeat1] = STATE(9),
    [aux_sym__skip_token1] = ACTIONS(234),
    [sym_dot] = ACTIONS(236),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(236),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(236),
    [sym_character] = ACTIONS(234),
    [sym_symbol] = ACTIONS(236),
    [sym_keyword] = ACTIONS(234),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(232),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [13] = {
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
    [sym__real_string] = STATE(69),
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
    [aux_sym__skip_token1] = ACTIONS(238),
    [sym_dot] = ACTIONS(240),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(240),
    [sym_character] = ACTIONS(238),
    [sym_symbol] = ACTIONS(240),
    [sym_keyword] = ACTIONS(238),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
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
    [sym__real_string] = STATE(69),
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
    [aux_sym__skip_token1] = ACTIONS(216),
    [sym_dot] = ACTIONS(218),
    [aux_sym_comment_token1] = ACTIONS(156),
    [anon_sym_POUND_PIPE] = ACTIONS(158),
    [anon_sym_POUND_SEMI] = ACTIONS(160),
    [sym__line_comment] = ACTIONS(156),
    [sym_boolean] = ACTIONS(218),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(218),
    [sym_character] = ACTIONS(216),
    [sym_symbol] = ACTIONS(218),
    [sym_keyword] = ACTIONS(216),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
    [anon_sym_POUNDreader] = ACTIONS(206),
    [anon_sym_POUNDlang] = ACTIONS(208),
    [anon_sym_POUND_BANG] = ACTIONS(210),
  },
  [15] = {
    [sym__token] = STATE(16),
    [sym__skip] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym_sexp_comment] = STATE(16),
    [sym__datum] = STATE(16),
    [sym_string] = STATE(16),
    [sym_byte_string] = STATE(16),
    [sym_here_string] = STATE(16),
    [sym_regex] = STATE(16),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(16),
    [sym_list] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_structure] = STATE(16),
    [sym_hash] = STATE(16),
    [sym_graph] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_quasiquote] = STATE(16),
    [sym_syntax] = STATE(16),
    [sym_quasisyntax] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_unquote_splicing] = STATE(16),
    [sym_unsyntax] = STATE(16),
    [sym_unsyntax_splicing] = STATE(16),
    [sym_extension] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(242),
    [aux_sym__skip_token1] = ACTIONS(244),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(246),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(246),
    [sym_character] = ACTIONS(244),
    [sym_symbol] = ACTIONS(246),
    [sym_keyword] = ACTIONS(244),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
    [anon_sym_POUNDreader] = ACTIONS(57),
    [anon_sym_POUNDlang] = ACTIONS(59),
    [anon_sym_POUND_BANG] = ACTIONS(61),
  },
  [16] = {
    [sym__token] = STATE(16),
    [sym__skip] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym_sexp_comment] = STATE(16),
    [sym__datum] = STATE(16),
    [sym_string] = STATE(16),
    [sym_byte_string] = STATE(16),
    [sym_here_string] = STATE(16),
    [sym_regex] = STATE(16),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(16),
    [sym_list] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_structure] = STATE(16),
    [sym_hash] = STATE(16),
    [sym_graph] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_quasiquote] = STATE(16),
    [sym_syntax] = STATE(16),
    [sym_quasisyntax] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_unquote_splicing] = STATE(16),
    [sym_unsyntax] = STATE(16),
    [sym_unsyntax_splicing] = STATE(16),
    [sym_extension] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(248),
    [aux_sym__skip_token1] = ACTIONS(250),
    [aux_sym_comment_token1] = ACTIONS(253),
    [anon_sym_POUND_PIPE] = ACTIONS(256),
    [anon_sym_POUND_SEMI] = ACTIONS(259),
    [sym__line_comment] = ACTIONS(253),
    [sym_boolean] = ACTIONS(262),
    [anon_sym_POUND] = ACTIONS(265),
    [anon_sym_POUND_LT_LT] = ACTIONS(268),
    [aux_sym_regex_token1] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(274),
    [sym_number] = ACTIONS(262),
    [sym_character] = ACTIONS(250),
    [sym_symbol] = ACTIONS(262),
    [sym_keyword] = ACTIONS(250),
    [anon_sym_POUND_AMP] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_POUNDfl] = ACTIONS(289),
    [anon_sym_POUNDfx] = ACTIONS(289),
    [anon_sym_POUNDs] = ACTIONS(292),
    [aux_sym_hash_token1] = ACTIONS(295),
    [aux_sym_graph_token1] = ACTIONS(298),
    [aux_sym_graph_token2] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(304),
    [anon_sym_BQUOTE] = ACTIONS(307),
    [anon_sym_POUND_SQUOTE] = ACTIONS(310),
    [anon_sym_POUND_BQUOTE] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_COMMA_AT] = ACTIONS(319),
    [anon_sym_POUND_COMMA] = ACTIONS(322),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(325),
    [anon_sym_POUNDreader] = ACTIONS(328),
    [anon_sym_POUNDlang] = ACTIONS(331),
    [anon_sym_POUND_BANG] = ACTIONS(334),
  },
  [17] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(101),
    [sym_string] = STATE(101),
    [sym_byte_string] = STATE(101),
    [sym_here_string] = STATE(101),
    [sym_regex] = STATE(101),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(101),
    [sym_list] = STATE(101),
    [sym_vector] = STATE(101),
    [sym_structure] = STATE(101),
    [sym_hash] = STATE(101),
    [sym_graph] = STATE(101),
    [sym_quote] = STATE(101),
    [sym_quasiquote] = STATE(101),
    [sym_syntax] = STATE(101),
    [sym_quasisyntax] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_unquote_splicing] = STATE(101),
    [sym_unsyntax] = STATE(101),
    [sym_unsyntax_splicing] = STATE(101),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(339),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(339),
    [sym_character] = ACTIONS(341),
    [sym_symbol] = ACTIONS(339),
    [sym_keyword] = ACTIONS(341),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [18] = {
    [sym__skip] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_sexp_comment] = STATE(22),
    [sym__datum] = STATE(121),
    [sym_string] = STATE(121),
    [sym_byte_string] = STATE(121),
    [sym_here_string] = STATE(121),
    [sym_regex] = STATE(121),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(121),
    [sym_list] = STATE(121),
    [sym_vector] = STATE(121),
    [sym_structure] = STATE(121),
    [sym_hash] = STATE(121),
    [sym_graph] = STATE(121),
    [sym_quote] = STATE(121),
    [sym_quasiquote] = STATE(121),
    [sym_syntax] = STATE(121),
    [sym_quasisyntax] = STATE(121),
    [sym_unquote] = STATE(121),
    [sym_unquote_splicing] = STATE(121),
    [sym_unsyntax] = STATE(121),
    [sym_unsyntax_splicing] = STATE(121),
    [aux_sym_sexp_comment_repeat1] = STATE(22),
    [aux_sym__skip_token1] = ACTIONS(343),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(345),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(345),
    [sym_character] = ACTIONS(347),
    [sym_symbol] = ACTIONS(345),
    [sym_keyword] = ACTIONS(347),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [19] = {
    [sym__skip] = STATE(23),
    [sym_comment] = STATE(23),
    [sym_block_comment] = STATE(23),
    [sym_sexp_comment] = STATE(23),
    [sym__datum] = STATE(124),
    [sym_string] = STATE(124),
    [sym_byte_string] = STATE(124),
    [sym_here_string] = STATE(124),
    [sym_regex] = STATE(124),
    [sym__real_string] = STATE(143),
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
    [aux_sym_sexp_comment_repeat1] = STATE(23),
    [aux_sym__skip_token1] = ACTIONS(349),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
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
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [20] = {
    [sym__skip] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_sexp_comment] = STATE(24),
    [sym__datum] = STATE(127),
    [sym_string] = STATE(127),
    [sym_byte_string] = STATE(127),
    [sym_here_string] = STATE(127),
    [sym_regex] = STATE(127),
    [sym__real_string] = STATE(143),
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
    [aux_sym_sexp_comment_repeat1] = STATE(24),
    [aux_sym__skip_token1] = ACTIONS(355),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
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
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [21] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(112),
    [sym_string] = STATE(112),
    [sym_byte_string] = STATE(112),
    [sym_here_string] = STATE(112),
    [sym_regex] = STATE(112),
    [sym__real_string] = STATE(143),
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
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(361),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(361),
    [sym_character] = ACTIONS(363),
    [sym_symbol] = ACTIONS(361),
    [sym_keyword] = ACTIONS(363),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [22] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(113),
    [sym_string] = STATE(113),
    [sym_byte_string] = STATE(113),
    [sym_here_string] = STATE(113),
    [sym_regex] = STATE(113),
    [sym__real_string] = STATE(143),
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
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(365),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(365),
    [sym_character] = ACTIONS(367),
    [sym_symbol] = ACTIONS(365),
    [sym_keyword] = ACTIONS(367),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [23] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(115),
    [sym_string] = STATE(115),
    [sym_byte_string] = STATE(115),
    [sym_here_string] = STATE(115),
    [sym_regex] = STATE(115),
    [sym__real_string] = STATE(143),
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
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(369),
    [sym_character] = ACTIONS(371),
    [sym_symbol] = ACTIONS(369),
    [sym_keyword] = ACTIONS(371),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [24] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(117),
    [sym_string] = STATE(117),
    [sym_byte_string] = STATE(117),
    [sym_here_string] = STATE(117),
    [sym_regex] = STATE(117),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(117),
    [sym_list] = STATE(117),
    [sym_vector] = STATE(117),
    [sym_structure] = STATE(117),
    [sym_hash] = STATE(117),
    [sym_graph] = STATE(117),
    [sym_quote] = STATE(117),
    [sym_quasiquote] = STATE(117),
    [sym_syntax] = STATE(117),
    [sym_quasisyntax] = STATE(117),
    [sym_unquote] = STATE(117),
    [sym_unquote_splicing] = STATE(117),
    [sym_unsyntax] = STATE(117),
    [sym_unsyntax_splicing] = STATE(117),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(373),
    [sym_character] = ACTIONS(375),
    [sym_symbol] = ACTIONS(373),
    [sym_keyword] = ACTIONS(375),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [25] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(119),
    [sym_string] = STATE(119),
    [sym_byte_string] = STATE(119),
    [sym_here_string] = STATE(119),
    [sym_regex] = STATE(119),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(119),
    [sym_list] = STATE(119),
    [sym_vector] = STATE(119),
    [sym_structure] = STATE(119),
    [sym_hash] = STATE(119),
    [sym_graph] = STATE(119),
    [sym_quote] = STATE(119),
    [sym_quasiquote] = STATE(119),
    [sym_syntax] = STATE(119),
    [sym_quasisyntax] = STATE(119),
    [sym_unquote] = STATE(119),
    [sym_unquote_splicing] = STATE(119),
    [sym_unsyntax] = STATE(119),
    [sym_unsyntax_splicing] = STATE(119),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(377),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(377),
    [sym_character] = ACTIONS(379),
    [sym_symbol] = ACTIONS(377),
    [sym_keyword] = ACTIONS(379),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [26] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(120),
    [sym_string] = STATE(120),
    [sym_byte_string] = STATE(120),
    [sym_here_string] = STATE(120),
    [sym_regex] = STATE(120),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(120),
    [sym_list] = STATE(120),
    [sym_vector] = STATE(120),
    [sym_structure] = STATE(120),
    [sym_hash] = STATE(120),
    [sym_graph] = STATE(120),
    [sym_quote] = STATE(120),
    [sym_quasiquote] = STATE(120),
    [sym_syntax] = STATE(120),
    [sym_quasisyntax] = STATE(120),
    [sym_unquote] = STATE(120),
    [sym_unquote_splicing] = STATE(120),
    [sym_unsyntax] = STATE(120),
    [sym_unsyntax_splicing] = STATE(120),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(381),
    [sym_character] = ACTIONS(383),
    [sym_symbol] = ACTIONS(381),
    [sym_keyword] = ACTIONS(383),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [27] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(122),
    [sym_string] = STATE(122),
    [sym_byte_string] = STATE(122),
    [sym_here_string] = STATE(122),
    [sym_regex] = STATE(122),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(122),
    [sym_list] = STATE(122),
    [sym_vector] = STATE(122),
    [sym_structure] = STATE(122),
    [sym_hash] = STATE(122),
    [sym_graph] = STATE(122),
    [sym_quote] = STATE(122),
    [sym_quasiquote] = STATE(122),
    [sym_syntax] = STATE(122),
    [sym_quasisyntax] = STATE(122),
    [sym_unquote] = STATE(122),
    [sym_unquote_splicing] = STATE(122),
    [sym_unsyntax] = STATE(122),
    [sym_unsyntax_splicing] = STATE(122),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(385),
    [sym_character] = ACTIONS(387),
    [sym_symbol] = ACTIONS(385),
    [sym_keyword] = ACTIONS(387),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [28] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(123),
    [sym_string] = STATE(123),
    [sym_byte_string] = STATE(123),
    [sym_here_string] = STATE(123),
    [sym_regex] = STATE(123),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(123),
    [sym_list] = STATE(123),
    [sym_vector] = STATE(123),
    [sym_structure] = STATE(123),
    [sym_hash] = STATE(123),
    [sym_graph] = STATE(123),
    [sym_quote] = STATE(123),
    [sym_quasiquote] = STATE(123),
    [sym_syntax] = STATE(123),
    [sym_quasisyntax] = STATE(123),
    [sym_unquote] = STATE(123),
    [sym_unquote_splicing] = STATE(123),
    [sym_unsyntax] = STATE(123),
    [sym_unsyntax_splicing] = STATE(123),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(389),
    [sym_character] = ACTIONS(391),
    [sym_symbol] = ACTIONS(389),
    [sym_keyword] = ACTIONS(391),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [29] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(125),
    [sym_string] = STATE(125),
    [sym_byte_string] = STATE(125),
    [sym_here_string] = STATE(125),
    [sym_regex] = STATE(125),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(125),
    [sym_list] = STATE(125),
    [sym_vector] = STATE(125),
    [sym_structure] = STATE(125),
    [sym_hash] = STATE(125),
    [sym_graph] = STATE(125),
    [sym_quote] = STATE(125),
    [sym_quasiquote] = STATE(125),
    [sym_syntax] = STATE(125),
    [sym_quasisyntax] = STATE(125),
    [sym_unquote] = STATE(125),
    [sym_unquote_splicing] = STATE(125),
    [sym_unsyntax] = STATE(125),
    [sym_unsyntax_splicing] = STATE(125),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(393),
    [sym_character] = ACTIONS(395),
    [sym_symbol] = ACTIONS(393),
    [sym_keyword] = ACTIONS(395),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [30] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(126),
    [sym_string] = STATE(126),
    [sym_byte_string] = STATE(126),
    [sym_here_string] = STATE(126),
    [sym_regex] = STATE(126),
    [sym__real_string] = STATE(143),
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
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(397),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(397),
    [sym_character] = ACTIONS(399),
    [sym_symbol] = ACTIONS(397),
    [sym_keyword] = ACTIONS(399),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [31] = {
    [sym__skip] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym_sexp_comment] = STATE(25),
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
    [aux_sym_sexp_comment_repeat1] = STATE(25),
    [aux_sym__skip_token1] = ACTIONS(401),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
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
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [32] = {
    [sym__skip] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_block_comment] = STATE(26),
    [sym_sexp_comment] = STATE(26),
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
    [aux_sym_sexp_comment_repeat1] = STATE(26),
    [aux_sym__skip_token1] = ACTIONS(407),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
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
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [33] = {
    [sym__skip] = STATE(45),
    [sym_comment] = STATE(45),
    [sym_block_comment] = STATE(45),
    [sym_sexp_comment] = STATE(45),
    [sym__datum] = STATE(76),
    [sym_string] = STATE(76),
    [sym_byte_string] = STATE(76),
    [sym_here_string] = STATE(76),
    [sym_regex] = STATE(76),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(76),
    [sym_list] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_structure] = STATE(76),
    [sym_hash] = STATE(76),
    [sym_graph] = STATE(76),
    [sym_quote] = STATE(76),
    [sym_quasiquote] = STATE(76),
    [sym_syntax] = STATE(76),
    [sym_quasisyntax] = STATE(76),
    [sym_unquote] = STATE(76),
    [sym_unquote_splicing] = STATE(76),
    [sym_unsyntax] = STATE(76),
    [sym_unsyntax_splicing] = STATE(76),
    [aux_sym_sexp_comment_repeat1] = STATE(45),
    [aux_sym__skip_token1] = ACTIONS(413),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(415),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(415),
    [sym_character] = ACTIONS(417),
    [sym_symbol] = ACTIONS(415),
    [sym_keyword] = ACTIONS(417),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [34] = {
    [sym__skip] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_block_comment] = STATE(46),
    [sym_sexp_comment] = STATE(46),
    [sym__datum] = STATE(80),
    [sym_string] = STATE(80),
    [sym_byte_string] = STATE(80),
    [sym_here_string] = STATE(80),
    [sym_regex] = STATE(80),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(80),
    [sym_list] = STATE(80),
    [sym_vector] = STATE(80),
    [sym_structure] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_graph] = STATE(80),
    [sym_quote] = STATE(80),
    [sym_quasiquote] = STATE(80),
    [sym_syntax] = STATE(80),
    [sym_quasisyntax] = STATE(80),
    [sym_unquote] = STATE(80),
    [sym_unquote_splicing] = STATE(80),
    [sym_unsyntax] = STATE(80),
    [sym_unsyntax_splicing] = STATE(80),
    [aux_sym_sexp_comment_repeat1] = STATE(46),
    [aux_sym__skip_token1] = ACTIONS(419),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(421),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(421),
    [sym_character] = ACTIONS(423),
    [sym_symbol] = ACTIONS(421),
    [sym_keyword] = ACTIONS(423),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [35] = {
    [sym__skip] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_block_comment] = STATE(47),
    [sym_sexp_comment] = STATE(47),
    [sym__datum] = STATE(81),
    [sym_string] = STATE(81),
    [sym_byte_string] = STATE(81),
    [sym_here_string] = STATE(81),
    [sym_regex] = STATE(81),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(81),
    [sym_list] = STATE(81),
    [sym_vector] = STATE(81),
    [sym_structure] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_graph] = STATE(81),
    [sym_quote] = STATE(81),
    [sym_quasiquote] = STATE(81),
    [sym_syntax] = STATE(81),
    [sym_quasisyntax] = STATE(81),
    [sym_unquote] = STATE(81),
    [sym_unquote_splicing] = STATE(81),
    [sym_unsyntax] = STATE(81),
    [sym_unsyntax_splicing] = STATE(81),
    [aux_sym_sexp_comment_repeat1] = STATE(47),
    [aux_sym__skip_token1] = ACTIONS(425),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(427),
    [sym_character] = ACTIONS(429),
    [sym_symbol] = ACTIONS(427),
    [sym_keyword] = ACTIONS(429),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [36] = {
    [sym__skip] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_block_comment] = STATE(48),
    [sym_sexp_comment] = STATE(48),
    [sym__datum] = STATE(82),
    [sym_string] = STATE(82),
    [sym_byte_string] = STATE(82),
    [sym_here_string] = STATE(82),
    [sym_regex] = STATE(82),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(82),
    [sym_list] = STATE(82),
    [sym_vector] = STATE(82),
    [sym_structure] = STATE(82),
    [sym_hash] = STATE(82),
    [sym_graph] = STATE(82),
    [sym_quote] = STATE(82),
    [sym_quasiquote] = STATE(82),
    [sym_syntax] = STATE(82),
    [sym_quasisyntax] = STATE(82),
    [sym_unquote] = STATE(82),
    [sym_unquote_splicing] = STATE(82),
    [sym_unsyntax] = STATE(82),
    [sym_unsyntax_splicing] = STATE(82),
    [aux_sym_sexp_comment_repeat1] = STATE(48),
    [aux_sym__skip_token1] = ACTIONS(431),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(433),
    [sym_character] = ACTIONS(435),
    [sym_symbol] = ACTIONS(433),
    [sym_keyword] = ACTIONS(435),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [37] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(110),
    [sym_string] = STATE(110),
    [sym_byte_string] = STATE(110),
    [sym_here_string] = STATE(110),
    [sym_regex] = STATE(110),
    [sym__real_string] = STATE(143),
    [sym_box] = STATE(110),
    [sym_list] = STATE(110),
    [sym_vector] = STATE(110),
    [sym_structure] = STATE(110),
    [sym_hash] = STATE(110),
    [sym_graph] = STATE(110),
    [sym_quote] = STATE(110),
    [sym_quasiquote] = STATE(110),
    [sym_syntax] = STATE(110),
    [sym_quasisyntax] = STATE(110),
    [sym_unquote] = STATE(110),
    [sym_unquote_splicing] = STATE(110),
    [sym_unsyntax] = STATE(110),
    [sym_unsyntax_splicing] = STATE(110),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(437),
    [sym_character] = ACTIONS(439),
    [sym_symbol] = ACTIONS(437),
    [sym_keyword] = ACTIONS(439),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [38] = {
    [sym__skip] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_block_comment] = STATE(50),
    [sym_sexp_comment] = STATE(50),
    [sym__datum] = STATE(84),
    [sym_string] = STATE(84),
    [sym_byte_string] = STATE(84),
    [sym_here_string] = STATE(84),
    [sym_regex] = STATE(84),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(84),
    [sym_list] = STATE(84),
    [sym_vector] = STATE(84),
    [sym_structure] = STATE(84),
    [sym_hash] = STATE(84),
    [sym_graph] = STATE(84),
    [sym_quote] = STATE(84),
    [sym_quasiquote] = STATE(84),
    [sym_syntax] = STATE(84),
    [sym_quasisyntax] = STATE(84),
    [sym_unquote] = STATE(84),
    [sym_unquote_splicing] = STATE(84),
    [sym_unsyntax] = STATE(84),
    [sym_unsyntax_splicing] = STATE(84),
    [aux_sym_sexp_comment_repeat1] = STATE(50),
    [aux_sym__skip_token1] = ACTIONS(441),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(443),
    [sym_character] = ACTIONS(445),
    [sym_symbol] = ACTIONS(443),
    [sym_keyword] = ACTIONS(445),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [39] = {
    [sym__skip] = STATE(51),
    [sym_comment] = STATE(51),
    [sym_block_comment] = STATE(51),
    [sym_sexp_comment] = STATE(51),
    [sym__datum] = STATE(104),
    [sym_string] = STATE(104),
    [sym_byte_string] = STATE(104),
    [sym_here_string] = STATE(104),
    [sym_regex] = STATE(104),
    [sym__real_string] = STATE(69),
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
    [aux_sym_sexp_comment_repeat1] = STATE(51),
    [aux_sym__skip_token1] = ACTIONS(447),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(449),
    [sym_character] = ACTIONS(451),
    [sym_symbol] = ACTIONS(449),
    [sym_keyword] = ACTIONS(451),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [40] = {
    [sym__skip] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_block_comment] = STATE(17),
    [sym_sexp_comment] = STATE(17),
    [sym__datum] = STATE(86),
    [sym_string] = STATE(86),
    [sym_byte_string] = STATE(86),
    [sym_here_string] = STATE(86),
    [sym_regex] = STATE(86),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(86),
    [sym_list] = STATE(86),
    [sym_vector] = STATE(86),
    [sym_structure] = STATE(86),
    [sym_hash] = STATE(86),
    [sym_graph] = STATE(86),
    [sym_quote] = STATE(86),
    [sym_quasiquote] = STATE(86),
    [sym_syntax] = STATE(86),
    [sym_quasisyntax] = STATE(86),
    [sym_unquote] = STATE(86),
    [sym_unquote_splicing] = STATE(86),
    [sym_unsyntax] = STATE(86),
    [sym_unsyntax_splicing] = STATE(86),
    [aux_sym_sexp_comment_repeat1] = STATE(17),
    [aux_sym__skip_token1] = ACTIONS(453),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(455),
    [sym_character] = ACTIONS(457),
    [sym_symbol] = ACTIONS(455),
    [sym_keyword] = ACTIONS(457),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [41] = {
    [sym__skip] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_block_comment] = STATE(53),
    [sym_sexp_comment] = STATE(53),
    [sym__datum] = STATE(87),
    [sym_string] = STATE(87),
    [sym_byte_string] = STATE(87),
    [sym_here_string] = STATE(87),
    [sym_regex] = STATE(87),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(87),
    [sym_list] = STATE(87),
    [sym_vector] = STATE(87),
    [sym_structure] = STATE(87),
    [sym_hash] = STATE(87),
    [sym_graph] = STATE(87),
    [sym_quote] = STATE(87),
    [sym_quasiquote] = STATE(87),
    [sym_syntax] = STATE(87),
    [sym_quasisyntax] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splicing] = STATE(87),
    [sym_unsyntax] = STATE(87),
    [sym_unsyntax_splicing] = STATE(87),
    [aux_sym_sexp_comment_repeat1] = STATE(53),
    [aux_sym__skip_token1] = ACTIONS(459),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(461),
    [sym_character] = ACTIONS(463),
    [sym_symbol] = ACTIONS(461),
    [sym_keyword] = ACTIONS(463),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [42] = {
    [sym__skip] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_block_comment] = STATE(54),
    [sym_sexp_comment] = STATE(54),
    [sym__datum] = STATE(88),
    [sym_string] = STATE(88),
    [sym_byte_string] = STATE(88),
    [sym_here_string] = STATE(88),
    [sym_regex] = STATE(88),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(88),
    [sym_list] = STATE(88),
    [sym_vector] = STATE(88),
    [sym_structure] = STATE(88),
    [sym_hash] = STATE(88),
    [sym_graph] = STATE(88),
    [sym_quote] = STATE(88),
    [sym_quasiquote] = STATE(88),
    [sym_syntax] = STATE(88),
    [sym_quasisyntax] = STATE(88),
    [sym_unquote] = STATE(88),
    [sym_unquote_splicing] = STATE(88),
    [sym_unsyntax] = STATE(88),
    [sym_unsyntax_splicing] = STATE(88),
    [aux_sym_sexp_comment_repeat1] = STATE(54),
    [aux_sym__skip_token1] = ACTIONS(465),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(467),
    [sym_character] = ACTIONS(469),
    [sym_symbol] = ACTIONS(467),
    [sym_keyword] = ACTIONS(469),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [43] = {
    [sym__skip] = STATE(55),
    [sym_comment] = STATE(55),
    [sym_block_comment] = STATE(55),
    [sym_sexp_comment] = STATE(55),
    [sym__datum] = STATE(89),
    [sym_string] = STATE(89),
    [sym_byte_string] = STATE(89),
    [sym_here_string] = STATE(89),
    [sym_regex] = STATE(89),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(89),
    [sym_list] = STATE(89),
    [sym_vector] = STATE(89),
    [sym_structure] = STATE(89),
    [sym_hash] = STATE(89),
    [sym_graph] = STATE(89),
    [sym_quote] = STATE(89),
    [sym_quasiquote] = STATE(89),
    [sym_syntax] = STATE(89),
    [sym_quasisyntax] = STATE(89),
    [sym_unquote] = STATE(89),
    [sym_unquote_splicing] = STATE(89),
    [sym_unsyntax] = STATE(89),
    [sym_unsyntax_splicing] = STATE(89),
    [aux_sym_sexp_comment_repeat1] = STATE(55),
    [aux_sym__skip_token1] = ACTIONS(471),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(473),
    [sym_character] = ACTIONS(475),
    [sym_symbol] = ACTIONS(473),
    [sym_keyword] = ACTIONS(475),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [44] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(90),
    [sym_string] = STATE(90),
    [sym_byte_string] = STATE(90),
    [sym_here_string] = STATE(90),
    [sym_regex] = STATE(90),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(90),
    [sym_list] = STATE(90),
    [sym_vector] = STATE(90),
    [sym_structure] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_graph] = STATE(90),
    [sym_quote] = STATE(90),
    [sym_quasiquote] = STATE(90),
    [sym_syntax] = STATE(90),
    [sym_quasisyntax] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splicing] = STATE(90),
    [sym_unsyntax] = STATE(90),
    [sym_unsyntax_splicing] = STATE(90),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(477),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(477),
    [sym_character] = ACTIONS(479),
    [sym_symbol] = ACTIONS(477),
    [sym_keyword] = ACTIONS(479),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [45] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(93),
    [sym_string] = STATE(93),
    [sym_byte_string] = STATE(93),
    [sym_here_string] = STATE(93),
    [sym_regex] = STATE(93),
    [sym__real_string] = STATE(69),
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
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(481),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(481),
    [sym_character] = ACTIONS(483),
    [sym_symbol] = ACTIONS(481),
    [sym_keyword] = ACTIONS(483),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [46] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(95),
    [sym_string] = STATE(95),
    [sym_byte_string] = STATE(95),
    [sym_here_string] = STATE(95),
    [sym_regex] = STATE(95),
    [sym__real_string] = STATE(69),
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
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(485),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(485),
    [sym_character] = ACTIONS(487),
    [sym_symbol] = ACTIONS(485),
    [sym_keyword] = ACTIONS(487),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [47] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(96),
    [sym_string] = STATE(96),
    [sym_byte_string] = STATE(96),
    [sym_here_string] = STATE(96),
    [sym_regex] = STATE(96),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(96),
    [sym_list] = STATE(96),
    [sym_vector] = STATE(96),
    [sym_structure] = STATE(96),
    [sym_hash] = STATE(96),
    [sym_graph] = STATE(96),
    [sym_quote] = STATE(96),
    [sym_quasiquote] = STATE(96),
    [sym_syntax] = STATE(96),
    [sym_quasisyntax] = STATE(96),
    [sym_unquote] = STATE(96),
    [sym_unquote_splicing] = STATE(96),
    [sym_unsyntax] = STATE(96),
    [sym_unsyntax_splicing] = STATE(96),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(489),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(489),
    [sym_character] = ACTIONS(491),
    [sym_symbol] = ACTIONS(489),
    [sym_keyword] = ACTIONS(491),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [48] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(97),
    [sym_string] = STATE(97),
    [sym_byte_string] = STATE(97),
    [sym_here_string] = STATE(97),
    [sym_regex] = STATE(97),
    [sym__real_string] = STATE(69),
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
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(493),
    [sym_character] = ACTIONS(495),
    [sym_symbol] = ACTIONS(493),
    [sym_keyword] = ACTIONS(495),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [49] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(98),
    [sym_string] = STATE(98),
    [sym_byte_string] = STATE(98),
    [sym_here_string] = STATE(98),
    [sym_regex] = STATE(98),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(98),
    [sym_list] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_structure] = STATE(98),
    [sym_hash] = STATE(98),
    [sym_graph] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_syntax] = STATE(98),
    [sym_quasisyntax] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_unquote_splicing] = STATE(98),
    [sym_unsyntax] = STATE(98),
    [sym_unsyntax_splicing] = STATE(98),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(497),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(497),
    [sym_character] = ACTIONS(499),
    [sym_symbol] = ACTIONS(497),
    [sym_keyword] = ACTIONS(499),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [50] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(99),
    [sym_string] = STATE(99),
    [sym_byte_string] = STATE(99),
    [sym_here_string] = STATE(99),
    [sym_regex] = STATE(99),
    [sym__real_string] = STATE(69),
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
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(501),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(501),
    [sym_character] = ACTIONS(503),
    [sym_symbol] = ACTIONS(501),
    [sym_keyword] = ACTIONS(503),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [51] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(100),
    [sym_string] = STATE(100),
    [sym_byte_string] = STATE(100),
    [sym_here_string] = STATE(100),
    [sym_regex] = STATE(100),
    [sym__real_string] = STATE(69),
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
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(505),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(505),
    [sym_character] = ACTIONS(507),
    [sym_symbol] = ACTIONS(505),
    [sym_keyword] = ACTIONS(507),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [52] = {
    [sym__skip] = STATE(63),
    [sym_comment] = STATE(63),
    [sym_block_comment] = STATE(63),
    [sym_sexp_comment] = STATE(63),
    [sym__datum] = STATE(106),
    [sym_string] = STATE(106),
    [sym_byte_string] = STATE(106),
    [sym_here_string] = STATE(106),
    [sym_regex] = STATE(106),
    [sym__real_string] = STATE(143),
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
    [aux_sym_sexp_comment_repeat1] = STATE(63),
    [aux_sym__skip_token1] = ACTIONS(509),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(511),
    [sym_character] = ACTIONS(513),
    [sym_symbol] = ACTIONS(511),
    [sym_keyword] = ACTIONS(513),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [53] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(102),
    [sym_string] = STATE(102),
    [sym_byte_string] = STATE(102),
    [sym_here_string] = STATE(102),
    [sym_regex] = STATE(102),
    [sym__real_string] = STATE(69),
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
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(515),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(515),
    [sym_character] = ACTIONS(517),
    [sym_symbol] = ACTIONS(515),
    [sym_keyword] = ACTIONS(517),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [54] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(103),
    [sym_string] = STATE(103),
    [sym_byte_string] = STATE(103),
    [sym_here_string] = STATE(103),
    [sym_regex] = STATE(103),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(103),
    [sym_list] = STATE(103),
    [sym_vector] = STATE(103),
    [sym_structure] = STATE(103),
    [sym_hash] = STATE(103),
    [sym_graph] = STATE(103),
    [sym_quote] = STATE(103),
    [sym_quasiquote] = STATE(103),
    [sym_syntax] = STATE(103),
    [sym_quasisyntax] = STATE(103),
    [sym_unquote] = STATE(103),
    [sym_unquote_splicing] = STATE(103),
    [sym_unsyntax] = STATE(103),
    [sym_unsyntax_splicing] = STATE(103),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(519),
    [sym_character] = ACTIONS(521),
    [sym_symbol] = ACTIONS(519),
    [sym_keyword] = ACTIONS(521),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [55] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(66),
    [sym_string] = STATE(66),
    [sym_byte_string] = STATE(66),
    [sym_here_string] = STATE(66),
    [sym_regex] = STATE(66),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(66),
    [sym_list] = STATE(66),
    [sym_vector] = STATE(66),
    [sym_structure] = STATE(66),
    [sym_hash] = STATE(66),
    [sym_graph] = STATE(66),
    [sym_quote] = STATE(66),
    [sym_quasiquote] = STATE(66),
    [sym_syntax] = STATE(66),
    [sym_quasisyntax] = STATE(66),
    [sym_unquote] = STATE(66),
    [sym_unquote_splicing] = STATE(66),
    [sym_unsyntax] = STATE(66),
    [sym_unsyntax_splicing] = STATE(66),
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(523),
    [sym_character] = ACTIONS(525),
    [sym_symbol] = ACTIONS(523),
    [sym_keyword] = ACTIONS(525),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [56] = {
    [sym__skip] = STATE(37),
    [sym_comment] = STATE(37),
    [sym_block_comment] = STATE(37),
    [sym_sexp_comment] = STATE(37),
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
    [aux_sym_sexp_comment_repeat1] = STATE(37),
    [aux_sym__skip_token1] = ACTIONS(527),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(529),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(529),
    [sym_character] = ACTIONS(531),
    [sym_symbol] = ACTIONS(529),
    [sym_keyword] = ACTIONS(531),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [57] = {
    [sym__skip] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_block_comment] = STATE(44),
    [sym_sexp_comment] = STATE(44),
    [sym__datum] = STATE(70),
    [sym_string] = STATE(70),
    [sym_byte_string] = STATE(70),
    [sym_here_string] = STATE(70),
    [sym_regex] = STATE(70),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(70),
    [sym_list] = STATE(70),
    [sym_vector] = STATE(70),
    [sym_structure] = STATE(70),
    [sym_hash] = STATE(70),
    [sym_graph] = STATE(70),
    [sym_quote] = STATE(70),
    [sym_quasiquote] = STATE(70),
    [sym_syntax] = STATE(70),
    [sym_quasisyntax] = STATE(70),
    [sym_unquote] = STATE(70),
    [sym_unquote_splicing] = STATE(70),
    [sym_unsyntax] = STATE(70),
    [sym_unsyntax_splicing] = STATE(70),
    [aux_sym_sexp_comment_repeat1] = STATE(44),
    [aux_sym__skip_token1] = ACTIONS(533),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(535),
    [sym_character] = ACTIONS(537),
    [sym_symbol] = ACTIONS(535),
    [sym_keyword] = ACTIONS(537),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
  [58] = {
    [sym__skip] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_block_comment] = STATE(27),
    [sym_sexp_comment] = STATE(27),
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
    [aux_sym_sexp_comment_repeat1] = STATE(27),
    [aux_sym__skip_token1] = ACTIONS(539),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(541),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(541),
    [sym_character] = ACTIONS(543),
    [sym_symbol] = ACTIONS(541),
    [sym_keyword] = ACTIONS(543),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [59] = {
    [sym__skip] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_block_comment] = STATE(28),
    [sym_sexp_comment] = STATE(28),
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
    [aux_sym_sexp_comment_repeat1] = STATE(28),
    [aux_sym__skip_token1] = ACTIONS(545),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(547),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(547),
    [sym_character] = ACTIONS(549),
    [sym_symbol] = ACTIONS(547),
    [sym_keyword] = ACTIONS(549),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [60] = {
    [sym__skip] = STATE(29),
    [sym_comment] = STATE(29),
    [sym_block_comment] = STATE(29),
    [sym_sexp_comment] = STATE(29),
    [sym__datum] = STATE(129),
    [sym_string] = STATE(129),
    [sym_byte_string] = STATE(129),
    [sym_here_string] = STATE(129),
    [sym_regex] = STATE(129),
    [sym__real_string] = STATE(143),
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
    [aux_sym_sexp_comment_repeat1] = STATE(29),
    [aux_sym__skip_token1] = ACTIONS(551),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(553),
    [sym_character] = ACTIONS(555),
    [sym_symbol] = ACTIONS(553),
    [sym_keyword] = ACTIONS(555),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [61] = {
    [sym__skip] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_block_comment] = STATE(30),
    [sym_sexp_comment] = STATE(30),
    [sym__datum] = STATE(107),
    [sym_string] = STATE(107),
    [sym_byte_string] = STATE(107),
    [sym_here_string] = STATE(107),
    [sym_regex] = STATE(107),
    [sym__real_string] = STATE(143),
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
    [aux_sym_sexp_comment_repeat1] = STATE(30),
    [aux_sym__skip_token1] = ACTIONS(557),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(559),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(559),
    [sym_character] = ACTIONS(561),
    [sym_symbol] = ACTIONS(559),
    [sym_keyword] = ACTIONS(561),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [62] = {
    [sym__skip] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_sexp_comment] = STATE(21),
    [sym__datum] = STATE(118),
    [sym_string] = STATE(118),
    [sym_byte_string] = STATE(118),
    [sym_here_string] = STATE(118),
    [sym_regex] = STATE(118),
    [sym__real_string] = STATE(143),
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
    [aux_sym_sexp_comment_repeat1] = STATE(21),
    [aux_sym__skip_token1] = ACTIONS(563),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(565),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(565),
    [sym_character] = ACTIONS(567),
    [sym_symbol] = ACTIONS(565),
    [sym_keyword] = ACTIONS(567),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [63] = {
    [sym__skip] = STATE(105),
    [sym_comment] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_sexp_comment] = STATE(105),
    [sym__datum] = STATE(128),
    [sym_string] = STATE(128),
    [sym_byte_string] = STATE(128),
    [sym_here_string] = STATE(128),
    [sym_regex] = STATE(128),
    [sym__real_string] = STATE(143),
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
    [aux_sym_sexp_comment_repeat1] = STATE(105),
    [aux_sym__skip_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(569),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(569),
    [sym_character] = ACTIONS(571),
    [sym_symbol] = ACTIONS(569),
    [sym_keyword] = ACTIONS(571),
    [anon_sym_POUND_AMP] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_POUNDfl] = ACTIONS(31),
    [anon_sym_POUNDfx] = ACTIONS(31),
    [anon_sym_POUNDs] = ACTIONS(33),
    [aux_sym_hash_token1] = ACTIONS(35),
    [aux_sym_graph_token1] = ACTIONS(37),
    [aux_sym_graph_token2] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_SQUOTE] = ACTIONS(45),
    [anon_sym_POUND_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COMMA_AT] = ACTIONS(51),
    [anon_sym_POUND_COMMA] = ACTIONS(53),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(55),
  },
  [64] = {
    [sym__skip] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_block_comment] = STATE(49),
    [sym_sexp_comment] = STATE(49),
    [sym__datum] = STATE(83),
    [sym_string] = STATE(83),
    [sym_byte_string] = STATE(83),
    [sym_here_string] = STATE(83),
    [sym_regex] = STATE(83),
    [sym__real_string] = STATE(69),
    [sym_box] = STATE(83),
    [sym_list] = STATE(83),
    [sym_vector] = STATE(83),
    [sym_structure] = STATE(83),
    [sym_hash] = STATE(83),
    [sym_graph] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_quasiquote] = STATE(83),
    [sym_syntax] = STATE(83),
    [sym_quasisyntax] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_unquote_splicing] = STATE(83),
    [sym_unsyntax] = STATE(83),
    [sym_unsyntax_splicing] = STATE(83),
    [aux_sym_sexp_comment_repeat1] = STATE(49),
    [aux_sym__skip_token1] = ACTIONS(573),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(575),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_POUND_LT_LT] = ACTIONS(164),
    [aux_sym_regex_token1] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym_number] = ACTIONS(575),
    [sym_character] = ACTIONS(577),
    [sym_symbol] = ACTIONS(575),
    [sym_keyword] = ACTIONS(577),
    [anon_sym_POUND_AMP] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_POUNDfl] = ACTIONS(180),
    [anon_sym_POUNDfx] = ACTIONS(180),
    [anon_sym_POUNDs] = ACTIONS(182),
    [aux_sym_hash_token1] = ACTIONS(184),
    [aux_sym_graph_token1] = ACTIONS(186),
    [aux_sym_graph_token2] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_POUND_SQUOTE] = ACTIONS(194),
    [anon_sym_POUND_BQUOTE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_COMMA_AT] = ACTIONS(200),
    [anon_sym_POUND_COMMA] = ACTIONS(202),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(204),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(581), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(579), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [44] = 2,
    ACTIONS(585), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(583), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [88] = 2,
    ACTIONS(589), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(587), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [132] = 2,
    ACTIONS(593), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(591), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [176] = 2,
    ACTIONS(597), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(595), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [220] = 2,
    ACTIONS(601), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(599), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [264] = 2,
    ACTIONS(605), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(603), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [308] = 2,
    ACTIONS(609), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(607), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [352] = 2,
    ACTIONS(613), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(611), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [396] = 2,
    ACTIONS(617), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(615), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [440] = 2,
    ACTIONS(621), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(619), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [484] = 2,
    ACTIONS(625), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(623), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [528] = 2,
    ACTIONS(629), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(627), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [572] = 2,
    ACTIONS(633), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(631), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [616] = 2,
    ACTIONS(637), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(635), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [660] = 2,
    ACTIONS(641), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(639), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [704] = 2,
    ACTIONS(645), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(643), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [748] = 2,
    ACTIONS(649), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(647), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [792] = 2,
    ACTIONS(653), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(651), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [836] = 2,
    ACTIONS(657), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(655), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [880] = 2,
    ACTIONS(661), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(659), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [924] = 2,
    ACTIONS(665), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(663), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [968] = 2,
    ACTIONS(669), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(667), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1012] = 2,
    ACTIONS(673), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(671), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1056] = 2,
    ACTIONS(677), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(675), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1100] = 2,
    ACTIONS(681), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(679), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1144] = 2,
    ACTIONS(685), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(683), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1188] = 2,
    ACTIONS(689), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(687), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1232] = 2,
    ACTIONS(693), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(691), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1276] = 2,
    ACTIONS(697), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(695), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1320] = 2,
    ACTIONS(701), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(699), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1364] = 2,
    ACTIONS(705), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(703), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1408] = 2,
    ACTIONS(709), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(707), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1452] = 2,
    ACTIONS(713), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(711), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1496] = 2,
    ACTIONS(717), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(715), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1540] = 2,
    ACTIONS(721), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(719), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1584] = 2,
    ACTIONS(725), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(723), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1628] = 2,
    ACTIONS(729), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(727), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1672] = 2,
    ACTIONS(733), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(731), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1716] = 2,
    ACTIONS(737), 8,
      sym_dot,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(735), 31,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1760] = 7,
    ACTIONS(739), 1,
      aux_sym__skip_token1,
    ACTIONS(745), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(748), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(742), 2,
      aux_sym_comment_token1,
      sym__line_comment,
    STATE(105), 5,
      sym__skip,
      sym_comment,
      sym_block_comment,
      sym_sexp_comment,
      aux_sym_sexp_comment_repeat1,
    ACTIONS(751), 6,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(753), 21,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
  [1812] = 2,
    ACTIONS(601), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(599), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1853] = 2,
    ACTIONS(677), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(675), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1894] = 2,
    ACTIONS(685), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(683), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1935] = 2,
    ACTIONS(689), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(687), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1976] = 2,
    ACTIONS(693), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(691), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2017] = 2,
    ACTIONS(697), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(695), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2058] = 2,
    ACTIONS(701), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(699), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2099] = 2,
    ACTIONS(705), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(703), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2140] = 2,
    ACTIONS(633), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(631), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2181] = 2,
    ACTIONS(709), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(707), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2222] = 2,
    ACTIONS(637), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(635), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2263] = 2,
    ACTIONS(713), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(711), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2304] = 2,
    ACTIONS(641), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(639), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2345] = 2,
    ACTIONS(717), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(715), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2386] = 2,
    ACTIONS(721), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(719), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2427] = 2,
    ACTIONS(645), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(643), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2468] = 2,
    ACTIONS(725), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(723), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2509] = 2,
    ACTIONS(729), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(727), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2550] = 2,
    ACTIONS(649), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(647), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2591] = 2,
    ACTIONS(733), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(731), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2632] = 2,
    ACTIONS(585), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(583), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2673] = 2,
    ACTIONS(653), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(651), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2714] = 2,
    ACTIONS(681), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(679), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2755] = 2,
    ACTIONS(673), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(671), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2796] = 2,
    ACTIONS(605), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(603), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2837] = 2,
    ACTIONS(609), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(607), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2878] = 2,
    ACTIONS(613), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(611), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2919] = 2,
    ACTIONS(617), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(615), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [2960] = 2,
    ACTIONS(621), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(619), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3001] = 2,
    ACTIONS(625), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(623), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3042] = 2,
    ACTIONS(629), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(627), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3083] = 2,
    ACTIONS(589), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(587), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3124] = 2,
    ACTIONS(661), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(659), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3165] = 2,
    ACTIONS(657), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(655), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3206] = 2,
    ACTIONS(737), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(735), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3247] = 2,
    ACTIONS(665), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(663), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3288] = 2,
    ACTIONS(581), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(579), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3329] = 2,
    ACTIONS(597), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(595), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3370] = 2,
    ACTIONS(669), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(667), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3411] = 2,
    ACTIONS(593), 7,
      sym_boolean,
      anon_sym_POUND,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_BANG,
    ACTIONS(591), 29,
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
      aux_sym_hash_token1,
      aux_sym_graph_token1,
      aux_sym_graph_token2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [3452] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(755), 1,
      sym_decimal,
    STATE(130), 1,
      sym__real_string,
    STATE(131), 1,
      sym_list,
  [3474] = 7,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(757), 1,
      sym_decimal,
    STATE(71), 1,
      sym__real_string,
    STATE(72), 1,
      sym_list,
  [3496] = 4,
    ACTIONS(759), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(761), 1,
      aux_sym_block_comment_token1,
    ACTIONS(763), 1,
      anon_sym_PIPE_POUND,
    STATE(152), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3510] = 4,
    ACTIONS(759), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(765), 1,
      aux_sym_block_comment_token1,
    ACTIONS(767), 1,
      anon_sym_PIPE_POUND,
    STATE(150), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3524] = 4,
    ACTIONS(759), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(769), 1,
      aux_sym_block_comment_token1,
    ACTIONS(771), 1,
      anon_sym_PIPE_POUND,
    STATE(151), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3538] = 4,
    ACTIONS(773), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(776), 1,
      aux_sym_block_comment_token1,
    ACTIONS(779), 1,
      anon_sym_PIPE_POUND,
    STATE(151), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3552] = 4,
    ACTIONS(759), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(769), 1,
      aux_sym_block_comment_token1,
    ACTIONS(781), 1,
      anon_sym_PIPE_POUND,
    STATE(151), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3566] = 5,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(755), 1,
      sym_decimal,
    STATE(131), 1,
      sym_list,
  [3582] = 5,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(757), 1,
      sym_decimal,
    STATE(72), 1,
      sym_list,
  [3598] = 4,
    ACTIONS(759), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(783), 1,
      aux_sym_block_comment_token1,
    ACTIONS(785), 1,
      anon_sym_PIPE_POUND,
    STATE(156), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3612] = 4,
    ACTIONS(759), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(769), 1,
      aux_sym_block_comment_token1,
    ACTIONS(787), 1,
      anon_sym_PIPE_POUND,
    STATE(151), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3626] = 4,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_list,
  [3639] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_list,
  [3652] = 3,
    ACTIONS(789), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(791), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [3663] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_list,
  [3676] = 3,
    ACTIONS(794), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(796), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [3687] = 4,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_list,
  [3700] = 4,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_list,
  [3713] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_list,
  [3726] = 3,
    ACTIONS(798), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(800), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [3737] = 3,
    ACTIONS(802), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(804), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [3748] = 3,
    ACTIONS(806), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(804), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [3759] = 2,
    ACTIONS(661), 1,
      aux_sym_block_comment_token1,
    ACTIONS(659), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [3767] = 2,
    ACTIONS(581), 1,
      aux_sym_block_comment_token1,
    ACTIONS(579), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [3775] = 2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym__real_string,
  [3782] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym__real_string,
  [3789] = 1,
    ACTIONS(808), 1,
      sym__here_string_body,
  [3793] = 1,
    ACTIONS(810), 1,
      ts_builtin_sym_end,
  [3797] = 1,
    ACTIONS(812), 1,
      sym__here_string_body,
  [3801] = 1,
    ACTIONS(475), 1,
      sym_lang_name,
  [3805] = 1,
    ACTIONS(561), 1,
      sym_lang_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(65)] = 0,
  [SMALL_STATE(66)] = 44,
  [SMALL_STATE(67)] = 88,
  [SMALL_STATE(68)] = 132,
  [SMALL_STATE(69)] = 176,
  [SMALL_STATE(70)] = 220,
  [SMALL_STATE(71)] = 264,
  [SMALL_STATE(72)] = 308,
  [SMALL_STATE(73)] = 352,
  [SMALL_STATE(74)] = 396,
  [SMALL_STATE(75)] = 440,
  [SMALL_STATE(76)] = 484,
  [SMALL_STATE(77)] = 528,
  [SMALL_STATE(78)] = 572,
  [SMALL_STATE(79)] = 616,
  [SMALL_STATE(80)] = 660,
  [SMALL_STATE(81)] = 704,
  [SMALL_STATE(82)] = 748,
  [SMALL_STATE(83)] = 792,
  [SMALL_STATE(84)] = 836,
  [SMALL_STATE(85)] = 880,
  [SMALL_STATE(86)] = 924,
  [SMALL_STATE(87)] = 968,
  [SMALL_STATE(88)] = 1012,
  [SMALL_STATE(89)] = 1056,
  [SMALL_STATE(90)] = 1100,
  [SMALL_STATE(91)] = 1144,
  [SMALL_STATE(92)] = 1188,
  [SMALL_STATE(93)] = 1232,
  [SMALL_STATE(94)] = 1276,
  [SMALL_STATE(95)] = 1320,
  [SMALL_STATE(96)] = 1364,
  [SMALL_STATE(97)] = 1408,
  [SMALL_STATE(98)] = 1452,
  [SMALL_STATE(99)] = 1496,
  [SMALL_STATE(100)] = 1540,
  [SMALL_STATE(101)] = 1584,
  [SMALL_STATE(102)] = 1628,
  [SMALL_STATE(103)] = 1672,
  [SMALL_STATE(104)] = 1716,
  [SMALL_STATE(105)] = 1760,
  [SMALL_STATE(106)] = 1812,
  [SMALL_STATE(107)] = 1853,
  [SMALL_STATE(108)] = 1894,
  [SMALL_STATE(109)] = 1935,
  [SMALL_STATE(110)] = 1976,
  [SMALL_STATE(111)] = 2017,
  [SMALL_STATE(112)] = 2058,
  [SMALL_STATE(113)] = 2099,
  [SMALL_STATE(114)] = 2140,
  [SMALL_STATE(115)] = 2181,
  [SMALL_STATE(116)] = 2222,
  [SMALL_STATE(117)] = 2263,
  [SMALL_STATE(118)] = 2304,
  [SMALL_STATE(119)] = 2345,
  [SMALL_STATE(120)] = 2386,
  [SMALL_STATE(121)] = 2427,
  [SMALL_STATE(122)] = 2468,
  [SMALL_STATE(123)] = 2509,
  [SMALL_STATE(124)] = 2550,
  [SMALL_STATE(125)] = 2591,
  [SMALL_STATE(126)] = 2632,
  [SMALL_STATE(127)] = 2673,
  [SMALL_STATE(128)] = 2714,
  [SMALL_STATE(129)] = 2755,
  [SMALL_STATE(130)] = 2796,
  [SMALL_STATE(131)] = 2837,
  [SMALL_STATE(132)] = 2878,
  [SMALL_STATE(133)] = 2919,
  [SMALL_STATE(134)] = 2960,
  [SMALL_STATE(135)] = 3001,
  [SMALL_STATE(136)] = 3042,
  [SMALL_STATE(137)] = 3083,
  [SMALL_STATE(138)] = 3124,
  [SMALL_STATE(139)] = 3165,
  [SMALL_STATE(140)] = 3206,
  [SMALL_STATE(141)] = 3247,
  [SMALL_STATE(142)] = 3288,
  [SMALL_STATE(143)] = 3329,
  [SMALL_STATE(144)] = 3370,
  [SMALL_STATE(145)] = 3411,
  [SMALL_STATE(146)] = 3452,
  [SMALL_STATE(147)] = 3474,
  [SMALL_STATE(148)] = 3496,
  [SMALL_STATE(149)] = 3510,
  [SMALL_STATE(150)] = 3524,
  [SMALL_STATE(151)] = 3538,
  [SMALL_STATE(152)] = 3552,
  [SMALL_STATE(153)] = 3566,
  [SMALL_STATE(154)] = 3582,
  [SMALL_STATE(155)] = 3598,
  [SMALL_STATE(156)] = 3612,
  [SMALL_STATE(157)] = 3626,
  [SMALL_STATE(158)] = 3639,
  [SMALL_STATE(159)] = 3652,
  [SMALL_STATE(160)] = 3663,
  [SMALL_STATE(161)] = 3676,
  [SMALL_STATE(162)] = 3687,
  [SMALL_STATE(163)] = 3700,
  [SMALL_STATE(164)] = 3713,
  [SMALL_STATE(165)] = 3726,
  [SMALL_STATE(166)] = 3737,
  [SMALL_STATE(167)] = 3748,
  [SMALL_STATE(168)] = 3759,
  [SMALL_STATE(169)] = 3767,
  [SMALL_STATE(170)] = 3775,
  [SMALL_STATE(171)] = 3782,
  [SMALL_STATE(172)] = 3789,
  [SMALL_STATE(173)] = 3793,
  [SMALL_STATE(174)] = 3797,
  [SMALL_STATE(175)] = 3801,
  [SMALL_STATE(176)] = 3805,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 1, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 1, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 2, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_here_string, 2, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_here_string, 2, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 2, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 2, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 3, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 3, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3, 0, 0),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2, 0, 0),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sexp_comment_repeat1, 2, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [776] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2, 0, 0),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [810] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
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
