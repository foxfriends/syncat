#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 57
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

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

static const char *ts_symbol_names[] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(17);
      if (lookahead == '}')
        ADVANCE(18);
      if (lookahead == '~')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3:
      if (lookahead == '\\')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(23);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_also);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_any);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_direct_sibling);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_sibling);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '"')
        ADVANCE(30);
      if (lookahead == '\\')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(23);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_capture);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == 'U' ||
          lookahead == 'i' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'u' ||
          lookahead == 'x')
        ADVANCE(32);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(34);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(35);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_hex_color);
      END_STATE();
    case 37:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '>')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(17);
      if (lookahead == '~')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      END_STATE();
    case 46:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 47:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'b')
        ADVANCE(1);
      if (lookahead == 'c')
        ADVANCE(2);
      if (lookahead == 'f')
        ADVANCE(3);
      if (lookahead == 'g')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(5);
      if (lookahead == 'p')
        ADVANCE(6);
      if (lookahead == 'r')
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(8);
      if (lookahead == 'w')
        ADVANCE(9);
      if (lookahead == 'y')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'y')
        ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'a')
        ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'r')
        ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'm')
        ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'u')
        ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'e')
        ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'r')
        ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'h')
        ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'e')
        ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'a')
        ADVANCE(22);
      if (lookahead == 'u')
        ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'b')
        ADVANCE(24);
      if (lookahead == 'c')
        ADVANCE(25);
      if (lookahead == 'g')
        ADVANCE(26);
      if (lookahead == 'p')
        ADVANCE(27);
      if (lookahead == 'r')
        ADVANCE(28);
      if (lookahead == 'w')
        ADVANCE(29);
      if (lookahead == 'y')
        ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'a')
        ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'l')
        ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'e')
        ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'p')
        ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'r')
        ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'd')
        ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'u')
        ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'i')
        ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'l')
        ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'c')
        ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'e')
        ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'l')
        ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'y')
        ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'r')
        ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'u')
        ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'e')
        ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'h')
        ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'n')
        ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 's')
        ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'o')
        ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'p')
        ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 37:
      if (lookahead == 'e')
        ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 't')
        ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'l')
        ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'k')
        ADVANCE(57);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 42:
      if (lookahead == 'a')
        ADVANCE(58);
      if (lookahead == 'u')
        ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'a')
        ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'r')
        ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'd')
        ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'i')
        ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'l')
        ADVANCE(65);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 50:
      if (lookahead == 'e')
        ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'n')
        ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'r')
        ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'l')
        ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 55:
      if (lookahead == 'e')
        ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'o')
        ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 58:
      if (lookahead == 'c')
        ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'e')
        ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == 'n')
        ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'e')
        ADVANCE(75);
      END_STATE();
    case 62:
      if (lookahead == 'p')
        ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_brred);
      END_STATE();
    case 64:
      if (lookahead == 't')
        ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'l')
        ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 68:
      if (lookahead == 't')
        ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'e')
        ADVANCE(80);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 71:
      if (lookahead == 'w')
        ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == 'k')
        ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_brblue);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_brcyan);
      END_STATE();
    case 75:
      if (lookahead == 'n')
        ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'l')
        ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 'e')
        ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'o')
        ADVANCE(86);
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
      if (lookahead == 'e')
        ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_brwhite);
      END_STATE();
    case 86:
      if (lookahead == 'w')
        ADVANCE(88);
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

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 44},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 44},
  [14] = {.lex_state = 44},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 40},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 46},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 44},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 44},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 46},
  [34] = {.lex_state = 46},
  [35] = {.lex_state = 40},
  [36] = {.lex_state = 45},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 45},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 44},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 42},
  [44] = {.lex_state = 48},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 47},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 45},
  [52] = {.lex_state = 45},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 45},
  [55] = {.lex_state = 45},
  [56] = {.lex_state = 48},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_purple] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_brcyan] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_also] = ACTIONS(1),
    [sym_any] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_sibling] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_brred] = ACTIONS(1),
    [anon_sym_brblack] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [sym_capture] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [sym_hex_color] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_brblue] = ACTIONS(1),
    [anon_sym_brwhite] = ACTIONS(1),
    [anon_sym_brpurple] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_direct_sibling] = ACTIONS(1),
    [anon_sym_brgreen] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
    [anon_sym_bryellow] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
  },
  [1] = {
    [sym_import] = STATE(10),
    [sym_rule] = STATE(10),
    [sym_node] = STATE(8),
    [sym_kind] = STATE(15),
    [sym_token] = STATE(15),
    [sym__item] = STATE(10),
    [sym_declaration] = STATE(10),
    [sym_selector] = STATE(9),
    [sym_group] = STATE(15),
    [aux_sym_stylesheet_repeat1] = STATE(10),
    [aux_sym_selector_repeat1] = STATE(11),
    [sym_stylesheet] = STATE(12),
    [sym_selectors] = STATE(13),
    [sym__selectors] = STATE(14),
    [sym__positive_node] = STATE(15),
    [sym_not] = STATE(15),
    [anon_sym_BANG] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [sym_regex] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_string] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
    [sym_name] = ACTIONS(19),
  },
  [2] = {
    [sym__positive_node] = STATE(16),
    [sym_kind] = STATE(16),
    [sym_token] = STATE(16),
    [sym_group] = STATE(16),
    [sym_name] = ACTIONS(21),
    [sym_string] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_regex] = ACTIONS(11),
    [sym_any] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
  [3] = {
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(25),
  },
  [4] = {
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_name] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_regex] = ACTIONS(27),
    [sym_direct_sibling] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_also] = ACTIONS(27),
    [sym_any] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_sibling] = ACTIONS(27),
  },
  [5] = {
    [sym_group_name] = STATE(19),
    [sym_node] = STATE(8),
    [aux_sym_selector_repeat1] = STATE(20),
    [sym_kind] = STATE(15),
    [sym_token] = STATE(15),
    [sym__positive_node] = STATE(15),
    [sym_not] = STATE(15),
    [sym_selector] = STATE(21),
    [sym_group] = STATE(15),
    [anon_sym_BANG] = ACTIONS(5),
    [sym_regex] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(29),
    [sym_string] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(15),
    [sym_name] = ACTIONS(21),
  },
  [6] = {
    [anon_sym_COLON] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_name] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_regex] = ACTIONS(33),
    [sym_direct_sibling] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [sym_also] = ACTIONS(33),
    [sym_any] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [sym_sibling] = ACTIONS(33),
  },
  [8] = {
    [sym_node_modifier] = STATE(25),
    [sym_direct] = STATE(23),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_sibling] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(35),
    [sym_regex] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(39),
    [sym_string] = ACTIONS(35),
    [sym_direct_sibling] = ACTIONS(37),
    [sym_also] = ACTIONS(37),
    [sym_any] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(35),
  },
  [9] = {
    [anon_sym_COMMA] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [10] = {
    [sym_import] = STATE(27),
    [sym_rule] = STATE(27),
    [sym_node] = STATE(8),
    [sym_kind] = STATE(15),
    [sym_token] = STATE(15),
    [sym__item] = STATE(27),
    [sym_declaration] = STATE(27),
    [sym_selector] = STATE(9),
    [sym_group] = STATE(15),
    [aux_sym_stylesheet_repeat1] = STATE(27),
    [aux_sym_selector_repeat1] = STATE(11),
    [sym_selectors] = STATE(13),
    [sym__selectors] = STATE(14),
    [sym__positive_node] = STATE(15),
    [sym_not] = STATE(15),
    [anon_sym_BANG] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_import] = ACTIONS(9),
    [sym_regex] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_string] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
    [sym_name] = ACTIONS(19),
  },
  [11] = {
    [sym_group] = STATE(15),
    [sym__positive_node] = STATE(15),
    [sym_not] = STATE(15),
    [aux_sym_selector_repeat1] = STATE(28),
    [sym_node] = STATE(8),
    [sym_kind] = STATE(15),
    [sym_token] = STATE(15),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_regex] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_string] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(15),
    [sym_name] = ACTIONS(21),
  },
  [12] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(49),
  },
  [13] = {
    [sym_styles] = STATE(30),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(51),
  },
  [14] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(53),
  },
  [15] = {
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_name] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym_regex] = ACTIONS(55),
    [sym_direct_sibling] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
    [sym_also] = ACTIONS(55),
    [sym_any] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [sym_sibling] = ACTIONS(55),
  },
  [16] = {
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_name] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_regex] = ACTIONS(57),
    [sym_direct_sibling] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
    [sym_also] = ACTIONS(57),
    [sym_any] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [sym_sibling] = ACTIONS(57),
  },
  [17] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(59),
  },
  [18] = {
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(61),
  },
  [19] = {
    [sym_node] = STATE(8),
    [aux_sym_selector_repeat1] = STATE(20),
    [sym_kind] = STATE(15),
    [sym_token] = STATE(15),
    [sym__positive_node] = STATE(15),
    [sym_not] = STATE(15),
    [sym_selector] = STATE(33),
    [sym_group] = STATE(15),
    [sym_name] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(5),
    [sym_string] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_regex] = ACTIONS(11),
    [sym_any] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
  [20] = {
    [sym_group] = STATE(15),
    [sym__positive_node] = STATE(15),
    [sym_not] = STATE(15),
    [aux_sym_selector_repeat1] = STATE(34),
    [sym_node] = STATE(8),
    [sym_kind] = STATE(15),
    [sym_token] = STATE(15),
    [anon_sym_BANG] = ACTIONS(5),
    [sym_regex] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_string] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(15),
    [sym_name] = ACTIONS(21),
  },
  [21] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(63),
  },
  [22] = {
    [sym_color] = STATE(38),
    [sym_named_color] = STATE(39),
    [sym_boolean] = STATE(38),
    [sym_value] = STATE(40),
    [anon_sym_purple] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_brcyan] = ACTIONS(65),
    [anon_sym_brblue] = ACTIONS(65),
    [anon_sym_brwhite] = ACTIONS(65),
    [anon_sym_brpurple] = ACTIONS(65),
    [anon_sym_red] = ACTIONS(65),
    [anon_sym_black] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_variable] = ACTIONS(69),
    [sym_name] = ACTIONS(71),
    [sym_number] = ACTIONS(71),
    [anon_sym_brred] = ACTIONS(65),
    [anon_sym_brblack] = ACTIONS(65),
    [anon_sym_green] = ACTIONS(65),
    [sym_capture] = ACTIONS(71),
    [anon_sym_yellow] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [sym_hex_color] = ACTIONS(73),
    [sym_string] = ACTIONS(69),
    [anon_sym_brgreen] = ACTIONS(65),
    [anon_sym_cyan] = ACTIONS(65),
    [anon_sym_bryellow] = ACTIONS(65),
    [anon_sym_blue] = ACTIONS(65),
    [anon_sym_white] = ACTIONS(65),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_regex] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(75),
    [sym_name] = ACTIONS(75),
  },
  [24] = {
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_regex] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(77),
    [sym_name] = ACTIONS(77),
  },
  [25] = {
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_regex] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(79),
    [sym_name] = ACTIONS(79),
  },
  [26] = {
    [aux_sym_selector_repeat1] = STATE(11),
    [sym_kind] = STATE(15),
    [sym_token] = STATE(15),
    [sym_node] = STATE(8),
    [sym__selectors] = STATE(41),
    [sym__positive_node] = STATE(15),
    [sym_not] = STATE(15),
    [sym_selector] = STATE(9),
    [sym_group] = STATE(15),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_regex] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_string] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(15),
    [sym_name] = ACTIONS(21),
  },
  [27] = {
    [sym_import] = STATE(27),
    [sym_rule] = STATE(27),
    [sym_node] = STATE(8),
    [sym_kind] = STATE(15),
    [sym_token] = STATE(15),
    [sym__item] = STATE(27),
    [sym_declaration] = STATE(27),
    [sym_selector] = STATE(9),
    [sym_group] = STATE(15),
    [aux_sym_stylesheet_repeat1] = STATE(27),
    [aux_sym_selector_repeat1] = STATE(11),
    [sym_selectors] = STATE(13),
    [sym__selectors] = STATE(14),
    [sym__positive_node] = STATE(15),
    [sym_not] = STATE(15),
    [anon_sym_BANG] = ACTIONS(83),
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_import] = ACTIONS(88),
    [sym_regex] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(94),
    [sym_string] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(97),
    [sym_variable] = ACTIONS(100),
    [sym_name] = ACTIONS(103),
  },
  [28] = {
    [sym_group] = STATE(15),
    [sym__positive_node] = STATE(15),
    [sym_not] = STATE(15),
    [aux_sym_selector_repeat1] = STATE(28),
    [sym_node] = STATE(8),
    [sym_kind] = STATE(15),
    [sym_token] = STATE(15),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_regex] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_string] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(115),
    [sym_name] = ACTIONS(118),
  },
  [29] = {
    [sym_style] = STATE(44),
    [aux_sym_styles_repeat1] = STATE(44),
    [sym_name] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(123),
  },
  [30] = {
    [anon_sym_BANG] = ACTIONS(125),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_import] = ACTIONS(127),
    [sym_regex] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [sym_string] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(125),
    [sym_variable] = ACTIONS(125),
    [sym_name] = ACTIONS(127),
  },
  [31] = {
    [anon_sym_BANG] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_import] = ACTIONS(131),
    [sym_regex] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(129),
    [sym_string] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(129),
    [sym_variable] = ACTIONS(129),
    [sym_name] = ACTIONS(131),
  },
  [32] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(133),
  },
  [33] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(135),
  },
  [34] = {
    [sym_group] = STATE(15),
    [sym__positive_node] = STATE(15),
    [sym_not] = STATE(15),
    [aux_sym_selector_repeat1] = STATE(34),
    [sym_node] = STATE(8),
    [sym_kind] = STATE(15),
    [sym_token] = STATE(15),
    [anon_sym_BANG] = ACTIONS(106),
    [sym_regex] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_string] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(115),
    [sym_name] = ACTIONS(118),
  },
  [35] = {
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_name] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(137),
    [sym_regex] = ACTIONS(137),
    [sym_direct_sibling] = ACTIONS(137),
    [sym_string] = ACTIONS(137),
    [sym_also] = ACTIONS(137),
    [sym_any] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_sibling] = ACTIONS(137),
  },
  [36] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(139),
  },
  [37] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
  },
  [38] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_BANG] = ACTIONS(143),
  },
  [39] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
  },
  [40] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(147),
  },
  [41] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(149),
  },
  [42] = {
    [anon_sym_BANG] = ACTIONS(151),
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_import] = ACTIONS(153),
    [sym_regex] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(151),
    [sym_string] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(151),
    [sym_variable] = ACTIONS(151),
    [sym_name] = ACTIONS(153),
  },
  [43] = {
    [anon_sym_COLON] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym_style] = STATE(50),
    [aux_sym_styles_repeat1] = STATE(50),
    [sym_name] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(157),
  },
  [45] = {
    [sym_name] = ACTIONS(159),
    [anon_sym_BANG] = ACTIONS(159),
    [sym_string] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(159),
    [sym_regex] = ACTIONS(159),
  },
  [46] = {
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(161),
    [sym_name] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_regex] = ACTIONS(161),
    [sym_direct_sibling] = ACTIONS(161),
    [sym_string] = ACTIONS(161),
    [sym_also] = ACTIONS(161),
    [sym_any] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [sym_sibling] = ACTIONS(161),
  },
  [47] = {
    [anon_sym_BANG] = ACTIONS(163),
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_import] = ACTIONS(165),
    [sym_regex] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(163),
    [sym_string] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(163),
    [sym_variable] = ACTIONS(163),
    [sym_name] = ACTIONS(165),
  },
  [48] = {
    [sym_color] = STATE(38),
    [sym_named_color] = STATE(39),
    [sym_boolean] = STATE(38),
    [sym_value] = STATE(51),
    [anon_sym_purple] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_brcyan] = ACTIONS(65),
    [anon_sym_brblue] = ACTIONS(65),
    [anon_sym_brwhite] = ACTIONS(65),
    [anon_sym_brpurple] = ACTIONS(65),
    [anon_sym_red] = ACTIONS(65),
    [anon_sym_black] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_variable] = ACTIONS(69),
    [sym_name] = ACTIONS(71),
    [sym_number] = ACTIONS(71),
    [anon_sym_brred] = ACTIONS(65),
    [anon_sym_brblack] = ACTIONS(65),
    [anon_sym_green] = ACTIONS(65),
    [sym_capture] = ACTIONS(71),
    [anon_sym_yellow] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [sym_hex_color] = ACTIONS(73),
    [sym_string] = ACTIONS(69),
    [anon_sym_brgreen] = ACTIONS(65),
    [anon_sym_cyan] = ACTIONS(65),
    [anon_sym_bryellow] = ACTIONS(65),
    [anon_sym_blue] = ACTIONS(65),
    [anon_sym_white] = ACTIONS(65),
  },
  [49] = {
    [anon_sym_BANG] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_import] = ACTIONS(169),
    [sym_regex] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [sym_string] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(167),
    [sym_variable] = ACTIONS(167),
    [sym_name] = ACTIONS(169),
  },
  [50] = {
    [sym_style] = STATE(50),
    [aux_sym_styles_repeat1] = STATE(50),
    [sym_name] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(174),
  },
  [51] = {
    [sym_style_modifier] = STATE(54),
    [sym_important] = STATE(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(178),
  },
  [52] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(180),
  },
  [53] = {
    [sym_name] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(182),
  },
  [54] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(184),
  },
  [55] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(186),
  },
  [56] = {
    [sym_name] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(188),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(15),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(7),
  [23] = {.count = 1, .reusable = true}, SHIFT(16),
  [25] = {.count = 1, .reusable = true}, SHIFT(17),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(18),
  [31] = {.count = 1, .reusable = true}, SHIFT(22),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_kind, 1),
  [35] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(23),
  [39] = {.count = 1, .reusable = true}, SHIFT(24),
  [41] = {.count = 1, .reusable = true}, SHIFT(26),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [49] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [51] = {.count = 1, .reusable = true}, SHIFT(29),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_node, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_not, 2),
  [59] = {.count = 1, .reusable = true}, SHIFT(31),
  [61] = {.count = 1, .reusable = true}, SHIFT(32),
  [63] = {.count = 1, .reusable = true}, SHIFT(35),
  [65] = {.count = 1, .reusable = false}, SHIFT(36),
  [67] = {.count = 1, .reusable = false}, SHIFT(37),
  [69] = {.count = 1, .reusable = true}, SHIFT(38),
  [71] = {.count = 1, .reusable = false}, SHIFT(38),
  [73] = {.count = 1, .reusable = true}, SHIFT(39),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_node_modifier, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_direct, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 2),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [86] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(15),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(2),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(4),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(5),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(15),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(7),
  [121] = {.count = 1, .reusable = true}, SHIFT(43),
  [123] = {.count = 1, .reusable = true}, SHIFT(42),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_import, 3),
  [133] = {.count = 1, .reusable = true}, SHIFT(45),
  [135] = {.count = 1, .reusable = true}, SHIFT(46),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_named_color, 1),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_color, 1),
  [147] = {.count = 1, .reusable = true}, SHIFT(47),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 3),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_styles, 2),
  [155] = {.count = 1, .reusable = true}, SHIFT(48),
  [157] = {.count = 1, .reusable = true}, SHIFT(49),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_group_name, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_group, 4),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 3),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_styles, 3),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_styles_repeat1, 2), SHIFT_REPEAT(43),
  [174] = {.count = 1, .reusable = true}, REDUCE(aux_sym_styles_repeat1, 2),
  [176] = {.count = 1, .reusable = true}, SHIFT(52),
  [178] = {.count = 1, .reusable = true}, SHIFT(53),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_important, 1),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_style, 4),
  [184] = {.count = 1, .reusable = true}, SHIFT(56),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_style_modifier, 1),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_style, 5),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_syncat_stylesheet() {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_name,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
