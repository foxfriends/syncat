#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 119
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 6
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym__terminator = 1,
  sym__leading_dot = 2,
  anon_sym_EQ = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_DOLLAR = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COLON = 10,
  anon_sym_DASH_GT = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_DOT = 14,
  anon_sym_STAR = 15,
  sym_number = 16,
  sym_identifier = 17,
  sym_term_identifier = 18,
  sym__text = 19,
  sym_comment = 20,
  sym_translation_file = 21,
  sym_message = 22,
  sym_term = 23,
  sym_value = 24,
  sym_placeable = 25,
  sym_variant = 26,
  sym__expression = 27,
  sym_attribute = 28,
  sym_variable_expression = 29,
  sym_call_expression = 30,
  sym_keyword_argument = 31,
  sym_select_expression = 32,
  sym_variant_expression = 33,
  sym_attribute_expression = 34,
  sym_selector = 35,
  sym_default_selector = 36,
  aux_sym_translation_file_repeat1 = 37,
  aux_sym_message_repeat1 = 38,
  aux_sym_value_repeat1 = 39,
  aux_sym_variant_repeat1 = 40,
  aux_sym_call_expression_repeat1 = 41,
  anon_alias_sym_DOT = 42,
  alias_sym_facet_identifier = 43,
  alias_sym_function_identifier = 44,
  alias_sym_keyword_identifier = 45,
  alias_sym_message_identifier = 46,
  alias_sym_variable_identifier = 47,
};

static const char *ts_symbol_names[] = {
  [sym__terminator] = "_terminator",
  [sym__leading_dot] = "_leading_dot",
  [ts_builtin_sym_end] = "END",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_term_identifier] = "term_identifier",
  [sym__text] = "_text",
  [sym_comment] = "comment",
  [sym_translation_file] = "translation_file",
  [sym_message] = "message",
  [sym_term] = "term",
  [sym_value] = "value",
  [sym_placeable] = "placeable",
  [sym_variant] = "variant",
  [sym__expression] = "_expression",
  [sym_attribute] = "attribute",
  [sym_variable_expression] = "variable_expression",
  [sym_call_expression] = "call_expression",
  [sym_keyword_argument] = "keyword_argument",
  [sym_select_expression] = "select_expression",
  [sym_variant_expression] = "variant_expression",
  [sym_attribute_expression] = "attribute_expression",
  [sym_selector] = "selector",
  [sym_default_selector] = "default_selector",
  [aux_sym_translation_file_repeat1] = "translation_file_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_variant_repeat1] = "variant_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
  [anon_alias_sym_DOT] = ".",
  [alias_sym_facet_identifier] = "facet_identifier",
  [alias_sym_function_identifier] = "function_identifier",
  [alias_sym_keyword_identifier] = "keyword_identifier",
  [alias_sym_message_identifier] = "message_identifier",
  [alias_sym_variable_identifier] = "variable_identifier",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym__leading_dot] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_term_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_translation_file] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_placeable] = {
    .visible = true,
    .named = true,
  },
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_select_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_default_selector] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_translation_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variant_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_facet_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_message_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_message_identifier,
  },
  [2] = {
    [1] = alias_sym_variable_identifier,
  },
  [3] = {
    [0] = alias_sym_function_identifier,
  },
  [4] = {
    [1] = alias_sym_facet_identifier,
  },
  [5] = {
    [0] = alias_sym_message_identifier,
    [2] = alias_sym_facet_identifier,
  },
  [6] = {
    [2] = alias_sym_facet_identifier,
  },
  [7] = {
    [0] = anon_alias_sym_DOT,
  },
  [8] = {
    [0] = alias_sym_keyword_identifier,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == ']')
        ADVANCE(15);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '}')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      if (lookahead == '>')
        ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_term_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 22:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(24);
      END_STATE();
    case 25:
      if (lookahead == '\n')
        SKIP(25);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '[')
        ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*' ||
          lookahead == '[' ||
          lookahead == '{')
        ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '>')
        ADVANCE(9);
      END_STATE();
    case 32:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      END_STATE();
    case 33:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ']')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      END_STATE();
    case 34:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      END_STATE();
    case 35:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == '\n')
        SKIP(36);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '}')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == '\n')
        SKIP(40);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '}')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '>')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '}')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == '\n')
        SKIP(44);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == ')')
        ADVANCE(45);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(46);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == ')')
        ADVANCE(45);
      if (lookahead == ',')
        ADVANCE(46);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 24, .external_lex_state = 1},
  [11] = {.lex_state = 25, .external_lex_state = 1},
  [12] = {.lex_state = 24, .external_lex_state = 1},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 24, .external_lex_state = 1},
  [23] = {.lex_state = 25, .external_lex_state = 1},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 24, .external_lex_state = 1},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 25, .external_lex_state = 1},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 25, .external_lex_state = 1},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 24, .external_lex_state = 1},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 34},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 30},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 30},
  [56] = {.lex_state = 29},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 32},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 35},
  [64] = {.lex_state = 25},
  [65] = {.lex_state = 29},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 30},
  [68] = {.lex_state = 29},
  [69] = {.lex_state = 34},
  [70] = {.lex_state = 30},
  [71] = {.lex_state = 30},
  [72] = {.lex_state = 30},
  [73] = {.lex_state = 30},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 32},
  [78] = {.lex_state = 24, .external_lex_state = 1},
  [79] = {.lex_state = 32},
  [80] = {.lex_state = 32},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 34},
  [84] = {.lex_state = 34},
  [85] = {.lex_state = 34},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 39},
  [89] = {.lex_state = 30},
  [90] = {.lex_state = 34},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 36},
  [95] = {.lex_state = 36},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 21},
  [99] = {.lex_state = 39},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 40},
  [102] = {.lex_state = 25},
  [103] = {.lex_state = 25},
  [104] = {.lex_state = 25},
  [105] = {.lex_state = 33},
  [106] = {.lex_state = 32},
  [107] = {.lex_state = 32},
  [108] = {.lex_state = 40},
  [109] = {.lex_state = 29},
  [110] = {.lex_state = 44},
  [111] = {.lex_state = 25},
  [112] = {.lex_state = 40},
  [113] = {.lex_state = 40},
  [114] = {.lex_state = 32},
  [115] = {.lex_state = 32},
  [116] = {.lex_state = 44},
  [117] = {.lex_state = 44},
  [118] = {.lex_state = 44},
};

