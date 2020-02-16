#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 65
#define SYMBOL_COUNT 74
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
  anon_sym_BANG = 7,
  anon_sym_DOT = 8,
  anon_sym_GT = 9,
  sym_direct_sibling = 10,
  sym_sibling = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_LT = 14,
  sym_any = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
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
  sym_module = 45,
  sym_rule = 46,
  sym_selectors = 47,
  sym__selectors = 48,
  sym_selector = 49,
  sym_selector_modifier = 50,
  sym_no_inherit = 51,
  sym_exact = 52,
  sym_scope = 53,
  sym_node_modifier = 54,
  sym_direct = 55,
  sym_node = 56,
  sym_group = 57,
  sym_group_name = 58,
  sym_kind = 59,
  sym_token = 60,
  sym_styles = 61,
  sym_style = 62,
  sym_style_modifier = 63,
  sym_important = 64,
  sym_value = 65,
  sym_capture = 66,
  sym_color = 67,
  sym_named_color = 68,
  sym_boolean = 69,
  aux_sym_stylesheet_repeat1 = 70,
  aux_sym_selector_modifier_repeat1 = 71,
  aux_sym_scope_repeat1 = 72,
  aux_sym_styles_repeat1 = 73,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_variable] = "variable",
  [anon_sym_import] = "import",
  [anon_sym_COMMA] = ",",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_GT] = ">",
  [sym_direct_sibling] = "direct_sibling",
  [sym_sibling] = "sibling",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LT] = "<",
  [sym_any] = "any",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_module] = "module",
  [sym_rule] = "rule",
  [sym_selectors] = "selectors",
  [sym__selectors] = "_selectors",
  [sym_selector] = "selector",
  [sym_selector_modifier] = "selector_modifier",
  [sym_no_inherit] = "no_inherit",
  [sym_exact] = "exact",
  [sym_scope] = "scope",
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
  [sym_important] = "important",
  [sym_value] = "value",
  [sym_capture] = "capture",
  [sym_color] = "color",
  [sym_named_color] = "named_color",
  [sym_boolean] = "boolean",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_selector_modifier_repeat1] = "selector_modifier_repeat1",
  [aux_sym_scope_repeat1] = "scope_repeat1",
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_module] = {
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
  [sym_selector_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_no_inherit] = {
    .visible = true,
    .named = true,
  },
  [sym_exact] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
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
  [sym_important] = {
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
  [aux_sym_selector_modifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scope_repeat1] = {
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
      if (lookahead == '!')
        ADVANCE(2);
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
      if (lookahead == '.')
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
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      END_STATE();
    case 41:
      if (lookahead == '/')
        ADVANCE(26);
      END_STATE();
    case 42:
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
        SKIP(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
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
        ADVANCE(41);
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
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
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
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 47:
      if (lookahead == '/')
        ADVANCE(41);
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
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 40},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 44},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 46},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 43},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 43},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 44},
  [37] = {.lex_state = 44},
  [38] = {.lex_state = 44},
  [39] = {.lex_state = 44},
  [40] = {.lex_state = 44},
  [41] = {.lex_state = 44},
  [42] = {.lex_state = 39},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 46},
  [45] = {.lex_state = 46},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 47},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 45},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 45},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 47},
  [58] = {.lex_state = 44},
  [59] = {.lex_state = 44},
  [60] = {.lex_state = 44},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 44},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 47},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_yellow] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_hex_color] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_direct_sibling] = ACTIONS(1),
    [sym_any] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_brblue] = ACTIONS(1),
    [anon_sym_brwhite] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_sibling] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_brgreen] = ACTIONS(1),
    [anon_sym_brcyan] = ACTIONS(1),
    [anon_sym_bryellow] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_regex] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_brpurple] = ACTIONS(1),
    [anon_sym_brred] = ACTIONS(1),
    [anon_sym_brblack] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
  },
  [1] = {
    [sym_import] = STATE(15),
    [sym_node] = STATE(8),
    [sym_group] = STATE(5),
    [sym__item] = STATE(15),
    [sym_declaration] = STATE(15),
    [sym__selectors] = STATE(9),
    [sym_selector] = STATE(10),
    [sym_token] = STATE(5),
    [aux_sym_scope_repeat1] = STATE(11),
    [sym_stylesheet] = STATE(12),
    [sym_rule] = STATE(15),
    [sym_selectors] = STATE(13),
    [sym_scope] = STATE(14),
    [sym_kind] = STATE(5),
    [aux_sym_stylesheet_repeat1] = STATE(15),
    [sym_regex] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [sym_string] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_name] = ACTIONS(13),
    [sym_any] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [anon_sym_COMMA] = ACTIONS(19),
    [sym_sibling] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_regex] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(19),
    [sym_name] = ACTIONS(19),
    [sym_direct_sibling] = ACTIONS(19),
    [sym_any] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
  },
  [3] = {
    [anon_sym_COMMA] = ACTIONS(21),
    [sym_sibling] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_regex] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(21),
    [sym_name] = ACTIONS(21),
    [sym_direct_sibling] = ACTIONS(21),
    [sym_any] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
  },
  [4] = {
    [sym_module] = STATE(17),
    [sym_string] = ACTIONS(23),
    [sym_name] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [anon_sym_COMMA] = ACTIONS(25),
    [sym_sibling] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_regex] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(25),
    [sym_name] = ACTIONS(25),
    [sym_direct_sibling] = ACTIONS(25),
    [sym_any] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
  },
  [6] = {
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_token] = STATE(5),
    [sym_scope] = STATE(20),
    [sym_group_name] = STATE(21),
    [sym_kind] = STATE(5),
    [aux_sym_scope_repeat1] = STATE(22),
    [sym_group] = STATE(5),
    [sym_node] = STATE(8),
    [anon_sym_LT] = ACTIONS(29),
    [sym_regex] = ACTIONS(5),
    [sym_name] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [sym_any] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_string] = ACTIONS(5),
  },
  [8] = {
    [sym_direct] = STATE(23),
    [sym_node_modifier] = STATE(25),
    [anon_sym_COMMA] = ACTIONS(33),
    [sym_regex] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_sibling] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(33),
    [sym_name] = ACTIONS(33),
    [sym_direct_sibling] = ACTIONS(35),
    [sym_any] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(37),
  },
  [9] = {
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_token] = STATE(5),
    [sym_kind] = STATE(5),
    [sym_node] = STATE(8),
    [sym_group] = STATE(5),
    [aux_sym_scope_repeat1] = STATE(27),
    [anon_sym_COMMA] = ACTIONS(45),
    [sym_regex] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_string] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_name] = ACTIONS(31),
    [sym_any] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_styles] = STATE(29),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [aux_sym_selector_modifier_repeat1] = STATE(32),
    [sym_exact] = STATE(32),
    [sym_selector_modifier] = STATE(33),
    [sym_no_inherit] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_kind] = STATE(5),
    [sym_import] = STATE(34),
    [sym_token] = STATE(5),
    [aux_sym_scope_repeat1] = STATE(11),
    [sym_group] = STATE(5),
    [sym_rule] = STATE(34),
    [sym_selectors] = STATE(13),
    [sym_node] = STATE(8),
    [sym_scope] = STATE(14),
    [sym__item] = STATE(34),
    [sym_declaration] = STATE(34),
    [sym__selectors] = STATE(9),
    [sym_selector] = STATE(10),
    [aux_sym_stylesheet_repeat1] = STATE(34),
    [sym_regex] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_import] = ACTIONS(9),
    [sym_string] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_name] = ACTIONS(13),
    [sym_any] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_named_color] = STATE(38),
    [sym_boolean] = STATE(37),
    [sym_capture] = STATE(37),
    [sym_color] = STATE(37),
    [sym_value] = STATE(41),
    [anon_sym_yellow] = ACTIONS(63),
    [sym_number] = ACTIONS(65),
    [sym_hex_color] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [anon_sym_brgreen] = ACTIONS(63),
    [anon_sym_brcyan] = ACTIONS(63),
    [anon_sym_bryellow] = ACTIONS(63),
    [anon_sym_blue] = ACTIONS(63),
    [anon_sym_white] = ACTIONS(63),
    [sym_variable] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [anon_sym_brblue] = ACTIONS(63),
    [anon_sym_brwhite] = ACTIONS(63),
    [anon_sym_purple] = ACTIONS(63),
    [anon_sym_red] = ACTIONS(63),
    [anon_sym_black] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(73),
    [sym_name] = ACTIONS(65),
    [anon_sym_brpurple] = ACTIONS(63),
    [anon_sym_brred] = ACTIONS(63),
    [anon_sym_brblack] = ACTIONS(63),
    [anon_sym_green] = ACTIONS(63),
    [anon_sym_cyan] = ACTIONS(63),
  },
  [19] = {
    [sym_name] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [21] = {
    [sym_token] = STATE(5),
    [sym_scope] = STATE(44),
    [sym_kind] = STATE(5),
    [aux_sym_scope_repeat1] = STATE(22),
    [sym_group] = STATE(5),
    [sym_node] = STATE(8),
    [sym_regex] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(31),
    [sym_any] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_string] = ACTIONS(5),
  },
  [22] = {
    [sym_token] = STATE(5),
    [sym_kind] = STATE(5),
    [sym_node] = STATE(8),
    [sym_group] = STATE(5),
    [aux_sym_scope_repeat1] = STATE(45),
    [sym_regex] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(45),
    [sym_any] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_string] = ACTIONS(5),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(79),
    [sym_regex] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [sym_name] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [sym_any] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [anon_sym_COMMA] = ACTIONS(81),
    [sym_regex] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [sym_string] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(81),
    [sym_name] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [sym_any] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_regex] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(83),
    [sym_name] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [sym_any] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_token] = STATE(5),
    [sym_node] = STATE(8),
    [aux_sym_scope_repeat1] = STATE(11),
    [sym_group] = STATE(5),
    [sym_scope] = STATE(14),
    [sym_kind] = STATE(5),
    [sym__selectors] = STATE(46),
    [sym_selector] = STATE(10),
    [sym_regex] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_name] = ACTIONS(31),
    [sym_any] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_string] = ACTIONS(5),
  },
  [27] = {
    [sym_token] = STATE(5),
    [sym_kind] = STATE(5),
    [sym_node] = STATE(8),
    [sym_group] = STATE(5),
    [aux_sym_scope_repeat1] = STATE(27),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_regex] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(90),
    [sym_string] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(83),
    [sym_name] = ACTIONS(93),
    [sym_any] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [aux_sym_styles_repeat1] = STATE(49),
    [sym_style] = STATE(49),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(101),
  },
  [29] = {
    [sym_regex] = ACTIONS(103),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_import] = ACTIONS(105),
    [sym_string] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [sym_name] = ACTIONS(105),
    [sym_any] = ACTIONS(103),
    [sym_variable] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_no_inherit] = STATE(50),
    [sym_exact] = STATE(50),
    [aux_sym_selector_modifier_repeat1] = STATE(50),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_kind] = STATE(5),
    [sym_import] = STATE(34),
    [sym_token] = STATE(5),
    [aux_sym_scope_repeat1] = STATE(11),
    [sym_group] = STATE(5),
    [sym_rule] = STATE(34),
    [sym_selectors] = STATE(13),
    [sym_node] = STATE(8),
    [sym_scope] = STATE(14),
    [sym__item] = STATE(34),
    [sym_declaration] = STATE(34),
    [sym__selectors] = STATE(9),
    [sym_selector] = STATE(10),
    [aux_sym_stylesheet_repeat1] = STATE(34),
    [sym_regex] = ACTIONS(115),
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_import] = ACTIONS(120),
    [sym_string] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(123),
    [sym_name] = ACTIONS(126),
    [sym_any] = ACTIONS(129),
    [sym_variable] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_regex] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_import] = ACTIONS(137),
    [sym_string] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(135),
    [sym_name] = ACTIONS(137),
    [sym_any] = ACTIONS(135),
    [sym_variable] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_BANG] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_SEMI] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(151),
  },
  [43] = {
    [anon_sym_COMMA] = ACTIONS(153),
    [sym_sibling] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_regex] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [sym_string] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(153),
    [sym_name] = ACTIONS(153),
    [sym_direct_sibling] = ACTIONS(153),
    [sym_any] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
  },
  [44] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(155),
  },
  [45] = {
    [sym_token] = STATE(5),
    [sym_kind] = STATE(5),
    [sym_node] = STATE(8),
    [sym_group] = STATE(5),
    [aux_sym_scope_repeat1] = STATE(45),
    [sym_regex] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(83),
    [sym_any] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(90),
    [sym_string] = ACTIONS(87),
  },
  [46] = {
    [anon_sym_LBRACE] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [anon_sym_COLON] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_regex] = ACTIONS(161),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_import] = ACTIONS(163),
    [sym_string] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym_name] = ACTIONS(163),
    [sym_any] = ACTIONS(161),
    [sym_variable] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [aux_sym_styles_repeat1] = STATE(57),
    [sym_style] = STATE(57),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(165),
  },
  [50] = {
    [sym_no_inherit] = STATE(50),
    [sym_exact] = STATE(50),
    [aux_sym_selector_modifier_repeat1] = STATE(50),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_BANG] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(175),
  },
  [52] = {
    [sym_regex] = ACTIONS(177),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_import] = ACTIONS(179),
    [sym_string] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym_name] = ACTIONS(179),
    [sym_any] = ACTIONS(177),
    [sym_variable] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [sym_regex] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(181),
    [sym_any] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [sym_string] = ACTIONS(181),
  },
  [54] = {
    [anon_sym_COMMA] = ACTIONS(183),
    [sym_sibling] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_regex] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [sym_string] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(183),
    [sym_name] = ACTIONS(183),
    [sym_direct_sibling] = ACTIONS(183),
    [sym_any] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
  },
  [55] = {
    [sym_named_color] = STATE(38),
    [sym_boolean] = STATE(37),
    [sym_capture] = STATE(37),
    [sym_color] = STATE(37),
    [sym_value] = STATE(59),
    [anon_sym_yellow] = ACTIONS(63),
    [sym_number] = ACTIONS(65),
    [sym_hex_color] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [anon_sym_brgreen] = ACTIONS(63),
    [anon_sym_brcyan] = ACTIONS(63),
    [anon_sym_bryellow] = ACTIONS(63),
    [anon_sym_blue] = ACTIONS(63),
    [anon_sym_white] = ACTIONS(63),
    [sym_variable] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [anon_sym_brblue] = ACTIONS(63),
    [anon_sym_brwhite] = ACTIONS(63),
    [anon_sym_purple] = ACTIONS(63),
    [anon_sym_red] = ACTIONS(63),
    [anon_sym_black] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(73),
    [sym_name] = ACTIONS(65),
    [anon_sym_brpurple] = ACTIONS(63),
    [anon_sym_brred] = ACTIONS(63),
    [anon_sym_brblack] = ACTIONS(63),
    [anon_sym_green] = ACTIONS(63),
    [anon_sym_cyan] = ACTIONS(63),
  },
  [56] = {
    [sym_regex] = ACTIONS(185),
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_import] = ACTIONS(187),
    [sym_string] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [sym_name] = ACTIONS(187),
    [sym_any] = ACTIONS(185),
    [sym_variable] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [aux_sym_styles_repeat1] = STATE(57),
    [sym_style] = STATE(57),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(192),
  },
  [58] = {
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [sym_style_modifier] = STATE(62),
    [sym_important] = STATE(63),
    [anon_sym_BANG] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_SEMI] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(202),
    [anon_sym_RBRACE] = ACTIONS(202),
  },
  [62] = {
    [anon_sym_SEMI] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_SEMI] = ACTIONS(206),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = false}, SHIFT(3),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_kind, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(16),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_node, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(18),
  [29] = {.count = 1, .reusable = true}, SHIFT(19),
  [31] = {.count = 1, .reusable = true}, SHIFT(3),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scope_repeat1, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(23),
  [37] = {.count = 1, .reusable = true}, SHIFT(24),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(26),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_scope, 1),
  [47] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [49] = {.count = 1, .reusable = true}, SHIFT(28),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(31),
  [55] = {.count = 1, .reusable = true}, SHIFT(30),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_module, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(35),
  [63] = {.count = 1, .reusable = false}, SHIFT(36),
  [65] = {.count = 1, .reusable = false}, SHIFT(37),
  [67] = {.count = 1, .reusable = true}, SHIFT(38),
  [69] = {.count = 1, .reusable = true}, SHIFT(37),
  [71] = {.count = 1, .reusable = true}, SHIFT(39),
  [73] = {.count = 1, .reusable = false}, SHIFT(40),
  [75] = {.count = 1, .reusable = true}, SHIFT(42),
  [77] = {.count = 1, .reusable = true}, SHIFT(43),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_node_modifier, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_direct, 1),
  [83] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scope_repeat1, 2),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 2),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(2),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(7),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(3),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(5),
  [99] = {.count = 1, .reusable = true}, SHIFT(47),
  [101] = {.count = 1, .reusable = true}, SHIFT(48),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_no_inherit, 1),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_exact, 1),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_selector_modifier, 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [118] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [120] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [126] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_import, 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_named_color, 1),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_color, 1),
  [145] = {.count = 1, .reusable = true}, SHIFT(51),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [149] = {.count = 1, .reusable = true}, SHIFT(52),
  [151] = {.count = 1, .reusable = true}, SHIFT(53),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [155] = {.count = 1, .reusable = true}, SHIFT(54),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 3),
  [159] = {.count = 1, .reusable = true}, SHIFT(55),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_styles, 2),
  [165] = {.count = 1, .reusable = true}, SHIFT(56),
  [167] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_modifier_repeat1, 2),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_modifier_repeat1, 2), SHIFT_REPEAT(31),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_modifier_repeat1, 2), SHIFT_REPEAT(30),
  [175] = {.count = 1, .reusable = true}, SHIFT(58),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_group_name, 3),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_group, 4),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 3),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_styles, 3),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_styles_repeat1, 2), SHIFT_REPEAT(47),
  [192] = {.count = 1, .reusable = true}, REDUCE(aux_sym_styles_repeat1, 2),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_capture, 3),
  [196] = {.count = 1, .reusable = true}, SHIFT(60),
  [198] = {.count = 1, .reusable = true}, SHIFT(61),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_important, 1),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_style, 4),
  [204] = {.count = 1, .reusable = true}, SHIFT(64),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_style_modifier, 1),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_style, 5),
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
