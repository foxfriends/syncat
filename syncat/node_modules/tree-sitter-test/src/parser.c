#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 36
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH = 1,
  aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH = 2,
  aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH = 3,
  aux_sym_SLASH_BSLASHn_BSLASH_DASH_BSLASH_DASH_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH = 4,
  sym_eq_divider = 5,
  sym_dash_divider = 6,
  sym__newline = 7,
  sym_heading_name = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  sym_identifier = 11,
  sym_program = 12,
  sym_test = 13,
  sym_header = 14,
  sym_body = 15,
  sym_s_expression = 16,
  sym__term = 17,
  sym_group = 18,
  aux_sym_program_repeat1 = 19,
  aux_sym_test_repeat1 = 20,
  aux_sym_body_repeat1 = 21,
  aux_sym_group_repeat1 = 22,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = "/[^\\n]/",
  [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = "/\\n[^\\-]/",
  [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = "/\\n\\-[^-]/",
  [aux_sym_SLASH_BSLASHn_BSLASH_DASH_BSLASH_DASH_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = "/\\n\\-\\-[^\\-]/",
  [sym_eq_divider] = "eq_divider",
  [sym_dash_divider] = "dash_divider",
  [sym__newline] = "_newline",
  [sym_heading_name] = "heading_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_program] = "program",
  [sym_test] = "test",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_s_expression] = "s_expression",
  [sym__term] = "_term",
  [sym_group] = "group",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_test_repeat1] = "test_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_group_repeat1] = "group_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHn_BSLASH_DASH_BSLASH_DASH_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_eq_divider] = {
    .visible = true,
    .named = true,
  },
  [sym_dash_divider] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_heading_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_s_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if ((lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(13);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if ((lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(13);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_dash_divider);
      if (lookahead == '-')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_BSLASH_DASH_BSLASH_DASH_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH);
      END_STATE();
    case 10:
      if (lookahead == '=')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '=')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_eq_divider);
      if (lookahead == '=')
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(15);
      if (lookahead == '\r')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 16:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(15);
      if (lookahead == '\r')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(14);
      END_STATE();
    case 17:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '\n')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == '\n')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(9);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 23:
      if (lookahead == '\n')
        ADVANCE(15);
      if (lookahead == '\r')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '=')
        ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '\n')
        ADVANCE(15);
      if (lookahead == '\r')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '=')
        ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_heading_name);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_heading_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=')
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n')
        ADVANCE(15);
      if (lookahead == '\r')
        ADVANCE(28);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(27);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == '\n')
        ADVANCE(15);
      if (lookahead == '\r')
        ADVANCE(28);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(27);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == '\n')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '\n')
        ADVANCE(30);
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      END_STATE();
    case 31:
      if (lookahead == '-')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '-')
        ADVANCE(7);
      END_STATE();
    case 33:
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      END_STATE();
    case 34:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 34},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_BSLASH_DASH_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(1),
    [sym_eq_divider] = ACTIONS(1),
    [sym_dash_divider] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(3),
    [sym_test] = STATE(5),
    [sym_header] = STATE(4),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_eq_divider] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
  },
  [2] = {
    [sym__newline] = ACTIONS(9),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(11),
  },
  [4] = {
    [sym_body] = STATE(8),
    [aux_sym_body_repeat1] = STATE(9),
    [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = ACTIONS(13),
    [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(13),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = ACTIONS(13),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_BSLASH_DASH_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(13),
    [sym_dash_divider] = ACTIONS(15),
  },
  [5] = {
    [sym_test] = STATE(10),
    [sym_header] = STATE(4),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_eq_divider] = ACTIONS(5),
    [sym__newline] = ACTIONS(19),
  },
  [6] = {
    [sym__newline] = ACTIONS(21),
    [sym_heading_name] = ACTIONS(23),
  },
  [7] = {
    [sym_s_expression] = STATE(14),
    [sym__term] = STATE(15),
    [sym_group] = STATE(15),
    [aux_sym_test_repeat1] = STATE(16),
    [sym__newline] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
  [8] = {
    [sym_dash_divider] = ACTIONS(31),
  },
  [9] = {
    [aux_sym_body_repeat1] = STATE(18),
    [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_BSLASH_DASH_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(33),
    [sym_dash_divider] = ACTIONS(35),
  },
  [10] = {
    [sym_test] = STATE(10),
    [sym_header] = STATE(4),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_eq_divider] = ACTIONS(39),
    [sym__newline] = ACTIONS(42),
  },
  [11] = {
    [sym_eq_divider] = ACTIONS(45),
  },
  [12] = {
    [sym__newline] = ACTIONS(47),
  },
  [13] = {
    [sym__term] = STATE(23),
    [sym_group] = STATE(23),
    [aux_sym_group_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_eq_divider] = ACTIONS(57),
    [sym__newline] = ACTIONS(55),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_eq_divider] = ACTIONS(61),
    [sym__newline] = ACTIONS(59),
  },
  [16] = {
    [sym_s_expression] = STATE(24),
    [sym__term] = STATE(15),
    [sym_group] = STATE(15),
    [aux_sym_test_repeat1] = STATE(25),
    [sym__newline] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
  [17] = {
    [sym_s_expression] = STATE(24),
    [sym__term] = STATE(15),
    [sym_group] = STATE(15),
    [aux_sym_test_repeat1] = STATE(26),
    [sym__newline] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
  [18] = {
    [aux_sym_body_repeat1] = STATE(18),
    [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_BSLASH_DASH_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(67),
    [sym_dash_divider] = ACTIONS(70),
  },
  [19] = {
    [sym__newline] = ACTIONS(72),
  },
  [20] = {
    [sym_eq_divider] = ACTIONS(74),
  },
  [21] = {
    [sym__term] = STATE(30),
    [sym_group] = STATE(30),
    [aux_sym_group_repeat1] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_eq_divider] = ACTIONS(82),
    [sym__newline] = ACTIONS(80),
  },
  [23] = {
    [sym__term] = STATE(32),
    [sym_group] = STATE(32),
    [aux_sym_group_repeat1] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(84),
    [sym_identifier] = ACTIONS(86),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_eq_divider] = ACTIONS(90),
    [sym__newline] = ACTIONS(88),
  },
  [25] = {
    [aux_sym_test_repeat1] = STATE(25),
    [sym__newline] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym_identifier] = ACTIONS(95),
  },
  [26] = {
    [sym_s_expression] = STATE(33),
    [sym__term] = STATE(15),
    [sym_group] = STATE(15),
    [aux_sym_test_repeat1] = STATE(25),
    [sym__newline] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
  [27] = {
    [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = ACTIONS(97),
    [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(97),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = ACTIONS(97),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_BSLASH_DASH_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(97),
    [sym_dash_divider] = ACTIONS(97),
  },
  [28] = {
    [sym__newline] = ACTIONS(99),
  },
  [29] = {
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [sym_identifier] = ACTIONS(80),
  },
  [30] = {
    [sym__term] = STATE(32),
    [sym_group] = STATE(32),
    [aux_sym_group_repeat1] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(101),
    [sym_identifier] = ACTIONS(86),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_eq_divider] = ACTIONS(105),
    [sym__newline] = ACTIONS(103),
  },
  [32] = {
    [sym__term] = STATE(32),
    [sym_group] = STATE(32),
    [aux_sym_group_repeat1] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(110),
    [sym_identifier] = ACTIONS(112),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_eq_divider] = ACTIONS(117),
    [sym__newline] = ACTIONS(115),
  },
  [34] = {
    [aux_sym_SLASH_LBRACK_CARET_BSLASHn_RBRACK_SLASH] = ACTIONS(119),
    [aux_sym_SLASH_BSLASHn_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(119),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_LBRACK_CARET_DASH_RBRACK_SLASH] = ACTIONS(119),
    [aux_sym_SLASH_BSLASHn_BSLASH_DASH_BSLASH_DASH_LBRACK_CARET_BSLASH_DASH_RBRACK_SLASH] = ACTIONS(119),
    [sym_dash_divider] = ACTIONS(119),
  },
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [sym_identifier] = ACTIONS(103),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = false}, SHIFT(9),
  [15] = {.count = 1, .reusable = false}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = false}, SHIFT(11),
  [23] = {.count = 1, .reusable = false}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, SHIFT(16),
  [27] = {.count = 1, .reusable = false}, SHIFT(13),
  [29] = {.count = 1, .reusable = false}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, SHIFT(17),
  [33] = {.count = 1, .reusable = false}, SHIFT(18),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_body, 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [39] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [45] = {.count = 1, .reusable = true}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, SHIFT(20),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, SHIFT(22),
  [53] = {.count = 1, .reusable = true}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_test, 3),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_test, 3),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_s_expression, 1),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_s_expression, 1),
  [63] = {.count = 1, .reusable = true}, SHIFT(25),
  [65] = {.count = 1, .reusable = true}, SHIFT(26),
  [67] = {.count = 2, .reusable = false}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(18),
  [70] = {.count = 1, .reusable = false}, REDUCE(aux_sym_body_repeat1, 2),
  [72] = {.count = 1, .reusable = true}, SHIFT(27),
  [74] = {.count = 1, .reusable = true}, SHIFT(28),
  [76] = {.count = 1, .reusable = true}, SHIFT(29),
  [78] = {.count = 1, .reusable = true}, SHIFT(30),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_group, 2),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym_group, 2),
  [84] = {.count = 1, .reusable = true}, SHIFT(31),
  [86] = {.count = 1, .reusable = true}, SHIFT(32),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_test, 4),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym_test, 4),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_test_repeat1, 2), SHIFT_REPEAT(25),
  [95] = {.count = 1, .reusable = false}, REDUCE(aux_sym_test_repeat1, 2),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_header, 5),
  [99] = {.count = 1, .reusable = true}, SHIFT(34),
  [101] = {.count = 1, .reusable = true}, SHIFT(35),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_group, 3),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(21),
  [110] = {.count = 1, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(32),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_test, 5),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_test, 5),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_header, 6),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_test() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
