#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 54
#define SYMBOL_COUNT 66
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
  sym_capture = 17,
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
  sym_color = 60,
  sym_named_color = 61,
  sym_boolean = 62,
  aux_sym_stylesheet_repeat1 = 63,
  aux_sym_selector_repeat1 = 64,
  aux_sym_styles_repeat1 = 65,
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
  [sym_group] = "group",
  [sym_group_name] = "group_name",
  [sym_kind] = "kind",
  [sym_token] = "token",
  [sym_styles] = "styles",
  [sym_style] = "style",
  [sym_style_modifier] = "style_modifier",
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
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '}')
        ADVANCE(17);
      if (lookahead == '~')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 3:
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(22);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(23);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
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
      if (lookahead == '/')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_sibling);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '"')
        ADVANCE(29);
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_capture);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
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
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(11);
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
        ADVANCE(20);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 40:
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
        ADVANCE(11);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '~')
        ADVANCE(18);
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
        ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(14);
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
        ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == '/')
        ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(16);
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
        ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      END_STATE();
    case 46:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(11);
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
        ADVANCE(20);
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
        ADVANCE(19);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 48:
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(17);
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
        ADVANCE(20);
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
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 44},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 44},
  [13] = {.lex_state = 44},
  [14] = {.lex_state = 44},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 46},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 47},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 44},
  [28] = {.lex_state = 44},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 46},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 45},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 45},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 45},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 42},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 44},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 45},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 45},
  [52] = {.lex_state = 45},
  [53] = {.lex_state = 48},
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
    [sym_capture] = ACTIONS(1),
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
    [sym_import] = STATE(11),
    [sym_rule] = STATE(11),
    [sym_node] = STATE(8),
    [sym_stylesheet] = STATE(9),
    [sym_selectors] = STATE(10),
    [aux_sym_stylesheet_repeat1] = STATE(11),
    [sym__selectors] = STATE(12),
    [sym_group] = STATE(4),
    [sym__item] = STATE(11),
    [sym_declaration] = STATE(11),
    [sym_selector] = STATE(13),
    [aux_sym_selector_repeat1] = STATE(14),
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
    [aux_sym_selector_repeat1] = STATE(18),
    [sym_selector] = STATE(19),
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
    [sym_token] = STATE(4),
    [sym_import] = STATE(26),
    [sym_rule] = STATE(26),
    [sym_node] = STATE(8),
    [sym_selectors] = STATE(10),
    [sym__selectors] = STATE(12),
    [sym_group] = STATE(4),
    [aux_sym_stylesheet_repeat1] = STATE(26),
    [sym__item] = STATE(26),
    [sym_declaration] = STATE(26),
    [sym_selector] = STATE(13),
    [aux_sym_selector_repeat1] = STATE(14),
    [sym_kind] = STATE(4),
    [sym_regex] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_import] = ACTIONS(9),
    [sym_string] = ACTIONS(5),
    [sym_name] = ACTIONS(11),
    [sym_any] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [anon_sym_LBRACE] = ACTIONS(45),
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
    [aux_sym_selector_repeat1] = STATE(18),
    [sym_selector] = STATE(31),
    [sym_kind] = STATE(4),
    [sym_regex] = ACTIONS(5),
    [sym_name] = ACTIONS(27),
    [sym_any] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_string] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_token] = STATE(4),
    [sym_group] = STATE(4),
    [sym_node] = STATE(8),
    [aux_sym_selector_repeat1] = STATE(32),
    [sym_kind] = STATE(4),
    [sym_regex] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(51),
    [sym_name] = ACTIONS(27),
    [sym_any] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_string] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_color] = STATE(35),
    [sym_named_color] = STATE(36),
    [sym_value] = STATE(38),
    [sym_boolean] = STATE(35),
    [anon_sym_yellow] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_hex_color] = ACTIONS(63),
    [sym_string] = ACTIONS(65),
    [anon_sym_brgreen] = ACTIONS(59),
    [anon_sym_brcyan] = ACTIONS(59),
    [anon_sym_bryellow] = ACTIONS(59),
    [anon_sym_blue] = ACTIONS(59),
    [anon_sym_white] = ACTIONS(59),
    [sym_variable] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_brblue] = ACTIONS(59),
    [anon_sym_brwhite] = ACTIONS(59),
    [anon_sym_purple] = ACTIONS(59),
    [anon_sym_red] = ACTIONS(59),
    [anon_sym_black] = ACTIONS(59),
    [sym_capture] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(67),
    [sym_name] = ACTIONS(61),
    [anon_sym_brpurple] = ACTIONS(59),
    [anon_sym_brred] = ACTIONS(59),
    [anon_sym_brblack] = ACTIONS(59),
    [anon_sym_green] = ACTIONS(59),
    [anon_sym_cyan] = ACTIONS(59),
  },
  [21] = {
    [anon_sym_COMMA] = ACTIONS(69),
    [sym_regex] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_name] = ACTIONS(69),
    [sym_any] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
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
  [23] = {
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
  [24] = {
    [sym_style] = STATE(41),
    [aux_sym_styles_repeat1] = STATE(41),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_name] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_regex] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_import] = ACTIONS(81),
    [sym_string] = ACTIONS(79),
    [sym_name] = ACTIONS(81),
    [sym_any] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_variable] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_token] = STATE(4),
    [sym_import] = STATE(26),
    [sym_rule] = STATE(26),
    [sym_node] = STATE(8),
    [sym_selectors] = STATE(10),
    [sym__selectors] = STATE(12),
    [sym_group] = STATE(4),
    [aux_sym_stylesheet_repeat1] = STATE(26),
    [sym__item] = STATE(26),
    [sym_declaration] = STATE(26),
    [sym_selector] = STATE(13),
    [aux_sym_selector_repeat1] = STATE(14),
    [sym_kind] = STATE(4),
    [sym_regex] = ACTIONS(83),
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_import] = ACTIONS(88),
    [sym_string] = ACTIONS(83),
    [sym_name] = ACTIONS(91),
    [sym_any] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(97),
    [sym_variable] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_token] = STATE(4),
    [sym_group] = STATE(4),
    [sym__selectors] = STATE(42),
    [sym_node] = STATE(8),
    [sym_selector] = STATE(13),
    [aux_sym_selector_repeat1] = STATE(14),
    [sym_kind] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(103),
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
    [anon_sym_COMMA] = ACTIONS(73),
    [sym_regex] = ACTIONS(105),
    [sym_string] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_name] = ACTIONS(108),
    [sym_any] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_regex] = ACTIONS(117),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_import] = ACTIONS(119),
    [sym_string] = ACTIONS(117),
    [sym_name] = ACTIONS(119),
    [sym_any] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(117),
    [sym_variable] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_GT] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_token] = STATE(4),
    [sym_group] = STATE(4),
    [sym_node] = STATE(8),
    [aux_sym_selector_repeat1] = STATE(32),
    [sym_kind] = STATE(4),
    [sym_regex] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym_name] = ACTIONS(108),
    [sym_any] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(114),
    [sym_string] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_COMMA] = ACTIONS(125),
    [sym_regex] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [sym_string] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [sym_direct_sibling] = ACTIONS(125),
    [sym_any] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [sym_name] = ACTIONS(125),
    [sym_sibling] = ACTIONS(125),
  },
  [34] = {
    [anon_sym_SEMI] = ACTIONS(127),
    [sym_important] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_SEMI] = ACTIONS(129),
    [sym_important] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [anon_sym_SEMI] = ACTIONS(131),
    [sym_important] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [anon_sym_SEMI] = ACTIONS(133),
    [sym_important] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [anon_sym_SEMI] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_regex] = ACTIONS(137),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_import] = ACTIONS(139),
    [sym_string] = ACTIONS(137),
    [sym_name] = ACTIONS(139),
    [sym_any] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(137),
    [sym_variable] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [anon_sym_COLON] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_style] = STATE(48),
    [aux_sym_styles_repeat1] = STATE(48),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym_name] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym_regex] = ACTIONS(147),
    [sym_name] = ACTIONS(147),
    [sym_any] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(147),
    [sym_string] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_COMMA] = ACTIONS(149),
    [sym_regex] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [sym_string] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [sym_direct_sibling] = ACTIONS(149),
    [sym_any] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [sym_name] = ACTIONS(149),
    [sym_sibling] = ACTIONS(149),
  },
  [45] = {
    [sym_regex] = ACTIONS(151),
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_import] = ACTIONS(153),
    [sym_string] = ACTIONS(151),
    [sym_name] = ACTIONS(153),
    [sym_any] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(151),
    [sym_variable] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [sym_color] = STATE(35),
    [sym_named_color] = STATE(36),
    [sym_value] = STATE(49),
    [sym_boolean] = STATE(35),
    [anon_sym_yellow] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_hex_color] = ACTIONS(63),
    [sym_string] = ACTIONS(65),
    [anon_sym_brgreen] = ACTIONS(59),
    [anon_sym_brcyan] = ACTIONS(59),
    [anon_sym_bryellow] = ACTIONS(59),
    [anon_sym_blue] = ACTIONS(59),
    [anon_sym_white] = ACTIONS(59),
    [sym_variable] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_brblue] = ACTIONS(59),
    [anon_sym_brwhite] = ACTIONS(59),
    [anon_sym_purple] = ACTIONS(59),
    [anon_sym_red] = ACTIONS(59),
    [anon_sym_black] = ACTIONS(59),
    [sym_capture] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(67),
    [sym_name] = ACTIONS(61),
    [anon_sym_brpurple] = ACTIONS(59),
    [anon_sym_brred] = ACTIONS(59),
    [anon_sym_brblack] = ACTIONS(59),
    [anon_sym_green] = ACTIONS(59),
    [anon_sym_cyan] = ACTIONS(59),
  },
  [47] = {
    [sym_regex] = ACTIONS(155),
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_import] = ACTIONS(157),
    [sym_string] = ACTIONS(155),
    [sym_name] = ACTIONS(157),
    [sym_any] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(155),
    [sym_variable] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_style] = STATE(48),
    [aux_sym_styles_repeat1] = STATE(48),
    [anon_sym_RBRACE] = ACTIONS(159),
    [sym_name] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_style_modifier] = STATE(52),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_important] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [anon_sym_RBRACE] = ACTIONS(168),
    [sym_name] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_SEMI] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_SEMI] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [anon_sym_RBRACE] = ACTIONS(174),
    [sym_name] = ACTIONS(174),
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
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 1),
  [49] = {.count = 1, .reusable = true}, SHIFT(27),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(29),
  [55] = {.count = 1, .reusable = true}, SHIFT(30),
  [57] = {.count = 1, .reusable = true}, SHIFT(33),
  [59] = {.count = 1, .reusable = false}, SHIFT(34),
  [61] = {.count = 1, .reusable = false}, SHIFT(35),
  [63] = {.count = 1, .reusable = true}, SHIFT(36),
  [65] = {.count = 1, .reusable = true}, SHIFT(35),
  [67] = {.count = 1, .reusable = false}, SHIFT(37),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_direct, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_node_modifier, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2),
  [75] = {.count = 1, .reusable = true}, SHIFT(39),
  [77] = {.count = 1, .reusable = true}, SHIFT(40),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [86] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [91] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 2),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(2),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(3),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(4),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(6),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_import, 3),
  [121] = {.count = 1, .reusable = true}, SHIFT(43),
  [123] = {.count = 1, .reusable = true}, SHIFT(44),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_named_color, 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_color, 1),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [135] = {.count = 1, .reusable = true}, SHIFT(45),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_styles, 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(46),
  [143] = {.count = 1, .reusable = true}, SHIFT(47),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 3),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_group_name, 3),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_group, 4),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 3),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_styles, 3),
  [159] = {.count = 1, .reusable = true}, REDUCE(aux_sym_styles_repeat1, 2),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_styles_repeat1, 2), SHIFT_REPEAT(40),
  [164] = {.count = 1, .reusable = true}, SHIFT(50),
  [166] = {.count = 1, .reusable = true}, SHIFT(51),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_style, 4),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_style_modifier, 1),
  [172] = {.count = 1, .reusable = true}, SHIFT(53),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_style, 5),
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
