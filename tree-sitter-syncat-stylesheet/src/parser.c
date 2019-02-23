#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 20
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_COLON = 3,
  anon_sym_SEMI = 4,
  aux_sym_node_kind_token1 = 5,
  aux_sym_node_kind_token2 = 6,
  aux_sym_node_kind_token3 = 7,
  sym_style_name = 8,
  sym_style_value = 9,
  sym_comment = 10,
  sym_source_file = 11,
  sym_rule = 12,
  sym_style = 13,
  sym_node_kind = 14,
  aux_sym_source_file_repeat1 = 15,
  aux_sym_rule_repeat1 = 16,
  aux_sym_rule_repeat2 = 17,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [aux_sym_node_kind_token1] = "node_kind_token1",
  [aux_sym_node_kind_token2] = "node_kind_token2",
  [aux_sym_node_kind_token3] = "node_kind_token3",
  [sym_style_name] = "style_name",
  [sym_style_value] = "style_value",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_rule] = "rule",
  [sym_style] = "style",
  [sym_node_kind] = "node_kind",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_rule_repeat2] = "rule_repeat2",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_node_kind_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_kind_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_kind_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_style_name] = {
    .visible = true,
    .named = true,
  },
  [sym_style_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_style] = {
    .visible = true,
    .named = true,
  },
  [sym_node_kind] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat2] = {
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
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(7);
      if (lookahead == '}')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\\')
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '"')
        ADVANCE(16);
      if (lookahead == '\\')
        ADVANCE(10);
      if (lookahead != 0)
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_node_kind_token3);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_node_kind_token2);
      END_STATE();
    case 18:
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(14);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 20:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(21);
      if (lookahead == '\'')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == '{')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_node_kind_token1);
      if (lookahead == '"')
        ADVANCE(24);
      if (lookahead == '\\')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(11);
      if (lookahead != 0)
        ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_node_kind_token1);
      if (lookahead == '\'')
        ADVANCE(24);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_node_kind_token1);
      if (lookahead == '*')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_node_kind_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_node_kind_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_node_kind_token1);
      if (lookahead == '"')
        ADVANCE(31);
      if (lookahead == '\\')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(11);
      if (lookahead != 0)
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_node_kind_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_node_kind_token1);
      if (lookahead == '\'')
        ADVANCE(31);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_node_kind_token1);
      if (lookahead == '*')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_node_kind_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_node_kind_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(24);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_node_kind_token1);
      if (lookahead == '*')
        ADVANCE(32);
      if (lookahead == '/')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 34:
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      END_STATE();
    case 35:
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (lookahead != 0 &&
          lookahead != ';')
        ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_style_value);
      if (lookahead == '*')
        ADVANCE(38);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_style_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';')
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_style_value);
      if (lookahead == '*')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ';')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_style_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ';')
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_style_value);
      if (lookahead == '*')
        ADVANCE(40);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ';')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_style_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';')
        ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 42},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 33},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [aux_sym_node_kind_token2] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [aux_sym_node_kind_token3] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [sym_style_name] = ACTIONS(3),
  },
  [1] = {
    [sym_node_kind] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_rule] = STATE(4),
    [sym_source_file] = STATE(5),
    [aux_sym_rule_repeat1] = STATE(6),
    [aux_sym_node_kind_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_node_kind_token3] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(11),
    [aux_sym_node_kind_token2] = ACTIONS(5),
  },
  [2] = {
    [aux_sym_node_kind_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(7),
    [aux_sym_node_kind_token3] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [aux_sym_node_kind_token2] = ACTIONS(13),
  },
  [3] = {
    [sym_style] = STATE(9),
    [aux_sym_rule_repeat2] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(17),
    [sym_comment] = ACTIONS(1),
    [sym_style_name] = ACTIONS(19),
  },
  [4] = {
    [sym_node_kind] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_rule] = STATE(10),
    [aux_sym_rule_repeat1] = STATE(6),
    [aux_sym_node_kind_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_node_kind_token3] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(11),
    [aux_sym_node_kind_token2] = ACTIONS(5),
  },
  [5] = {
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [6] = {
    [sym_node_kind] = STATE(12),
    [aux_sym_rule_repeat1] = STATE(12),
    [aux_sym_node_kind_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym_node_kind_token3] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(25),
    [aux_sym_node_kind_token2] = ACTIONS(5),
  },
  [7] = {
    [aux_sym_node_kind_token1] = ACTIONS(27),
    [sym_comment] = ACTIONS(7),
    [aux_sym_node_kind_token3] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [aux_sym_node_kind_token2] = ACTIONS(27),
  },
  [8] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(31),
  },
  [9] = {
    [sym_style] = STATE(15),
    [aux_sym_rule_repeat2] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_style_name] = ACTIONS(19),
  },
  [10] = {
    [sym_node_kind] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_rule] = STATE(10),
    [aux_sym_rule_repeat1] = STATE(6),
    [aux_sym_node_kind_token1] = ACTIONS(35),
    [sym_comment] = ACTIONS(7),
    [aux_sym_node_kind_token3] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
    [aux_sym_node_kind_token2] = ACTIONS(35),
  },
  [11] = {
    [sym_style] = STATE(16),
    [aux_sym_rule_repeat2] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_style_name] = ACTIONS(19),
  },
  [12] = {
    [sym_node_kind] = STATE(12),
    [aux_sym_rule_repeat1] = STATE(12),
    [aux_sym_node_kind_token1] = ACTIONS(43),
    [sym_comment] = ACTIONS(7),
    [aux_sym_node_kind_token3] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(46),
    [aux_sym_node_kind_token2] = ACTIONS(43),
  },
  [13] = {
    [sym_style_value] = ACTIONS(48),
    [sym_comment] = ACTIONS(7),
  },
  [14] = {
    [aux_sym_node_kind_token1] = ACTIONS(50),
    [sym_comment] = ACTIONS(7),
    [aux_sym_node_kind_token3] = ACTIONS(50),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(52),
    [aux_sym_node_kind_token2] = ACTIONS(50),
  },
  [15] = {
    [sym_style] = STATE(15),
    [aux_sym_rule_repeat2] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(1),
    [sym_style_name] = ACTIONS(56),
  },
  [16] = {
    [sym_style] = STATE(15),
    [aux_sym_rule_repeat2] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(59),
    [sym_comment] = ACTIONS(1),
    [sym_style_name] = ACTIONS(19),
  },
  [17] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(61),
  },
  [18] = {
    [aux_sym_node_kind_token1] = ACTIONS(63),
    [sym_comment] = ACTIONS(7),
    [aux_sym_node_kind_token3] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [aux_sym_node_kind_token2] = ACTIONS(63),
  },
  [19] = {
    [anon_sym_RBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(1),
    [sym_style_name] = ACTIONS(67),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, REDUCE(sym_node_kind, 1),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_node_kind, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [23] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [43] = {.count = 2, .reusable = false}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rule_repeat1, 2),
  [48] = {.count = 1, .reusable = false}, SHIFT(17),
  [50] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 3),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 3),
  [54] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rule_repeat2, 2),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rule_repeat2, 2), SHIFT_REPEAT(8),
  [59] = {.count = 1, .reusable = true}, SHIFT(18),
  [61] = {.count = 1, .reusable = true}, SHIFT(19),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 4),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 4),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_style, 4),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Syncat_stylesheet() {
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
