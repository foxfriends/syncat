#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 57
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
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
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LT = 12,
  sym_any = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  sym_important = 16,
  anon_sym_DOT = 17,
  anon_sym_red = 18,
  anon_sym_blue = 19,
  anon_sym_green = 20,
  anon_sym_purple = 21,
  anon_sym_yellow = 22,
  anon_sym_black = 23,
  anon_sym_white = 24,
  anon_sym_cyan = 25,
  anon_sym_brred = 26,
  anon_sym_brblue = 27,
  anon_sym_brgreen = 28,
  anon_sym_brpurple = 29,
  anon_sym_bryellow = 30,
  anon_sym_brblack = 31,
  anon_sym_brwhite = 32,
  anon_sym_brcyan = 33,
  sym_hex_color = 34,
  anon_sym_true = 35,
  anon_sym_false = 36,
  sym_number = 37,
  sym_regex = 38,
  sym_string = 39,
  sym_comment = 40,
  sym_stylesheet = 41,
  sym__item = 42,
  sym_declaration = 43,
  sym_import = 44,
  sym_rule = 45,
  sym_selectors = 46,
  sym__selectors = 47,
  sym_selector = 48,
  sym_node_modifier = 49,
  sym_direct = 50,
  sym_node = 51,
  sym_group = 52,
  sym_group_name = 53,
  sym_kind = 54,
  sym_token = 55,
  sym_styles = 56,
  sym_style = 57,
  sym_style_modifier = 58,
  sym_value = 59,
  sym_capture = 60,
  sym_color = 61,
  sym_named_color = 62,
  sym_boolean = 63,
  aux_sym_stylesheet_repeat1 = 64,
  aux_sym_selector_repeat1 = 65,
  aux_sym_styles_repeat1 = 66,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LT] = "<",
  [sym_any] = "any",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_important] = "important",
  [anon_sym_DOT] = ".",
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
  [sym_group] = "group",
  [sym_group_name] = "group_name",
  [sym_kind] = "kind",
  [sym_token] = "token",
  [sym_styles] = "styles",
  [sym_style] = "style",
  [sym_style_modifier] = "style_modifier",
  [sym_value] = "value",
  [sym_capture] = "capture",
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
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_capture] = {
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
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '.')
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
      ACCEPT_TOKEN(sym_important);
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
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_any);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_direct_sibling);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 12:
      if (lookahead == '/')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(28);
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
        ADVANCE(29);
      if (lookahead == '\\')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(23);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '/')
        ADVANCE(31);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == 'i')
        ADVANCE(33);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_regex);
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
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
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
        ADVANCE(21);
      END_STATE();
    case 39:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
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
        SKIP(39);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == '/')
        ADVANCE(42);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      END_STATE();
    case 42:
      if (lookahead == '/')
        ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 44:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 47:
      if (lookahead == '/')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
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
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 40},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 45},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 47},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 39},
  [31] = {.lex_state = 45},
  [32] = {.lex_state = 39},
  [33] = {.lex_state = 45},
  [34] = {.lex_state = 44},
  [35] = {.lex_state = 44},
  [36] = {.lex_state = 44},
  [37] = {.lex_state = 44},
  [38] = {.lex_state = 44},
  [39] = {.lex_state = 44},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 41},
  [42] = {.lex_state = 47},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 46},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 46},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 47},
  [51] = {.lex_state = 44},
  [52] = {.lex_state = 44},
  [53] = {.lex_state = 47},
  [54] = {.lex_state = 44},
  [55] = {.lex_state = 44},
  [56] = {.lex_state = 47},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_yellow] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_hex_color] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_any] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_sibling] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_brblue] = ACTIONS(1),
    [anon_sym_brwhite] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_brgreen] = ACTIONS(1),
    [anon_sym_brcyan] = ACTIONS(1),
    [anon_sym_bryellow] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_regex] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_direct_sibling] = ACTIONS(1),
    [anon_sym_brpurple] = ACTIONS(1),
    [anon_sym_brred] = ACTIONS(1),
    [anon_sym_brblack] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
  },
  [1] = {
    [sym_token] = STATE(4),
    [sym_import] = STATE(12),
    [sym_rule] = STATE(12),
    [aux_sym_selector_repeat1] = STATE(14),
    [sym_node] = STATE(8),
    [sym_stylesheet] = STATE(9),
    [sym_selectors] = STATE(10),
    [sym__selectors] = STATE(11),
    [sym_group] = STATE(4),
    [sym__item] = STATE(12),
    [sym_declaration] = STATE(12),
    [aux_sym_stylesheet_repeat1] = STATE(12),
    [sym_selector] = STATE(13),
    [sym_kind] = STATE(4),
    [sym_regex] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [sym_string] = ACTIONS(5),
    [sym_name] = ACTIONS(11),
    [sym_any] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [anon_sym_COMMA] = ACTIONS(19),
    [sym_regex] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_direct_sibling] = ACTIONS(19),
    [sym_any] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_name] = ACTIONS(19),
    [sym_sibling] = ACTIONS(19),
  },
  [3] = {
    [anon_sym_COMMA] = ACTIONS(21),
    [sym_regex] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_direct_sibling] = ACTIONS(21),
    [sym_any] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_name] = ACTIONS(21),
    [sym_sibling] = ACTIONS(21),
  },
  [4] = {
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_regex] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_direct_sibling] = ACTIONS(23),
    [sym_any] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_name] = ACTIONS(23),
    [sym_sibling] = ACTIONS(23),
  },
  [5] = {
    [sym_string] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_token] = STATE(4),
    [sym_group] = STATE(4),
    [sym_group_name] = STATE(17),
    [sym_node] = STATE(8),
    [sym_selector] = STATE(18),
    [aux_sym_selector_repeat1] = STATE(19),
    [sym_kind] = STATE(4),
    [sym_regex] = ACTIONS(5),
    [sym_name] = ACTIONS(27),
    [sym_any] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_string] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [anon_sym_COLON] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_node_modifier] = STATE(23),
    [sym_direct] = STATE(22),
    [anon_sym_COMMA] = ACTIONS(33),
    [sym_regex] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_name] = ACTIONS(33),
    [sym_any] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_direct_sibling] = ACTIONS(37),
    [sym_sibling] = ACTIONS(37),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_styles] = STATE(25),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_token] = STATE(4),
    [sym_import] = STATE(26),
    [sym_rule] = STATE(26),
    [sym_kind] = STATE(4),
    [sym_node] = STATE(8),
    [sym_selectors] = STATE(10),
    [sym__selectors] = STATE(11),
    [sym_group] = STATE(4),
    [sym__item] = STATE(26),
    [sym_declaration] = STATE(26),
    [aux_sym_stylesheet_repeat1] = STATE(26),
    [sym_selector] = STATE(13),
    [aux_sym_selector_repeat1] = STATE(14),
    [sym_regex] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_import] = ACTIONS(9),
    [sym_string] = ACTIONS(5),
    [sym_name] = ACTIONS(11),
    [sym_any] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_token] = STATE(4),
    [sym_group] = STATE(4),
    [sym_node] = STATE(8),
    [aux_sym_selector_repeat1] = STATE(28),
    [sym_kind] = STATE(4),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_regex] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_name] = ACTIONS(27),
    [sym_any] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [anon_sym_SEMI] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_name] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_token] = STATE(4),
    [sym_group] = STATE(4),
    [sym_node] = STATE(8),
    [sym_selector] = STATE(31),
    [aux_sym_selector_repeat1] = STATE(19),
    [sym_kind] = STATE(4),
    [sym_regex] = ACTIONS(5),
    [sym_name] = ACTIONS(27),
    [sym_any] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_string] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_token] = STATE(4),
    [sym_group] = STATE(4),
    [sym_node] = STATE(8),
    [aux_sym_selector_repeat1] = STATE(33),
    [sym_kind] = STATE(4),
    [sym_regex] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(51),
    [sym_name] = ACTIONS(27),
    [sym_any] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_string] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_boolean] = STATE(35),
    [sym_capture] = STATE(35),
    [sym_color] = STATE(35),
    [sym_value] = STATE(39),
    [sym_named_color] = STATE(36),
    [anon_sym_yellow] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_hex_color] = ACTIONS(63),
    [sym_string] = ACTIONS(65),
    [anon_sym_brgreen] = ACTIONS(59),
    [anon_sym_brcyan] = ACTIONS(59),
    [anon_sym_bryellow] = ACTIONS(59),
    [anon_sym_blue] = ACTIONS(59),
    [anon_sym_white] = ACTIONS(59),
    [sym_variable] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_brblue] = ACTIONS(59),
    [anon_sym_brwhite] = ACTIONS(59),
    [anon_sym_purple] = ACTIONS(59),
    [anon_sym_red] = ACTIONS(59),
    [anon_sym_black] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(69),
    [sym_name] = ACTIONS(61),
    [anon_sym_brpurple] = ACTIONS(59),
    [anon_sym_brred] = ACTIONS(59),
    [anon_sym_brblack] = ACTIONS(59),
    [anon_sym_green] = ACTIONS(59),
    [anon_sym_cyan] = ACTIONS(59),
  },
  [21] = {
    [anon_sym_COMMA] = ACTIONS(71),
    [sym_regex] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [sym_string] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [sym_name] = ACTIONS(71),
    [sym_any] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [anon_sym_COMMA] = ACTIONS(73),
    [sym_regex] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_name] = ACTIONS(73),
    [sym_any] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(75),
    [sym_regex] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_name] = ACTIONS(75),
    [sym_any] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_style] = STATE(42),
    [aux_sym_styles_repeat1] = STATE(42),
    [anon_sym_RBRACE] = ACTIONS(77),
    [sym_name] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_regex] = ACTIONS(81),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_import] = ACTIONS(83),
    [sym_string] = ACTIONS(81),
    [sym_name] = ACTIONS(83),
    [sym_any] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [sym_variable] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_token] = STATE(4),
    [sym_import] = STATE(26),
    [sym_rule] = STATE(26),
    [sym_kind] = STATE(4),
    [sym_node] = STATE(8),
    [sym_selectors] = STATE(10),
    [sym__selectors] = STATE(11),
    [sym_group] = STATE(4),
    [sym__item] = STATE(26),
    [sym_declaration] = STATE(26),
    [aux_sym_stylesheet_repeat1] = STATE(26),
    [sym_selector] = STATE(13),
    [aux_sym_selector_repeat1] = STATE(14),
    [sym_regex] = ACTIONS(85),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_import] = ACTIONS(90),
    [sym_string] = ACTIONS(85),
    [sym_name] = ACTIONS(93),
    [sym_any] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym_variable] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_token] = STATE(4),
    [sym_group] = STATE(4),
    [sym__selectors] = STATE(43),
    [sym_node] = STATE(8),
    [sym_selector] = STATE(13),
    [aux_sym_selector_repeat1] = STATE(14),
    [sym_kind] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_regex] = ACTIONS(5),
    [sym_name] = ACTIONS(27),
    [sym_any] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_string] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_token] = STATE(4),
    [sym_group] = STATE(4),
    [sym_node] = STATE(8),
    [aux_sym_selector_repeat1] = STATE(28),
    [sym_kind] = STATE(4),
    [anon_sym_COMMA] = ACTIONS(75),
    [sym_regex] = ACTIONS(107),
    [sym_string] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_name] = ACTIONS(110),
    [sym_any] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_regex] = ACTIONS(119),
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_import] = ACTIONS(121),
    [sym_string] = ACTIONS(119),
    [sym_name] = ACTIONS(121),
    [sym_any] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym_variable] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_GT] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [anon_sym_COMMA] = ACTIONS(127),
    [sym_regex] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [sym_string] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(127),
    [sym_direct_sibling] = ACTIONS(127),
    [sym_any] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(127),
    [sym_name] = ACTIONS(127),
    [sym_sibling] = ACTIONS(127),
  },
  [33] = {
    [sym_token] = STATE(4),
    [sym_group] = STATE(4),
    [sym_node] = STATE(8),
    [aux_sym_selector_repeat1] = STATE(33),
    [sym_kind] = STATE(4),
    [sym_regex] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(75),
    [sym_name] = ACTIONS(110),
    [sym_any] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(116),
    [sym_string] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [anon_sym_SEMI] = ACTIONS(129),
    [sym_important] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_SEMI] = ACTIONS(131),
    [sym_important] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [anon_sym_SEMI] = ACTIONS(133),
    [sym_important] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(131),
    [sym_important] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [anon_sym_SEMI] = ACTIONS(137),
    [sym_important] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [anon_sym_SEMI] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_regex] = ACTIONS(141),
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [sym_string] = ACTIONS(141),
    [sym_name] = ACTIONS(143),
    [sym_any] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(141),
    [sym_variable] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_COLON] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_style] = STATE(50),
    [aux_sym_styles_repeat1] = STATE(50),
    [anon_sym_RBRACE] = ACTIONS(147),
    [sym_name] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [anon_sym_LBRACE] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym_regex] = ACTIONS(151),
    [sym_name] = ACTIONS(151),
    [sym_any] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(151),
    [sym_string] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [anon_sym_COMMA] = ACTIONS(153),
    [sym_regex] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [sym_string] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_direct_sibling] = ACTIONS(153),
    [sym_any] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [sym_name] = ACTIONS(153),
    [sym_sibling] = ACTIONS(153),
  },
  [46] = {
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(155),
  },
  [47] = {
    [sym_regex] = ACTIONS(157),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_import] = ACTIONS(159),
    [sym_string] = ACTIONS(157),
    [sym_name] = ACTIONS(159),
    [sym_any] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(157),
    [sym_variable] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_boolean] = STATE(35),
    [sym_capture] = STATE(35),
    [sym_color] = STATE(35),
    [sym_value] = STATE(52),
    [sym_named_color] = STATE(36),
    [anon_sym_yellow] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_hex_color] = ACTIONS(63),
    [sym_string] = ACTIONS(65),
    [anon_sym_brgreen] = ACTIONS(59),
    [anon_sym_brcyan] = ACTIONS(59),
    [anon_sym_bryellow] = ACTIONS(59),
    [anon_sym_blue] = ACTIONS(59),
    [anon_sym_white] = ACTIONS(59),
    [sym_variable] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_brblue] = ACTIONS(59),
    [anon_sym_brwhite] = ACTIONS(59),
    [anon_sym_purple] = ACTIONS(59),
    [anon_sym_red] = ACTIONS(59),
    [anon_sym_black] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(69),
    [sym_name] = ACTIONS(61),
    [anon_sym_brpurple] = ACTIONS(59),
    [anon_sym_brred] = ACTIONS(59),
    [anon_sym_brblack] = ACTIONS(59),
    [anon_sym_green] = ACTIONS(59),
    [anon_sym_cyan] = ACTIONS(59),
  },
  [49] = {
    [sym_regex] = ACTIONS(161),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_import] = ACTIONS(163),
    [sym_string] = ACTIONS(161),
    [sym_name] = ACTIONS(163),
    [sym_any] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_variable] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [sym_style] = STATE(50),
    [aux_sym_styles_repeat1] = STATE(50),
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym_name] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_SEMI] = ACTIONS(170),
    [sym_important] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym_style_modifier] = STATE(55),
    [anon_sym_SEMI] = ACTIONS(172),
    [sym_important] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [anon_sym_RBRACE] = ACTIONS(176),
    [sym_name] = ACTIONS(176),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [anon_sym_SEMI] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [anon_sym_SEMI] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [anon_sym_RBRACE] = ACTIONS(182),
    [sym_name] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_kind, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_node, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, SHIFT(3),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, SHIFT(20),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true}, SHIFT(24),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 1),
  [49] = {.count = 1, .reusable = true}, SHIFT(27),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(29),
  [55] = {.count = 1, .reusable = true}, SHIFT(30),
  [57] = {.count = 1, .reusable = true}, SHIFT(32),
  [59] = {.count = 1, .reusable = false}, SHIFT(34),
  [61] = {.count = 1, .reusable = false}, SHIFT(35),
  [63] = {.count = 1, .reusable = true}, SHIFT(36),
  [65] = {.count = 1, .reusable = true}, SHIFT(35),
  [67] = {.count = 1, .reusable = true}, SHIFT(37),
  [69] = {.count = 1, .reusable = false}, SHIFT(38),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_direct, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_node_modifier, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2),
  [77] = {.count = 1, .reusable = true}, SHIFT(40),
  [79] = {.count = 1, .reusable = true}, SHIFT(41),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [88] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [90] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 2),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(2),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(3),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(4),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(6),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_import, 3),
  [123] = {.count = 1, .reusable = true}, SHIFT(44),
  [125] = {.count = 1, .reusable = true}, SHIFT(45),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_named_color, 1),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_color, 1),
  [135] = {.count = 1, .reusable = true}, SHIFT(46),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [139] = {.count = 1, .reusable = true}, SHIFT(47),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 2),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_styles, 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(48),
  [147] = {.count = 1, .reusable = true}, SHIFT(49),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 3),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_group_name, 3),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_group, 4),
  [155] = {.count = 1, .reusable = true}, SHIFT(51),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 3),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_styles, 3),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym_styles_repeat1, 2),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_styles_repeat1, 2), SHIFT_REPEAT(41),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_capture, 3),
  [172] = {.count = 1, .reusable = true}, SHIFT(53),
  [174] = {.count = 1, .reusable = true}, SHIFT(54),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_style, 4),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_style_modifier, 1),
  [180] = {.count = 1, .reusable = true}, SHIFT(56),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_style, 5),
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
