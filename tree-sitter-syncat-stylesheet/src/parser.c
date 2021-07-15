#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_name = 1,
  anon_sym_COLON = 2,
  anon_sym_SEMI = 3,
  sym_variable = 4,
  anon_sym_import = 5,
  anon_sym_COMMA = 6,
  anon_sym_GT = 7,
  sym_direct_sibling = 8,
  sym_sibling = 9,
  sym_also = 10,
  anon_sym_BANG = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_LT = 14,
  sym_any = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  sym_capture = 18,
  anon_sym_red = 19,
  anon_sym_blue = 20,
  anon_sym_green = 21,
  anon_sym_purple = 22,
  anon_sym_yellow = 23,
  anon_sym_black = 24,
  anon_sym_white = 25,
  anon_sym_cyan = 26,
  anon_sym_brred = 27,
  anon_sym_brblue = 28,
  anon_sym_brgreen = 29,
  anon_sym_brpurple = 30,
  anon_sym_bryellow = 31,
  anon_sym_brblack = 32,
  anon_sym_brwhite = 33,
  anon_sym_brcyan = 34,
  sym_hex_color = 35,
  anon_sym_true = 36,
  anon_sym_false = 37,
  sym_number = 38,
  sym_regex = 39,
  sym_string = 40,
  sym_comment = 41,
  sym_stylesheet = 42,
  sym__item = 43,
  sym_declaration = 44,
  sym_import = 45,
  sym_rule = 46,
  sym_selectors = 47,
  sym__selectors = 48,
  sym_selector = 49,
  sym_node_modifier = 50,
  sym_direct = 51,
  sym_node = 52,
  sym__positive_node = 53,
  sym_not = 54,
  sym_group = 55,
  sym_group_name = 56,
  sym_kind = 57,
  sym_token = 58,
  sym_styles = 59,
  sym_style = 60,
  sym_style_modifier = 61,
  sym_important = 62,
  sym_value = 63,
  sym_color = 64,
  sym_named_color = 65,
  sym_boolean = 66,
  aux_sym_stylesheet_repeat1 = 67,
  aux_sym_selector_repeat1 = 68,
  aux_sym_styles_repeat1 = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_variable] = "variable",
  [anon_sym_import] = "import",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [sym_direct_sibling] = "direct_sibling",
  [sym_sibling] = "sibling",
  [sym_also] = "also",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LT] = "<",
  [sym_any] = "any",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_capture] = "capture",
  [anon_sym_red] = "red",
  [anon_sym_blue] = "blue",
  [anon_sym_green] = "green",
  [anon_sym_purple] = "purple",
  [anon_sym_yellow] = "yellow",
  [anon_sym_black] = "black",
  [anon_sym_white] = "white",
  [anon_sym_cyan] = "cyan",
  [anon_sym_brred] = "brred",
  [anon_sym_brblue] = "brblue",
  [anon_sym_brgreen] = "brgreen",
  [anon_sym_brpurple] = "brpurple",
  [anon_sym_bryellow] = "bryellow",
  [anon_sym_brblack] = "brblack",
  [anon_sym_brwhite] = "brwhite",
  [anon_sym_brcyan] = "brcyan",
  [sym_hex_color] = "hex_color",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [sym_regex] = "regex",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_stylesheet] = "stylesheet",
  [sym__item] = "_item",
  [sym_declaration] = "declaration",
  [sym_import] = "import",
  [sym_rule] = "rule",
  [sym_selectors] = "selectors",
  [sym__selectors] = "_selectors",
  [sym_selector] = "selector",
  [sym_node_modifier] = "node_modifier",
  [sym_direct] = "direct",
  [sym_node] = "node",
  [sym__positive_node] = "_positive_node",
  [sym_not] = "not",
  [sym_group] = "group",
  [sym_group_name] = "group_name",
  [sym_kind] = "kind",
  [sym_token] = "token",
  [sym_styles] = "styles",
  [sym_style] = "style",
  [sym_style_modifier] = "style_modifier",
  [sym_important] = "important",
  [sym_value] = "value",
  [sym_color] = "color",
  [sym_named_color] = "named_color",
  [sym_boolean] = "boolean",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_selector_repeat1] = "selector_repeat1",
  [aux_sym_styles_repeat1] = "styles_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_variable] = sym_variable,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [sym_direct_sibling] = sym_direct_sibling,
  [sym_sibling] = sym_sibling,
  [sym_also] = sym_also,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [sym_any] = sym_any,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_capture] = sym_capture,
  [anon_sym_red] = anon_sym_red,
  [anon_sym_blue] = anon_sym_blue,
  [anon_sym_green] = anon_sym_green,
  [anon_sym_purple] = anon_sym_purple,
  [anon_sym_yellow] = anon_sym_yellow,
  [anon_sym_black] = anon_sym_black,
  [anon_sym_white] = anon_sym_white,
  [anon_sym_cyan] = anon_sym_cyan,
  [anon_sym_brred] = anon_sym_brred,
  [anon_sym_brblue] = anon_sym_brblue,
  [anon_sym_brgreen] = anon_sym_brgreen,
  [anon_sym_brpurple] = anon_sym_brpurple,
  [anon_sym_bryellow] = anon_sym_bryellow,
  [anon_sym_brblack] = anon_sym_brblack,
  [anon_sym_brwhite] = anon_sym_brwhite,
  [anon_sym_brcyan] = anon_sym_brcyan,
  [sym_hex_color] = sym_hex_color,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [sym_regex] = sym_regex,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_stylesheet] = sym_stylesheet,
  [sym__item] = sym__item,
  [sym_declaration] = sym_declaration,
  [sym_import] = sym_import,
  [sym_rule] = sym_rule,
  [sym_selectors] = sym_selectors,
  [sym__selectors] = sym__selectors,
  [sym_selector] = sym_selector,
  [sym_node_modifier] = sym_node_modifier,
  [sym_direct] = sym_direct,
  [sym_node] = sym_node,
  [sym__positive_node] = sym__positive_node,
  [sym_not] = sym_not,
  [sym_group] = sym_group,
  [sym_group_name] = sym_group_name,
  [sym_kind] = sym_kind,
  [sym_token] = sym_token,
  [sym_styles] = sym_styles,
  [sym_style] = sym_style,
  [sym_style_modifier] = sym_style_modifier,
  [sym_important] = sym_important,
  [sym_value] = sym_value,
  [sym_color] = sym_color,
  [sym_named_color] = sym_named_color,
  [sym_boolean] = sym_boolean,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_selector_repeat1] = aux_sym_selector_repeat1,
  [aux_sym_styles_repeat1] = aux_sym_styles_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_direct_sibling] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling] = {
    .visible = true,
    .named = true,
  },
  [sym_also] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_any] = {
    .visible = true,
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
  [sym_capture] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_purple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_black] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_white] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cyan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brred] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brblue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brgreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brpurple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bryellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brblack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brwhite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brcyan] = {
    .visible = true,
    .named = false,
  },
  [sym_hex_color] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym__selectors] = {
    .visible = false,
    .named = true,
  },
  [sym_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_node_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_direct] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym__positive_node] = {
    .visible = false,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_group_name] = {
    .visible = true,
    .named = true,
  },
  [sym_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_styles] = {
    .visible = true,
    .named = true,
  },
  [sym_style] = {
    .visible = true,
    .named = true,
  },
  [sym_style_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_named_color] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_styles_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '~') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_direct_sibling);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_sibling);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_also);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_any);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_capture);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_hex_color);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == 'U' ||
          lookahead == 'i' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'u' ||
          lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'g') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(9);
      if (lookahead == 'y') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'g') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_brred);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 71:
      if (lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_brblue);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_brcyan);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_purple);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_brblack);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_brgreen);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_brwhite);
      END_STATE();
    case 86:
      if (lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_brpurple);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_bryellow);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_direct_sibling] = ACTIONS(1),
    [sym_sibling] = ACTIONS(1),
    [sym_also] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_any] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_capture] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
    [anon_sym_brred] = ACTIONS(1),
    [anon_sym_brblue] = ACTIONS(1),
    [anon_sym_brgreen] = ACTIONS(1),
    [anon_sym_brpurple] = ACTIONS(1),
    [anon_sym_bryellow] = ACTIONS(1),
    [anon_sym_brblack] = ACTIONS(1),
    [anon_sym_brwhite] = ACTIONS(1),
    [anon_sym_brcyan] = ACTIONS(1),
    [sym_hex_color] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_stylesheet] = STATE(40),
    [sym__item] = STATE(5),
    [sym_declaration] = STATE(5),
    [sym_import] = STATE(5),
    [sym_rule] = STATE(5),
    [sym_selectors] = STATE(32),
    [sym__selectors] = STATE(49),
    [sym_selector] = STATE(38),
    [sym_node] = STATE(10),
    [sym__positive_node] = STATE(17),
    [sym_not] = STATE(17),
    [sym_group] = STATE(17),
    [sym_kind] = STATE(17),
    [sym_token] = STATE(17),
    [aux_sym_stylesheet_repeat1] = STATE(5),
    [aux_sym_selector_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym_variable] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_any] = ACTIONS(17),
    [sym_regex] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_hex_color,
    STATE(28), 1,
      sym_value,
    STATE(35), 1,
      sym_named_color,
    ACTIONS(23), 2,
      sym_variable,
      sym_string,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 2,
      sym_color,
      sym_boolean,
    ACTIONS(21), 3,
      sym_capture,
      sym_number,
      sym_name,
    ACTIONS(25), 16,
      anon_sym_red,
      anon_sym_blue,
      anon_sym_green,
      anon_sym_purple,
      anon_sym_yellow,
      anon_sym_black,
      anon_sym_white,
      anon_sym_cyan,
      anon_sym_brred,
      anon_sym_brblue,
      anon_sym_brgreen,
      anon_sym_brpurple,
      anon_sym_bryellow,
      anon_sym_brblack,
      anon_sym_brwhite,
      anon_sym_brcyan,
  [48] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_hex_color,
    STATE(35), 1,
      sym_named_color,
    STATE(48), 1,
      sym_value,
    ACTIONS(23), 2,
      sym_variable,
      sym_string,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 2,
      sym_color,
      sym_boolean,
    ACTIONS(21), 3,
      sym_capture,
      sym_number,
      sym_name,
    ACTIONS(25), 16,
      anon_sym_red,
      anon_sym_blue,
      anon_sym_green,
      anon_sym_purple,
      anon_sym_yellow,
      anon_sym_black,
      anon_sym_white,
      anon_sym_cyan,
      anon_sym_brred,
      anon_sym_brblue,
      anon_sym_brgreen,
      anon_sym_brpurple,
      anon_sym_bryellow,
      anon_sym_brblack,
      anon_sym_brwhite,
      anon_sym_brcyan,
  [96] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_name,
    ACTIONS(36), 1,
      sym_variable,
    ACTIONS(39), 1,
      anon_sym_import,
    ACTIONS(42), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      sym_any,
    STATE(9), 1,
      aux_sym_selector_repeat1,
    STATE(10), 1,
      sym_node,
    STATE(32), 1,
      sym_selectors,
    STATE(38), 1,
      sym_selector,
    STATE(49), 1,
      sym__selectors,
    ACTIONS(51), 2,
      sym_regex,
      sym_string,
    STATE(4), 5,
      sym__item,
      sym_declaration,
      sym_import,
      sym_rule,
      aux_sym_stylesheet_repeat1,
    STATE(17), 5,
      sym__positive_node,
      sym_not,
      sym_group,
      sym_kind,
      sym_token,
  [154] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      sym_variable,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_any,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_selector_repeat1,
    STATE(10), 1,
      sym_node,
    STATE(32), 1,
      sym_selectors,
    STATE(38), 1,
      sym_selector,
    STATE(49), 1,
      sym__selectors,
    ACTIONS(19), 2,
      sym_regex,
      sym_string,
    STATE(4), 5,
      sym__item,
      sym_declaration,
      sym_import,
      sym_rule,
      aux_sym_stylesheet_repeat1,
    STATE(17), 5,
      sym__positive_node,
      sym_not,
      sym_group,
      sym_kind,
      sym_token,
  [212] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_any,
    ACTIONS(56), 1,
      sym_name,
    ACTIONS(58), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_selector_repeat1,
    STATE(10), 1,
      sym_node,
    STATE(11), 1,
      sym_group_name,
    STATE(54), 1,
      sym_selector,
    ACTIONS(19), 2,
      sym_regex,
      sym_string,
    STATE(17), 5,
      sym__positive_node,
      sym_not,
      sym_group,
      sym_kind,
      sym_token,
  [254] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_name,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_any,
    STATE(7), 1,
      aux_sym_selector_repeat1,
    STATE(10), 1,
      sym_node,
    ACTIONS(74), 2,
      sym_regex,
      sym_string,
    ACTIONS(63), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
    STATE(17), 5,
      sym__positive_node,
      sym_not,
      sym_group,
      sym_kind,
      sym_token,
  [292] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_any,
    ACTIONS(56), 1,
      sym_name,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym_selector_repeat1,
    STATE(10), 1,
      sym_node,
    STATE(38), 1,
      sym_selector,
    STATE(42), 1,
      sym__selectors,
    ACTIONS(19), 2,
      sym_regex,
      sym_string,
    STATE(17), 5,
      sym__positive_node,
      sym_not,
      sym_group,
      sym_kind,
      sym_token,
  [334] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_any,
    ACTIONS(56), 1,
      sym_name,
    STATE(7), 1,
      aux_sym_selector_repeat1,
    STATE(10), 1,
      sym_node,
    ACTIONS(19), 2,
      sym_regex,
      sym_string,
    ACTIONS(79), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
    STATE(17), 5,
      sym__positive_node,
      sym_not,
      sym_group,
      sym_kind,
      sym_token,
  [372] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_GT,
    STATE(18), 1,
      sym_direct,
    STATE(26), 1,
      sym_node_modifier,
    ACTIONS(85), 3,
      sym_direct_sibling,
      sym_sibling,
      sym_also,
    ACTIONS(81), 9,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_any,
      anon_sym_LBRACE,
      sym_regex,
      sym_string,
      sym_name,
  [401] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_any,
    ACTIONS(56), 1,
      sym_name,
    STATE(9), 1,
      aux_sym_selector_repeat1,
    STATE(10), 1,
      sym_node,
    STATE(41), 1,
      sym_selector,
    ACTIONS(19), 2,
      sym_regex,
      sym_string,
    STATE(17), 5,
      sym__positive_node,
      sym_not,
      sym_group,
      sym_kind,
      sym_token,
  [437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_direct_sibling,
      sym_sibling,
      sym_also,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_any,
      anon_sym_LBRACE,
      sym_regex,
      sym_string,
      sym_name,
  [456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_direct_sibling,
      sym_sibling,
      sym_also,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_any,
      anon_sym_LBRACE,
      sym_regex,
      sym_string,
      sym_name,
  [475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_direct_sibling,
      sym_sibling,
      sym_also,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_any,
      anon_sym_LBRACE,
      sym_regex,
      sym_string,
      sym_name,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_direct_sibling,
      sym_sibling,
      sym_also,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_any,
      anon_sym_LBRACE,
      sym_regex,
      sym_string,
      sym_name,
  [513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_direct_sibling,
      sym_sibling,
      sym_also,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_any,
      anon_sym_LBRACE,
      sym_regex,
      sym_string,
      sym_name,
  [532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_direct_sibling,
      sym_sibling,
      sym_also,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_any,
      anon_sym_LBRACE,
      sym_regex,
      sym_string,
      sym_name,
  [551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 9,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_any,
      anon_sym_LBRACE,
      sym_regex,
      sym_string,
      sym_name,
  [566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_import,
      sym_name,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_any,
      sym_regex,
      sym_string,
  [583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_import,
      sym_name,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_any,
      sym_regex,
      sym_string,
  [600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_import,
      sym_name,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_any,
      sym_regex,
      sym_string,
  [617] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      sym_name,
    ACTIONS(113), 1,
      sym_any,
    ACTIONS(19), 2,
      sym_regex,
      sym_string,
    STATE(12), 4,
      sym__positive_node,
      sym_group,
      sym_kind,
      sym_token,
  [640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_import,
      sym_name,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_any,
      sym_regex,
      sym_string,
  [657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 9,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_any,
      anon_sym_LBRACE,
      sym_regex,
      sym_string,
      sym_name,
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_import,
      sym_name,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_any,
      sym_regex,
      sym_string,
  [689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 9,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_any,
      anon_sym_LBRACE,
      sym_regex,
      sym_string,
      sym_name,
  [704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 6,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_any,
      sym_regex,
      sym_string,
      sym_name,
  [716] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SEMI,
    ACTIONS(129), 1,
      anon_sym_BANG,
    STATE(52), 1,
      sym_style_modifier,
    STATE(53), 1,
      sym_important,
  [732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_name,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym_style,
      aux_sym_styles_repeat1,
  [746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_name,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_style,
      aux_sym_styles_repeat1,
  [760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_name,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym_style,
      aux_sym_styles_repeat1,
  [774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_styles,
  [784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 2,
      anon_sym_SEMI,
      anon_sym_BANG,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_SEMI,
      anon_sym_BANG,
  [800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_SEMI,
      anon_sym_BANG,
  [808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 2,
      anon_sym_SEMI,
      anon_sym_BANG,
  [816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 2,
      anon_sym_RBRACE,
      sym_name,
  [824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
  [834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_RBRACE,
      sym_name,
  [842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
  [849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
  [856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
  [863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_SEMI,
  [870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COLON,
  [877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_name,
  [884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_string,
  [891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_GT,
  [898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
  [912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_COLON,
  [919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SEMI,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_SEMI,
  [933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_SEMI,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 212,
  [SMALL_STATE(7)] = 254,
  [SMALL_STATE(8)] = 292,
  [SMALL_STATE(9)] = 334,
  [SMALL_STATE(10)] = 372,
  [SMALL_STATE(11)] = 401,
  [SMALL_STATE(12)] = 437,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 475,
  [SMALL_STATE(15)] = 494,
  [SMALL_STATE(16)] = 513,
  [SMALL_STATE(17)] = 532,
  [SMALL_STATE(18)] = 551,
  [SMALL_STATE(19)] = 566,
  [SMALL_STATE(20)] = 583,
  [SMALL_STATE(21)] = 600,
  [SMALL_STATE(22)] = 617,
  [SMALL_STATE(23)] = 640,
  [SMALL_STATE(24)] = 657,
  [SMALL_STATE(25)] = 672,
  [SMALL_STATE(26)] = 689,
  [SMALL_STATE(27)] = 704,
  [SMALL_STATE(28)] = 716,
  [SMALL_STATE(29)] = 732,
  [SMALL_STATE(30)] = 746,
  [SMALL_STATE(31)] = 760,
  [SMALL_STATE(32)] = 774,
  [SMALL_STATE(33)] = 784,
  [SMALL_STATE(34)] = 792,
  [SMALL_STATE(35)] = 800,
  [SMALL_STATE(36)] = 808,
  [SMALL_STATE(37)] = 816,
  [SMALL_STATE(38)] = 824,
  [SMALL_STATE(39)] = 834,
  [SMALL_STATE(40)] = 842,
  [SMALL_STATE(41)] = 849,
  [SMALL_STATE(42)] = 856,
  [SMALL_STATE(43)] = 863,
  [SMALL_STATE(44)] = 870,
  [SMALL_STATE(45)] = 877,
  [SMALL_STATE(46)] = 884,
  [SMALL_STATE(47)] = 891,
  [SMALL_STATE(48)] = 898,
  [SMALL_STATE(49)] = 905,
  [SMALL_STATE(50)] = 912,
  [SMALL_STATE(51)] = 919,
  [SMALL_STATE(52)] = 926,
  [SMALL_STATE(53)] = 933,
  [SMALL_STATE(54)] = 940,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(16),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(50),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(46),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(22),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(17),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(22),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(6),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(17),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(15),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selectors, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kind, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_modifier, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direct, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_name, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_repeat1, 2), SHIFT_REPEAT(44),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_color, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selectors, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style, 4),
  [160] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selectors, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_modifier, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_syncat_stylesheet(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_name,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