enum {
  ts_external_token__terminator,
  ts_external_token__leading_dot,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__terminator] = sym__terminator,
  [ts_external_token__leading_dot] = sym__leading_dot,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__terminator] = true,
    [ts_external_token__leading_dot] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__terminator] = ACTIONS(1),
    [sym__leading_dot] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_term_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_translation_file] = STATE(4),
    [sym_message] = STATE(5),
    [sym_term] = STATE(5),
    [aux_sym_translation_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_term_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [anon_sym_EQ] = ACTIONS(11),
    [sym_comment] = ACTIONS(9),
  },
  [3] = {
    [anon_sym_EQ] = ACTIONS(13),
    [sym_comment] = ACTIONS(9),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_comment] = ACTIONS(9),
  },
  [5] = {
    [sym_message] = STATE(8),
    [sym_term] = STATE(8),
    [aux_sym_translation_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_identifier] = ACTIONS(5),
    [sym_term_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [6] = {
    [sym_value] = STATE(10),
    [sym_placeable] = STATE(11),
    [sym_variant] = STATE(11),
    [aux_sym_value_repeat1] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym__text] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [7] = {
    [sym_value] = STATE(12),
    [sym_placeable] = STATE(11),
    [sym_variant] = STATE(11),
    [aux_sym_value_repeat1] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym__text] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [8] = {
    [sym_message] = STATE(8),
    [sym_term] = STATE(8),
    [aux_sym_translation_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_term_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [sym__expression] = STATE(18),
    [sym_variable_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_select_expression] = STATE(18),
    [sym_variant_expression] = STATE(18),
    [sym_attribute_expression] = STATE(18),
    [sym_selector] = STATE(19),
    [sym_default_selector] = STATE(19),
    [aux_sym_variant_repeat1] = STATE(19),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [10] = {
    [sym_attribute] = STATE(22),
    [aux_sym_message_repeat1] = STATE(22),
    [sym__terminator] = ACTIONS(45),
    [sym__leading_dot] = ACTIONS(47),
    [sym_comment] = ACTIONS(9),
  },
  [11] = {
    [sym_placeable] = STATE(23),
    [sym_variant] = STATE(23),
    [aux_sym_value_repeat1] = STATE(23),
    [sym__terminator] = ACTIONS(49),
    [sym__leading_dot] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym__text] = ACTIONS(51),
    [sym_comment] = ACTIONS(23),
  },
  [12] = {
    [sym_attribute] = STATE(25),
    [aux_sym_message_repeat1] = STATE(25),
    [sym__terminator] = ACTIONS(53),
    [sym__leading_dot] = ACTIONS(47),
    [sym_comment] = ACTIONS(9),
  },
  [13] = {
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(9),
  },
  [14] = {
    [sym_number] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(9),
  },
  [15] = {
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_comment] = ACTIONS(9),
  },
  [17] = {
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(75),
    [sym_comment] = ACTIONS(9),
  },
  [18] = {
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_comment] = ACTIONS(9),
  },
  [19] = {
    [sym_selector] = STATE(38),
    [sym_default_selector] = STATE(38),
    [aux_sym_variant_repeat1] = STATE(38),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_identifier] = ACTIONS(83),
    [sym_term_identifier] = ACTIONS(83),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [sym_identifier] = ACTIONS(85),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [sym_attribute] = STATE(41),
    [aux_sym_message_repeat1] = STATE(41),
    [sym__terminator] = ACTIONS(87),
    [sym__leading_dot] = ACTIONS(47),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [sym_placeable] = STATE(23),
    [sym_variant] = STATE(23),
    [aux_sym_value_repeat1] = STATE(23),
    [sym__terminator] = ACTIONS(89),
    [sym__leading_dot] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym__text] = ACTIONS(94),
    [sym_comment] = ACTIONS(23),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_identifier] = ACTIONS(97),
    [sym_term_identifier] = ACTIONS(97),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [sym_attribute] = STATE(41),
    [aux_sym_message_repeat1] = STATE(41),
    [sym__terminator] = ACTIONS(99),
    [sym__leading_dot] = ACTIONS(47),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_DASH_GT] = ACTIONS(101),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [anon_sym_RBRACK] = ACTIONS(105),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [sym_identifier] = ACTIONS(107),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [sym__expression] = STATE(48),
    [sym_variable_expression] = STATE(48),
    [sym_call_expression] = STATE(48),
    [sym_keyword_argument] = STATE(49),
    [sym_select_expression] = STATE(48),
    [sym_variant_expression] = STATE(48),
    [sym_attribute_expression] = STATE(48),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(109),
    [sym_number] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [sym_number] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [sym_identifier] = ACTIONS(119),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [sym_number] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [sym_identifier] = ACTIONS(125),
    [sym_comment] = ACTIONS(9),
  },
  [35] = {
    [sym__terminator] = ACTIONS(127),
    [sym__leading_dot] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [sym__text] = ACTIONS(129),
    [sym_comment] = ACTIONS(23),
  },
  [36] = {
    [sym_selector] = STATE(58),
    [sym_default_selector] = STATE(58),
    [aux_sym_variant_repeat1] = STATE(58),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(133),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [sym__terminator] = ACTIONS(135),
    [sym__leading_dot] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym__text] = ACTIONS(137),
    [sym_comment] = ACTIONS(23),
  },
  [38] = {
    [sym_selector] = STATE(38),
    [sym_default_selector] = STATE(38),
    [aux_sym_variant_repeat1] = STATE(38),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(144),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [anon_sym_EQ] = ACTIONS(147),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_identifier] = ACTIONS(149),
    [sym_term_identifier] = ACTIONS(149),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [sym_attribute] = STATE(41),
    [aux_sym_message_repeat1] = STATE(41),
    [sym__terminator] = ACTIONS(151),
    [sym__leading_dot] = ACTIONS(153),
    [sym_comment] = ACTIONS(9),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_identifier] = ACTIONS(156),
    [sym_term_identifier] = ACTIONS(156),
    [sym_comment] = ACTIONS(9),
  },
  [43] = {
    [sym_value] = STATE(61),
    [sym_placeable] = STATE(62),
    [sym_variant] = STATE(62),
    [aux_sym_value_repeat1] = STATE(62),
    [anon_sym_LBRACE] = ACTIONS(158),
    [sym__text] = ACTIONS(160),
    [sym_comment] = ACTIONS(23),
  },
  [44] = {
    [sym_value] = STATE(63),
    [sym_placeable] = STATE(62),
    [sym_variant] = STATE(62),
    [aux_sym_value_repeat1] = STATE(62),
    [anon_sym_LBRACE] = ACTIONS(158),
    [sym__text] = ACTIONS(160),
    [sym_comment] = ACTIONS(23),
  },
  [45] = {
    [anon_sym_RBRACK] = ACTIONS(162),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_DASH_GT] = ACTIONS(164),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(166),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [aux_sym_call_expression_repeat1] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_DASH_GT] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [aux_sym_call_expression_repeat1] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(170),
    [sym_comment] = ACTIONS(9),
  },
  [50] = {
    [anon_sym_RBRACK] = ACTIONS(174),
    [sym_comment] = ACTIONS(9),
  },
  [51] = {
    [anon_sym_RBRACK] = ACTIONS(176),
    [sym_comment] = ACTIONS(9),
  },
  [52] = {
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_DASH_GT] = ACTIONS(178),
    [sym_comment] = ACTIONS(9),
  },
  [53] = {
    [anon_sym_RBRACK] = ACTIONS(180),
    [sym_comment] = ACTIONS(9),
  },
  [54] = {
    [anon_sym_RBRACK] = ACTIONS(182),
    [sym_comment] = ACTIONS(9),
  },
  [55] = {
    [anon_sym_RBRACE] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_DASH_GT] = ACTIONS(184),
    [sym_comment] = ACTIONS(9),
  },
  [56] = {
    [sym_number] = ACTIONS(186),
    [sym_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(9),
  },
  [57] = {
    [anon_sym_LBRACK] = ACTIONS(190),
    [sym_comment] = ACTIONS(9),
  },
  [58] = {
    [sym_selector] = STATE(77),
    [sym_default_selector] = STATE(77),
    [aux_sym_variant_repeat1] = STATE(77),
    [anon_sym_RBRACE] = ACTIONS(192),
    [anon_sym_DASH_GT] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(133),
    [sym_comment] = ACTIONS(9),
  },
  [59] = {
    [sym_value] = STATE(78),
    [sym_placeable] = STATE(11),
    [sym_variant] = STATE(11),
    [aux_sym_value_repeat1] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym__text] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [60] = {
    [sym__expression] = STATE(79),
    [sym_variable_expression] = STATE(79),
    [sym_call_expression] = STATE(79),
    [sym_select_expression] = STATE(79),
    [sym_variant_expression] = STATE(79),
    [sym_attribute_expression] = STATE(79),
    [sym_selector] = STATE(80),
    [sym_default_selector] = STATE(80),
    [aux_sym_variant_repeat1] = STATE(80),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_number] = ACTIONS(194),
    [sym_identifier] = ACTIONS(41),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [61] = {
    [anon_sym_RBRACE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_DASH_GT] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_STAR] = ACTIONS(196),
    [sym_comment] = ACTIONS(9),
  },
  [62] = {
    [sym_placeable] = STATE(81),
    [sym_variant] = STATE(81),
    [aux_sym_value_repeat1] = STATE(81),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(198),
    [sym__text] = ACTIONS(200),
    [sym_comment] = ACTIONS(23),
  },
  [63] = {
    [anon_sym_RBRACE] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_DASH_GT] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(9),
  },
  [64] = {
    [sym_value] = STATE(82),
    [sym_placeable] = STATE(62),
    [sym_variant] = STATE(62),
    [aux_sym_value_repeat1] = STATE(62),
    [anon_sym_LBRACE] = ACTIONS(158),
    [sym__text] = ACTIONS(160),
    [sym_comment] = ACTIONS(23),
  },
  [65] = {
    [sym__expression] = STATE(83),
    [sym_variable_expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_select_expression] = STATE(83),
    [sym_variant_expression] = STATE(83),
    [sym_attribute_expression] = STATE(83),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [sym_number] = ACTIONS(204),
    [sym_identifier] = ACTIONS(41),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [66] = {
    [sym__expression] = STATE(84),
    [sym_variable_expression] = STATE(84),
    [sym_call_expression] = STATE(84),
    [sym_keyword_argument] = STATE(85),
    [sym_select_expression] = STATE(84),
    [sym_variant_expression] = STATE(84),
    [sym_attribute_expression] = STATE(84),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [sym_number] = ACTIONS(206),
    [sym_identifier] = ACTIONS(113),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [67] = {
    [anon_sym_RBRACE] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_DASH_GT] = ACTIONS(208),
    [sym_comment] = ACTIONS(9),
  },
  [68] = {
    [sym_selector] = STATE(88),
    [sym_default_selector] = STATE(88),
    [aux_sym_variant_repeat1] = STATE(88),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_STAR] = ACTIONS(212),
    [sym_comment] = ACTIONS(9),
  },
  [69] = {
    [aux_sym_call_expression_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(214),
    [sym_comment] = ACTIONS(9),
  },
  [70] = {
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_DASH_GT] = ACTIONS(216),
    [sym_comment] = ACTIONS(9),
  },
  [71] = {
    [anon_sym_RBRACE] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_DASH_GT] = ACTIONS(218),
    [sym_comment] = ACTIONS(9),
  },
  [72] = {
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_DASH_GT] = ACTIONS(220),
    [sym_comment] = ACTIONS(9),
  },
  [73] = {
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_DASH_GT] = ACTIONS(222),
    [sym_comment] = ACTIONS(9),
  },
  [74] = {
    [anon_sym_RBRACK] = ACTIONS(224),
    [sym_comment] = ACTIONS(9),
  },
  [75] = {
    [anon_sym_RBRACK] = ACTIONS(226),
    [sym_comment] = ACTIONS(9),
  },
  [76] = {
    [sym_identifier] = ACTIONS(228),
    [sym_comment] = ACTIONS(9),
  },
  [77] = {
    [sym_selector] = STATE(77),
    [sym_default_selector] = STATE(77),
    [aux_sym_variant_repeat1] = STATE(77),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_DASH_GT] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(233),
    [sym_comment] = ACTIONS(9),
  },
  [78] = {
    [sym__terminator] = ACTIONS(236),
    [sym__leading_dot] = ACTIONS(236),
    [sym_comment] = ACTIONS(9),
  },
  [79] = {
    [anon_sym_RBRACE] = ACTIONS(238),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_comment] = ACTIONS(9),
  },
  [80] = {
    [sym_selector] = STATE(38),
    [sym_default_selector] = STATE(38),
    [aux_sym_variant_repeat1] = STATE(38),
    [anon_sym_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
  },
  [81] = {
    [sym_placeable] = STATE(81),
    [sym_variant] = STATE(81),
    [aux_sym_value_repeat1] = STATE(81),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [sym__text] = ACTIONS(247),
    [sym_comment] = ACTIONS(23),
  },
  [82] = {
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_DASH_GT] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(250),
    [anon_sym_STAR] = ACTIONS(250),
    [sym_comment] = ACTIONS(9),
  },
  [83] = {
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [84] = {
    [anon_sym_COMMA] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_DASH_GT] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [85] = {
    [anon_sym_COMMA] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(9),
  },
  [86] = {
    [sym_number] = ACTIONS(256),
    [sym_identifier] = ACTIONS(258),
    [sym_comment] = ACTIONS(9),
  },
  [87] = {
    [anon_sym_LBRACK] = ACTIONS(260),
    [sym_comment] = ACTIONS(9),
  },
  [88] = {
    [sym_selector] = STATE(99),
    [sym_default_selector] = STATE(99),
    [aux_sym_variant_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_DASH_GT] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_STAR] = ACTIONS(212),
    [sym_comment] = ACTIONS(9),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_DASH_GT] = ACTIONS(262),
    [sym_comment] = ACTIONS(9),
  },
  [90] = {
    [aux_sym_call_expression_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(9),
  },
  [91] = {
    [sym_value] = STATE(61),
    [sym_placeable] = STATE(101),
    [sym_variant] = STATE(101),
    [aux_sym_value_repeat1] = STATE(101),
    [anon_sym_LBRACE] = ACTIONS(267),
    [sym__text] = ACTIONS(269),
    [sym_comment] = ACTIONS(23),
  },
  [92] = {
    [sym_value] = STATE(63),
    [sym_placeable] = STATE(101),
    [sym_variant] = STATE(101),
    [aux_sym_value_repeat1] = STATE(101),
    [anon_sym_LBRACE] = ACTIONS(267),
    [sym__text] = ACTIONS(269),
    [sym_comment] = ACTIONS(23),
  },
  [93] = {
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_comment] = ACTIONS(9),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [sym__text] = ACTIONS(129),
    [sym_comment] = ACTIONS(23),
  },
  [95] = {
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(137),
    [sym__text] = ACTIONS(137),
    [sym_comment] = ACTIONS(23),
  },
  [96] = {
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym_comment] = ACTIONS(9),
  },
  [97] = {
    [anon_sym_RBRACK] = ACTIONS(275),
    [sym_comment] = ACTIONS(9),
  },
  [98] = {
    [sym_identifier] = ACTIONS(277),
    [sym_comment] = ACTIONS(9),
  },
  [99] = {
    [sym_selector] = STATE(99),
    [sym_default_selector] = STATE(99),
    [aux_sym_variant_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_DASH_GT] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_STAR] = ACTIONS(282),
    [sym_comment] = ACTIONS(9),
  },
  [100] = {
    [sym__expression] = STATE(106),
    [sym_variable_expression] = STATE(106),
    [sym_call_expression] = STATE(106),
    [sym_select_expression] = STATE(106),
    [sym_variant_expression] = STATE(106),
    [sym_attribute_expression] = STATE(106),
    [sym_selector] = STATE(107),
    [sym_default_selector] = STATE(107),
    [aux_sym_variant_repeat1] = STATE(107),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_number] = ACTIONS(285),
    [sym_identifier] = ACTIONS(41),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [101] = {
    [sym_placeable] = STATE(108),
    [sym_variant] = STATE(108),
    [aux_sym_value_repeat1] = STATE(108),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(198),
    [anon_sym_DASH_GT] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(198),
    [sym__text] = ACTIONS(287),
    [sym_comment] = ACTIONS(23),
  },
  [102] = {
    [sym_value] = STATE(82),
    [sym_placeable] = STATE(101),
    [sym_variant] = STATE(101),
    [aux_sym_value_repeat1] = STATE(101),
    [anon_sym_LBRACE] = ACTIONS(267),
    [sym__text] = ACTIONS(269),
    [sym_comment] = ACTIONS(23),
  },
  [103] = {
    [sym_value] = STATE(61),
    [sym_placeable] = STATE(110),
    [sym_variant] = STATE(110),
    [aux_sym_value_repeat1] = STATE(110),
    [anon_sym_LBRACE] = ACTIONS(289),
    [sym__text] = ACTIONS(291),
    [sym_comment] = ACTIONS(23),
  },
  [104] = {
    [sym_value] = STATE(63),
    [sym_placeable] = STATE(110),
    [sym_variant] = STATE(110),
    [aux_sym_value_repeat1] = STATE(110),
    [anon_sym_LBRACE] = ACTIONS(289),
    [sym__text] = ACTIONS(291),
    [sym_comment] = ACTIONS(23),
  },
  [105] = {
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_comment] = ACTIONS(9),
  },
  [106] = {
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_comment] = ACTIONS(9),
  },
  [107] = {
    [sym_selector] = STATE(38),
    [sym_default_selector] = STATE(38),
    [aux_sym_variant_repeat1] = STATE(38),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
  },
  [108] = {
    [sym_placeable] = STATE(108),
    [sym_variant] = STATE(108),
    [aux_sym_value_repeat1] = STATE(108),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_DASH_GT] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [sym__text] = ACTIONS(302),
    [sym_comment] = ACTIONS(23),
  },
  [109] = {
    [sym__expression] = STATE(114),
    [sym_variable_expression] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_select_expression] = STATE(114),
    [sym_variant_expression] = STATE(114),
    [sym_attribute_expression] = STATE(114),
    [sym_selector] = STATE(115),
    [sym_default_selector] = STATE(115),
    [aux_sym_variant_repeat1] = STATE(115),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_number] = ACTIONS(305),
    [sym_identifier] = ACTIONS(41),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [110] = {
    [sym_placeable] = STATE(116),
    [sym_variant] = STATE(116),
    [aux_sym_value_repeat1] = STATE(116),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_DASH_GT] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(198),
    [sym__text] = ACTIONS(307),
    [sym_comment] = ACTIONS(23),
  },
  [111] = {
    [sym_value] = STATE(82),
    [sym_placeable] = STATE(110),
    [sym_variant] = STATE(110),
    [aux_sym_value_repeat1] = STATE(110),
    [anon_sym_LBRACE] = ACTIONS(289),
    [sym__text] = ACTIONS(291),
    [sym_comment] = ACTIONS(23),
  },
  [112] = {
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [sym__text] = ACTIONS(129),
    [sym_comment] = ACTIONS(23),
  },
  [113] = {
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_DASH_GT] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(137),
    [sym__text] = ACTIONS(137),
    [sym_comment] = ACTIONS(23),
  },
  [114] = {
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_comment] = ACTIONS(9),
  },
  [115] = {
    [sym_selector] = STATE(38),
    [sym_default_selector] = STATE(38),
    [aux_sym_variant_repeat1] = STATE(38),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
  },
  [116] = {
    [sym_placeable] = STATE(116),
    [sym_variant] = STATE(116),
    [aux_sym_value_repeat1] = STATE(116),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_DASH_GT] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [sym__text] = ACTIONS(316),
    [sym_comment] = ACTIONS(23),
  },
  [117] = {
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [sym__text] = ACTIONS(129),
    [sym_comment] = ACTIONS(23),
  },
  [118] = {
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_DASH_GT] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(137),
    [sym__text] = ACTIONS(137),
    [sym_comment] = ACTIONS(23),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_translation_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_translation_file, 1),
  [19] = {.count = 1, .reusable = false}, SHIFT(9),
  [21] = {.count = 1, .reusable = false}, SHIFT(11),
  [23] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym_translation_file_repeat1, 2),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_translation_file_repeat1, 2), SHIFT_REPEAT(2),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_translation_file_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.count = 1, .reusable = true}, SHIFT(13),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(16),
  [43] = {.count = 1, .reusable = true}, SHIFT(17),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [51] = {.count = 1, .reusable = false}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, SHIFT(24),
  [55] = {.count = 1, .reusable = true}, SHIFT(26),
  [57] = {.count = 1, .reusable = true}, SHIFT(27),
  [59] = {.count = 1, .reusable = true}, SHIFT(28),
  [61] = {.count = 1, .reusable = true}, SHIFT(29),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1, .alias_sequence_id = 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(30),
  [67] = {.count = 1, .reusable = true}, SHIFT(31),
  [69] = {.count = 1, .reusable = true}, SHIFT(32),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(33),
  [75] = {.count = 1, .reusable = true}, SHIFT(34),
  [77] = {.count = 1, .reusable = true}, SHIFT(35),
  [79] = {.count = 1, .reusable = true}, SHIFT(36),
  [81] = {.count = 1, .reusable = true}, SHIFT(37),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_message, 4, .alias_sequence_id = 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(39),
  [87] = {.count = 1, .reusable = true}, SHIFT(40),
  [89] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2),
  [91] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(9),
  [94] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(23),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_term, 4),
  [99] = {.count = 1, .reusable = true}, SHIFT(42),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_variable_expression, 2, .alias_sequence_id = 2),
  [103] = {.count = 1, .reusable = true}, SHIFT(43),
  [105] = {.count = 1, .reusable = true}, SHIFT(44),
  [107] = {.count = 1, .reusable = true}, SHIFT(45),
  [109] = {.count = 1, .reusable = true}, SHIFT(46),
  [111] = {.count = 1, .reusable = true}, SHIFT(48),
  [113] = {.count = 1, .reusable = true}, SHIFT(47),
  [115] = {.count = 1, .reusable = true}, SHIFT(50),
  [117] = {.count = 1, .reusable = true}, SHIFT(51),
  [119] = {.count = 1, .reusable = true}, SHIFT(52),
  [121] = {.count = 1, .reusable = true}, SHIFT(53),
  [123] = {.count = 1, .reusable = true}, SHIFT(54),
  [125] = {.count = 1, .reusable = true}, SHIFT(55),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_placeable, 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_placeable, 3),
  [131] = {.count = 1, .reusable = true}, SHIFT(56),
  [133] = {.count = 1, .reusable = true}, SHIFT(57),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_variant, 3),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_variant, 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(14),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(15),
  [147] = {.count = 1, .reusable = true}, SHIFT(59),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_message, 5, .alias_sequence_id = 1),
  [151] = {.count = 1, .reusable = true}, REDUCE(aux_sym_message_repeat1, 2),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(21),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_term, 5),
  [158] = {.count = 1, .reusable = false}, SHIFT(60),
  [160] = {.count = 1, .reusable = false}, SHIFT(62),
  [162] = {.count = 1, .reusable = true}, SHIFT(64),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 3, .alias_sequence_id = 3),
  [166] = {.count = 1, .reusable = true}, SHIFT(65),
  [168] = {.count = 1, .reusable = true}, SHIFT(66),
  [170] = {.count = 1, .reusable = true}, SHIFT(67),
  [172] = {.count = 1, .reusable = true}, SHIFT(68),
  [174] = {.count = 1, .reusable = true}, SHIFT(70),
  [176] = {.count = 1, .reusable = true}, SHIFT(71),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_expression, 3, .alias_sequence_id = 1),
  [180] = {.count = 1, .reusable = true}, SHIFT(72),
  [182] = {.count = 1, .reusable = true}, SHIFT(73),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_expression, 3),
  [186] = {.count = 1, .reusable = true}, SHIFT(74),
  [188] = {.count = 1, .reusable = true}, SHIFT(75),
  [190] = {.count = 1, .reusable = true}, SHIFT(76),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_select_expression, 3),
  [194] = {.count = 1, .reusable = true}, SHIFT(79),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 4),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_value, 1),
  [200] = {.count = 1, .reusable = false}, SHIFT(81),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 4, .alias_sequence_id = 4),
  [204] = {.count = 1, .reusable = true}, SHIFT(83),
  [206] = {.count = 1, .reusable = true}, SHIFT(84),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 4, .alias_sequence_id = 3),
  [210] = {.count = 1, .reusable = true}, SHIFT(86),
  [212] = {.count = 1, .reusable = true}, SHIFT(87),
  [214] = {.count = 1, .reusable = true}, SHIFT(89),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_variant_expression, 4, .alias_sequence_id = 1),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_variant_expression, 4, .alias_sequence_id = 5),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_variant_expression, 4),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_variant_expression, 4, .alias_sequence_id = 6),
  [224] = {.count = 1, .reusable = true}, SHIFT(91),
  [226] = {.count = 1, .reusable = true}, SHIFT(92),
  [228] = {.count = 1, .reusable = true}, SHIFT(93),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(56),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(57),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 4, .alias_sequence_id = 7),
  [238] = {.count = 1, .reusable = true}, SHIFT(94),
  [240] = {.count = 1, .reusable = true}, SHIFT(95),
  [242] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(60),
  [245] = {.count = 1, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2),
  [247] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(81),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_default_selector, 5, .alias_sequence_id = 6),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_argument, 3, .alias_sequence_id = 8),
  [254] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [256] = {.count = 1, .reusable = true}, SHIFT(96),
  [258] = {.count = 1, .reusable = true}, SHIFT(97),
  [260] = {.count = 1, .reusable = true}, SHIFT(98),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 5, .alias_sequence_id = 3),
  [264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(66),
  [267] = {.count = 1, .reusable = false}, SHIFT(100),
  [269] = {.count = 1, .reusable = false}, SHIFT(101),
  [271] = {.count = 1, .reusable = true}, SHIFT(102),
  [273] = {.count = 1, .reusable = true}, SHIFT(103),
  [275] = {.count = 1, .reusable = true}, SHIFT(104),
  [277] = {.count = 1, .reusable = true}, SHIFT(105),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(86),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(87),
  [285] = {.count = 1, .reusable = true}, SHIFT(106),
  [287] = {.count = 1, .reusable = false}, SHIFT(108),
  [289] = {.count = 1, .reusable = false}, SHIFT(109),
  [291] = {.count = 1, .reusable = false}, SHIFT(110),
  [293] = {.count = 1, .reusable = true}, SHIFT(111),
  [295] = {.count = 1, .reusable = true}, SHIFT(112),
  [297] = {.count = 1, .reusable = true}, SHIFT(113),
  [299] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(100),
  [302] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(108),
  [305] = {.count = 1, .reusable = true}, SHIFT(114),
  [307] = {.count = 1, .reusable = false}, SHIFT(116),
  [309] = {.count = 1, .reusable = true}, SHIFT(117),
  [311] = {.count = 1, .reusable = true}, SHIFT(118),
  [313] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(109),
  [316] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(116),
};

void *tree_sitter_fluent_external_scanner_create();
void tree_sitter_fluent_external_scanner_destroy(void *);
bool tree_sitter_fluent_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fluent_external_scanner_serialize(void *, char *);
void tree_sitter_fluent_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fluent() {
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_fluent_external_scanner_create,
      tree_sitter_fluent_external_scanner_destroy,
      tree_sitter_fluent_external_scanner_scan,
      tree_sitter_fluent_external_scanner_serialize,
      tree_sitter_fluent_external_scanner_deserialize,
    },
  };
  return &language;
}
