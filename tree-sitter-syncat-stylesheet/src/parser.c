#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 44
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_COMMA = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_GT = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LBRACE_PIPE = 7,
  anon_sym_PIPE_RBRACE = 8,
  anon_sym_SEMI = 9,
  anon_sym_COLON = 10,
  anon_sym_colour = 11,
  anon_sym_color = 12,
  anon_sym_background_DASHcolour = 13,
  anon_sym_background_DASHcolor = 14,
  anon_sym_red = 15,
  anon_sym_blue = 16,
  anon_sym_green = 17,
  anon_sym_purple = 18,
  anon_sym_yellow = 19,
  anon_sym_black = 20,
  anon_sym_white = 21,
  anon_sym_cyan = 22,
  sym__color_index = 23,
  sym__rgb_color = 24,
  anon_sym_italic = 25,
  anon_sym_bold = 26,
  anon_sym_underline = 27,
  anon_sym_strikethrough = 28,
  anon_sym_hidden = 29,
  anon_sym_blink = 30,
  anon_sym_dim = 31,
  anon_sym_reverse = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  sym__string_style = 35,
  sym_comment = 36,
  sym__unquoted_string = 37,
  sym__quoted_string = 38,
  sym_stylesheet = 39,
  sym_rule = 40,
  sym__selectors = 41,
  sym_selector = 42,
  sym__terminal_selector = 43,
  sym__selector_scope = 44,
  sym__selector_node = 45,
  sym_branch_check = 46,
  sym_direct_child = 47,
  sym_node_kind = 48,
  sym_token = 49,
  sym__style_block = 50,
  sym_styles = 51,
  sym_important_styles = 52,
  sym__style_list = 53,
  sym_style = 54,
  sym__color_style = 55,
  sym__color_value = 56,
  sym__color_literal = 57,
  sym__boolean_style = 58,
  sym__boolean_value = 59,
  sym__string_value = 60,
  aux_sym_stylesheet_repeat1 = 61,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_PIPE] = "{|",
  [anon_sym_PIPE_RBRACE] = "|}",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_colour] = "colour",
  [anon_sym_color] = "color",
  [anon_sym_background_DASHcolour] = "background-colour",
  [anon_sym_background_DASHcolor] = "background-color",
  [anon_sym_red] = "red",
  [anon_sym_blue] = "blue",
  [anon_sym_green] = "green",
  [anon_sym_purple] = "purple",
  [anon_sym_yellow] = "yellow",
  [anon_sym_black] = "black",
  [anon_sym_white] = "white",
  [anon_sym_cyan] = "cyan",
  [sym__color_index] = "_color_index",
  [sym__rgb_color] = "_rgb_color",
  [anon_sym_italic] = "italic",
  [anon_sym_bold] = "bold",
  [anon_sym_underline] = "underline",
  [anon_sym_strikethrough] = "strikethrough",
  [anon_sym_hidden] = "hidden",
  [anon_sym_blink] = "blink",
  [anon_sym_dim] = "dim",
  [anon_sym_reverse] = "reverse",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym__string_style] = "style_name",
  [sym_comment] = "comment",
  [sym__unquoted_string] = "_unquoted_string",
  [sym__quoted_string] = "_quoted_string",
  [sym_stylesheet] = "stylesheet",
  [sym_rule] = "rule",
  [sym__selectors] = "_selectors",
  [sym_selector] = "selector",
  [sym__terminal_selector] = "_terminal_selector",
  [sym__selector_scope] = "_selector_scope",
  [sym__selector_node] = "_selector_node",
  [sym_branch_check] = "branch_check",
  [sym_direct_child] = "direct_child",
  [sym_node_kind] = "node_kind",
  [sym_token] = "token",
  [sym__style_block] = "_style_block",
  [sym_styles] = "styles",
  [sym_important_styles] = "important_styles",
  [sym__style_list] = "_style_list",
  [sym_style] = "style",
  [sym__color_style] = "style_name",
  [sym__color_value] = "style_value",
  [sym__color_literal] = "_color_literal",
  [sym__boolean_style] = "style_name",
  [sym__boolean_value] = "style_value",
  [sym__string_value] = "style_value",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_GT] = {
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
  [anon_sym_LBRACE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_colour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_background_DASHcolour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_background_DASHcolor] = {
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
  [sym__color_index] = {
    .visible = false,
    .named = true,
  },
  [sym__rgb_color] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_italic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_underline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strikethrough] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym__string_style] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
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
  [sym__terminal_selector] = {
    .visible = false,
    .named = true,
  },
  [sym__selector_scope] = {
    .visible = false,
    .named = true,
  },
  [sym__selector_node] = {
    .visible = false,
    .named = true,
  },
  [sym_branch_check] = {
    .visible = true,
    .named = true,
  },
  [sym_direct_child] = {
    .visible = true,
    .named = true,
  },
  [sym_node_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym__style_block] = {
    .visible = false,
    .named = true,
  },
  [sym_styles] = {
    .visible = true,
    .named = true,
  },
  [sym_important_styles] = {
    .visible = true,
    .named = true,
  },
  [sym__style_list] = {
    .visible = false,
    .named = true,
  },
  [sym_style] = {
    .visible = true,
    .named = true,
  },
  [sym__color_style] = {
    .visible = true,
    .named = true,
  },
  [sym__color_value] = {
    .visible = true,
    .named = true,
  },
  [sym__color_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_style] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_value] = {
    .visible = true,
    .named = true,
  },
  [sym__string_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
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
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == '1')
        ADVANCE(6);
      if (lookahead == '2')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == ']')
        ADVANCE(12);
      if (lookahead == 'b')
        ADVANCE(13);
      if (lookahead == 'c')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(15);
      if (lookahead == 'f')
        ADVANCE(16);
      if (lookahead == 'g')
        ADVANCE(17);
      if (lookahead == 'h')
        ADVANCE(18);
      if (lookahead == 'i')
        ADVANCE(19);
      if (lookahead == 'l')
        ADVANCE(20);
      if (lookahead == 'p')
        ADVANCE(21);
      if (lookahead == 'r')
        ADVANCE(22);
      if (lookahead == 's')
        ADVANCE(23);
      if (lookahead == 't')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == 'w')
        ADVANCE(26);
      if (lookahead == 'y')
        ADVANCE(27);
      if (lookahead == '{')
        ADVANCE(28);
      if (lookahead == '|')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\\')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(34);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(35);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      if (lookahead == '*')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(37);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '5')
        ADVANCE(38);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(31);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(40);
      if (lookahead == 'l')
        ADVANCE(41);
      if (lookahead == 'o')
        ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(43);
      if (lookahead == 'y')
        ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h')
        ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '|')
        ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == '}')
        ADVANCE(59);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '"')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(34);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == '*')
        ADVANCE(62);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(39);
      if (lookahead == '-' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(64);
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'u')
        ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'm')
        ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(77);
      if (lookahead == 'v')
        ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE_PIPE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == '*')
        ADVANCE(62);
      if (lookahead == '/')
        ADVANCE(85);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_dim);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's')
        ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'p')
        ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(109);
      if (lookahead == 'u')
        ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_cyan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_blink);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's')
        ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_white);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'w')
        ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(133);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_italic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_purple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__color_index);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h')
        ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__string_style);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_underline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h')
        ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 'u')
        ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 159:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == '>')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == ']')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 160:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 161:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ']')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      END_STATE();
    case 162:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(163);
      if (lookahead == 'c')
        ADVANCE(164);
      if (lookahead == 'd')
        ADVANCE(165);
      if (lookahead == 'h')
        ADVANCE(166);
      if (lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'l')
        ADVANCE(168);
      if (lookahead == 'r')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(170);
      if (lookahead == 'u')
        ADVANCE(171);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(162);
      END_STATE();
    case 163:
      if (lookahead == 'a')
        ADVANCE(172);
      if (lookahead == 'l')
        ADVANCE(173);
      if (lookahead == 'o')
        ADVANCE(174);
      END_STATE();
    case 164:
      if (lookahead == 'o')
        ADVANCE(175);
      END_STATE();
    case 165:
      if (lookahead == 'i')
        ADVANCE(176);
      END_STATE();
    case 166:
      if (lookahead == 'i')
        ADVANCE(177);
      END_STATE();
    case 167:
      if (lookahead == 't')
        ADVANCE(178);
      END_STATE();
    case 168:
      if (lookahead == 'a')
        ADVANCE(179);
      END_STATE();
    case 169:
      if (lookahead == 'e')
        ADVANCE(180);
      END_STATE();
    case 170:
      if (lookahead == 't')
        ADVANCE(181);
      END_STATE();
    case 171:
      if (lookahead == 'n')
        ADVANCE(182);
      END_STATE();
    case 172:
      if (lookahead == 'c')
        ADVANCE(183);
      END_STATE();
    case 173:
      if (lookahead == 'i')
        ADVANCE(184);
      END_STATE();
    case 174:
      if (lookahead == 'l')
        ADVANCE(185);
      END_STATE();
    case 175:
      if (lookahead == 'l')
        ADVANCE(186);
      END_STATE();
    case 176:
      if (lookahead == 'm')
        ADVANCE(187);
      END_STATE();
    case 177:
      if (lookahead == 'd')
        ADVANCE(188);
      END_STATE();
    case 178:
      if (lookahead == 'a')
        ADVANCE(189);
      END_STATE();
    case 179:
      if (lookahead == 'n')
        ADVANCE(190);
      END_STATE();
    case 180:
      if (lookahead == 'v')
        ADVANCE(191);
      END_STATE();
    case 181:
      if (lookahead == 'r')
        ADVANCE(192);
      END_STATE();
    case 182:
      if (lookahead == 'd')
        ADVANCE(193);
      END_STATE();
    case 183:
      if (lookahead == 'k')
        ADVANCE(194);
      END_STATE();
    case 184:
      if (lookahead == 'n')
        ADVANCE(195);
      END_STATE();
    case 185:
      if (lookahead == 'd')
        ADVANCE(196);
      END_STATE();
    case 186:
      if (lookahead == 'o')
        ADVANCE(197);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 188:
      if (lookahead == 'd')
        ADVANCE(198);
      END_STATE();
    case 189:
      if (lookahead == 'l')
        ADVANCE(199);
      END_STATE();
    case 190:
      if (lookahead == 'g')
        ADVANCE(200);
      END_STATE();
    case 191:
      if (lookahead == 'e')
        ADVANCE(201);
      END_STATE();
    case 192:
      if (lookahead == 'i')
        ADVANCE(202);
      END_STATE();
    case 193:
      if (lookahead == 'e')
        ADVANCE(203);
      END_STATE();
    case 194:
      if (lookahead == 'g')
        ADVANCE(204);
      END_STATE();
    case 195:
      if (lookahead == 'k')
        ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 197:
      if (lookahead == 'r')
        ADVANCE(206);
      if (lookahead == 'u')
        ADVANCE(207);
      END_STATE();
    case 198:
      if (lookahead == 'e')
        ADVANCE(208);
      END_STATE();
    case 199:
      if (lookahead == 'i')
        ADVANCE(209);
      END_STATE();
    case 200:
      if (lookahead == 'u')
        ADVANCE(210);
      END_STATE();
    case 201:
      if (lookahead == 'r')
        ADVANCE(211);
      END_STATE();
    case 202:
      if (lookahead == 'k')
        ADVANCE(212);
      END_STATE();
    case 203:
      if (lookahead == 'r')
        ADVANCE(213);
      END_STATE();
    case 204:
      if (lookahead == 'r')
        ADVANCE(214);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_blink);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 207:
      if (lookahead == 'r')
        ADVANCE(215);
      END_STATE();
    case 208:
      if (lookahead == 'n')
        ADVANCE(216);
      END_STATE();
    case 209:
      if (lookahead == 'c')
        ADVANCE(217);
      END_STATE();
    case 210:
      if (lookahead == 'a')
        ADVANCE(218);
      END_STATE();
    case 211:
      if (lookahead == 's')
        ADVANCE(219);
      END_STATE();
    case 212:
      if (lookahead == 'e')
        ADVANCE(220);
      END_STATE();
    case 213:
      if (lookahead == 'l')
        ADVANCE(221);
      END_STATE();
    case 214:
      if (lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 218:
      if (lookahead == 'g')
        ADVANCE(223);
      END_STATE();
    case 219:
      if (lookahead == 'e')
        ADVANCE(224);
      END_STATE();
    case 220:
      if (lookahead == 't')
        ADVANCE(225);
      END_STATE();
    case 221:
      if (lookahead == 'i')
        ADVANCE(226);
      END_STATE();
    case 222:
      if (lookahead == 'u')
        ADVANCE(227);
      END_STATE();
    case 223:
      if (lookahead == 'e')
        ADVANCE(228);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 225:
      if (lookahead == 'h')
        ADVANCE(229);
      END_STATE();
    case 226:
      if (lookahead == 'n')
        ADVANCE(230);
      END_STATE();
    case 227:
      if (lookahead == 'n')
        ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__string_style);
      END_STATE();
    case 229:
      if (lookahead == 'r')
        ADVANCE(232);
      END_STATE();
    case 230:
      if (lookahead == 'e')
        ADVANCE(233);
      END_STATE();
    case 231:
      if (lookahead == 'd')
        ADVANCE(234);
      END_STATE();
    case 232:
      if (lookahead == 'o')
        ADVANCE(235);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 234:
      if (lookahead == '-')
        ADVANCE(236);
      END_STATE();
    case 235:
      if (lookahead == 'u')
        ADVANCE(237);
      END_STATE();
    case 236:
      if (lookahead == 'c')
        ADVANCE(238);
      END_STATE();
    case 237:
      if (lookahead == 'g')
        ADVANCE(239);
      END_STATE();
    case 238:
      if (lookahead == 'o')
        ADVANCE(240);
      END_STATE();
    case 239:
      if (lookahead == 'h')
        ADVANCE(241);
      END_STATE();
    case 240:
      if (lookahead == 'l')
        ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      END_STATE();
    case 242:
      if (lookahead == 'o')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'r')
        ADVANCE(244);
      if (lookahead == 'u')
        ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      END_STATE();
    case 245:
      if (lookahead == 'r')
        ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      END_STATE();
    case 247:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(247);
      END_STATE();
    case 248:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(248);
      END_STATE();
    case 249:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(249);
      END_STATE();
    case 250:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(250);
      END_STATE();
    case 251:
      if (lookahead == 'a')
        ADVANCE(253);
      END_STATE();
    case 252:
      if (lookahead == 'r')
        ADVANCE(254);
      END_STATE();
    case 253:
      if (lookahead == 'l')
        ADVANCE(255);
      END_STATE();
    case 254:
      if (lookahead == 'u')
        ADVANCE(256);
      END_STATE();
    case 255:
      if (lookahead == 's')
        ADVANCE(257);
      END_STATE();
    case 256:
      if (lookahead == 'e')
        ADVANCE(258);
      END_STATE();
    case 257:
      if (lookahead == 'e')
        ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 260:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == '1')
        ADVANCE(261);
      if (lookahead == '2')
        ADVANCE(262);
      if (lookahead == 'b')
        ADVANCE(263);
      if (lookahead == 'c')
        ADVANCE(264);
      if (lookahead == 'g')
        ADVANCE(265);
      if (lookahead == 'p')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(267);
      if (lookahead == 'w')
        ADVANCE(268);
      if (lookahead == 'y')
        ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(260);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(270);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(270);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '5')
        ADVANCE(271);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(270);
      END_STATE();
    case 263:
      if (lookahead == 'l')
        ADVANCE(273);
      END_STATE();
    case 264:
      if (lookahead == 'y')
        ADVANCE(274);
      END_STATE();
    case 265:
      if (lookahead == 'r')
        ADVANCE(275);
      END_STATE();
    case 266:
      if (lookahead == 'u')
        ADVANCE(276);
      END_STATE();
    case 267:
      if (lookahead == 'e')
        ADVANCE(277);
      END_STATE();
    case 268:
      if (lookahead == 'h')
        ADVANCE(278);
      END_STATE();
    case 269:
      if (lookahead == 'e')
        ADVANCE(279);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(272);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__rgb_color);
      END_STATE();
    case 273:
      if (lookahead == 'a')
        ADVANCE(280);
      if (lookahead == 'u')
        ADVANCE(281);
      END_STATE();
    case 274:
      if (lookahead == 'a')
        ADVANCE(282);
      END_STATE();
    case 275:
      if (lookahead == 'e')
        ADVANCE(283);
      END_STATE();
    case 276:
      if (lookahead == 'r')
        ADVANCE(284);
      END_STATE();
    case 277:
      if (lookahead == 'd')
        ADVANCE(285);
      END_STATE();
    case 278:
      if (lookahead == 'i')
        ADVANCE(286);
      END_STATE();
    case 279:
      if (lookahead == 'l')
        ADVANCE(287);
      END_STATE();
    case 280:
      if (lookahead == 'c')
        ADVANCE(288);
      END_STATE();
    case 281:
      if (lookahead == 'e')
        ADVANCE(289);
      END_STATE();
    case 282:
      if (lookahead == 'n')
        ADVANCE(290);
      END_STATE();
    case 283:
      if (lookahead == 'e')
        ADVANCE(291);
      END_STATE();
    case 284:
      if (lookahead == 'p')
        ADVANCE(292);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 286:
      if (lookahead == 't')
        ADVANCE(293);
      END_STATE();
    case 287:
      if (lookahead == 'l')
        ADVANCE(294);
      END_STATE();
    case 288:
      if (lookahead == 'k')
        ADVANCE(295);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 291:
      if (lookahead == 'n')
        ADVANCE(296);
      END_STATE();
    case 292:
      if (lookahead == 'l')
        ADVANCE(297);
      END_STATE();
    case 293:
      if (lookahead == 'e')
        ADVANCE(298);
      END_STATE();
    case 294:
      if (lookahead == 'o')
        ADVANCE(299);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 297:
      if (lookahead == 'e')
        ADVANCE(300);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 299:
      if (lookahead == 'w')
        ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_purple);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 302:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(163);
      if (lookahead == 'c')
        ADVANCE(164);
      if (lookahead == 'd')
        ADVANCE(165);
      if (lookahead == 'h')
        ADVANCE(166);
      if (lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'l')
        ADVANCE(168);
      if (lookahead == 'r')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(170);
      if (lookahead == 'u')
        ADVANCE(171);
      if (lookahead == '|')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(302);
      END_STATE();
    case 303:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(303);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 159},
  [2] = {.lex_state = 159},
  [3] = {.lex_state = 159},
  [4] = {.lex_state = 159},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 159},
  [7] = {.lex_state = 159},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 159},
  [10] = {.lex_state = 159},
  [11] = {.lex_state = 160},
  [12] = {.lex_state = 161},
  [13] = {.lex_state = 160},
  [14] = {.lex_state = 159},
  [15] = {.lex_state = 159},
  [16] = {.lex_state = 159},
  [17] = {.lex_state = 159},
  [18] = {.lex_state = 162},
  [19] = {.lex_state = 162},
  [20] = {.lex_state = 159},
  [21] = {.lex_state = 159},
  [22] = {.lex_state = 160},
  [23] = {.lex_state = 247},
  [24] = {.lex_state = 247},
  [25] = {.lex_state = 247},
  [26] = {.lex_state = 162},
  [27] = {.lex_state = 247},
  [28] = {.lex_state = 248},
  [29] = {.lex_state = 247},
  [30] = {.lex_state = 249},
  [31] = {.lex_state = 249},
  [32] = {.lex_state = 159},
  [33] = {.lex_state = 159},
  [34] = {.lex_state = 250},
  [35] = {.lex_state = 162},
  [36] = {.lex_state = 260},
  [37] = {.lex_state = 159},
  [38] = {.lex_state = 302},
  [39] = {.lex_state = 303},
  [40] = {.lex_state = 303},
  [41] = {.lex_state = 303},
  [42] = {.lex_state = 303},
  [43] = {.lex_state = 303},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_white] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_background_DASHcolor] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_dim] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [sym__color_index] = ACTIONS(1),
    [sym__string_style] = ACTIONS(1),
    [sym__unquoted_string] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_colour] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_background_DASHcolour] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE_PIPE] = ACTIONS(1),
    [anon_sym_strikethrough] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_blink] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [sym__rgb_color] = ACTIONS(1),
  },
  [1] = {
    [sym_selector] = STATE(5),
    [sym__terminal_selector] = STATE(6),
    [sym_node_kind] = STATE(7),
    [sym_token] = STATE(6),
    [sym_stylesheet] = STATE(8),
    [sym__selector_scope] = STATE(9),
    [aux_sym_stylesheet_repeat1] = STATE(10),
    [sym__selector_node] = STATE(9),
    [sym_rule] = STATE(10),
    [sym__selectors] = STATE(11),
    [sym_branch_check] = STATE(9),
    [sym_direct_child] = STATE(9),
    [sym__unquoted_string] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(11),
  },
  [2] = {
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym__unquoted_string] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(15),
    [sym__quoted_string] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE_PIPE] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(15),
  },
  [3] = {
    [sym_selector] = STATE(12),
    [sym__terminal_selector] = STATE(6),
    [sym_node_kind] = STATE(7),
    [sym_token] = STATE(6),
    [sym__selector_scope] = STATE(9),
    [sym__selector_node] = STATE(9),
    [sym_branch_check] = STATE(9),
    [sym_direct_child] = STATE(9),
    [sym__unquoted_string] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(11),
  },
  [4] = {
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACE_PIPE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(19),
  },
  [5] = {
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_PIPE] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(25),
  },
  [6] = {
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACE_PIPE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
  },
  [7] = {
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym__unquoted_string] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym__quoted_string] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LBRACE_PIPE] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__selector_node] = STATE(15),
    [sym__terminal_selector] = STATE(16),
    [sym_node_kind] = STATE(7),
    [sym_token] = STATE(16),
    [sym_branch_check] = STATE(15),
    [sym_direct_child] = STATE(15),
    [sym__unquoted_string] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(11),
  },
  [10] = {
    [sym_selector] = STATE(5),
    [sym__terminal_selector] = STATE(6),
    [sym_node_kind] = STATE(7),
    [sym_token] = STATE(6),
    [sym__selector_scope] = STATE(9),
    [sym__selector_node] = STATE(9),
    [aux_sym_stylesheet_repeat1] = STATE(17),
    [sym_rule] = STATE(17),
    [sym__selectors] = STATE(11),
    [sym_branch_check] = STATE(9),
    [sym_direct_child] = STATE(9),
    [sym__unquoted_string] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(11),
  },
  [11] = {
    [sym__style_block] = STATE(20),
    [sym_styles] = STATE(20),
    [sym_important_styles] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACE_PIPE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [anon_sym_RBRACK] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_selector] = STATE(5),
    [sym__terminal_selector] = STATE(6),
    [sym_node_kind] = STATE(7),
    [sym_token] = STATE(6),
    [sym__selector_scope] = STATE(9),
    [sym__selector_node] = STATE(9),
    [sym__selectors] = STATE(22),
    [sym_branch_check] = STATE(9),
    [sym_direct_child] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym__unquoted_string] = ACTIONS(5),
    [anon_sym_LBRACE_PIPE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(11),
  },
  [14] = {
    [sym__unquoted_string] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(53),
  },
  [15] = {
    [sym__unquoted_string] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(55),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACE_PIPE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
  },
  [17] = {
    [sym_selector] = STATE(5),
    [sym__terminal_selector] = STATE(6),
    [sym_node_kind] = STATE(7),
    [sym_token] = STATE(6),
    [sym__selector_scope] = STATE(9),
    [sym__selector_node] = STATE(9),
    [aux_sym_stylesheet_repeat1] = STATE(17),
    [sym_rule] = STATE(17),
    [sym__selectors] = STATE(11),
    [sym_branch_check] = STATE(9),
    [sym_direct_child] = STATE(9),
    [sym__unquoted_string] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(64),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(69),
  },
  [18] = {
    [sym__style_list] = STATE(26),
    [sym__boolean_style] = STATE(27),
    [sym_style] = STATE(28),
    [sym__color_style] = STATE(29),
    [anon_sym_strikethrough] = ACTIONS(72),
    [anon_sym_bold] = ACTIONS(72),
    [anon_sym_dim] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [anon_sym_colour] = ACTIONS(74),
    [anon_sym_underline] = ACTIONS(72),
    [anon_sym_background_DASHcolour] = ACTIONS(74),
    [anon_sym_hidden] = ACTIONS(72),
    [anon_sym_reverse] = ACTIONS(72),
    [anon_sym_color] = ACTIONS(74),
    [anon_sym_italic] = ACTIONS(72),
    [anon_sym_blink] = ACTIONS(72),
    [anon_sym_background_DASHcolor] = ACTIONS(74),
    [sym__string_style] = ACTIONS(76),
  },
  [19] = {
    [sym__style_list] = STATE(30),
    [sym__boolean_style] = STATE(27),
    [sym_style] = STATE(31),
    [sym__color_style] = STATE(29),
    [anon_sym_strikethrough] = ACTIONS(72),
    [anon_sym_bold] = ACTIONS(72),
    [anon_sym_dim] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [anon_sym_colour] = ACTIONS(74),
    [anon_sym_underline] = ACTIONS(72),
    [anon_sym_background_DASHcolour] = ACTIONS(74),
    [anon_sym_hidden] = ACTIONS(72),
    [anon_sym_reverse] = ACTIONS(72),
    [anon_sym_color] = ACTIONS(74),
    [anon_sym_italic] = ACTIONS(72),
    [anon_sym_blink] = ACTIONS(72),
    [anon_sym_background_DASHcolor] = ACTIONS(74),
    [sym__string_style] = ACTIONS(76),
  },
  [20] = {
    [sym__unquoted_string] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(78),
  },
  [21] = {
    [sym__unquoted_string] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(80),
  },
  [22] = {
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LBRACE_PIPE] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [anon_sym_COLON] = ACTIONS(86),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [anon_sym_COLON] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [anon_sym_COLON] = ACTIONS(90),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [anon_sym_COLON] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_COLON] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_RBRACE] = ACTIONS(102),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_RBRACE] = ACTIONS(98),
  },
  [32] = {
    [sym__string_value] = STATE(40),
    [sym__unquoted_string] = ACTIONS(106),
    [sym__quoted_string] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym__unquoted_string] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(108),
  },
  [34] = {
    [sym__boolean_value] = STATE(40),
    [anon_sym_true] = ACTIONS(110),
    [anon_sym_false] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym__style_list] = STATE(42),
    [sym__boolean_style] = STATE(27),
    [sym_style] = STATE(28),
    [sym__color_style] = STATE(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_underline] = ACTIONS(72),
    [anon_sym_reverse] = ACTIONS(72),
    [anon_sym_hidden] = ACTIONS(72),
    [anon_sym_color] = ACTIONS(74),
    [anon_sym_background_DASHcolor] = ACTIONS(74),
    [sym__string_style] = ACTIONS(76),
    [anon_sym_bold] = ACTIONS(72),
    [anon_sym_dim] = ACTIONS(72),
    [anon_sym_colour] = ACTIONS(74),
    [anon_sym_background_DASHcolour] = ACTIONS(74),
    [anon_sym_strikethrough] = ACTIONS(72),
    [anon_sym_italic] = ACTIONS(72),
    [anon_sym_blink] = ACTIONS(72),
  },
  [36] = {
    [sym__color_literal] = STATE(43),
    [sym__color_value] = STATE(40),
    [anon_sym_white] = ACTIONS(114),
    [anon_sym_red] = ACTIONS(114),
    [anon_sym_black] = ACTIONS(114),
    [anon_sym_green] = ACTIONS(114),
    [anon_sym_cyan] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
    [anon_sym_blue] = ACTIONS(114),
    [anon_sym_purple] = ACTIONS(114),
    [sym__color_index] = ACTIONS(114),
    [anon_sym_yellow] = ACTIONS(114),
    [sym__rgb_color] = ACTIONS(114),
  },
  [37] = {
    [sym__unquoted_string] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(116),
  },
  [38] = {
    [sym__style_list] = STATE(42),
    [sym__boolean_style] = STATE(27),
    [sym_style] = STATE(31),
    [sym__color_style] = STATE(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_underline] = ACTIONS(72),
    [anon_sym_reverse] = ACTIONS(72),
    [anon_sym_hidden] = ACTIONS(72),
    [anon_sym_color] = ACTIONS(74),
    [anon_sym_background_DASHcolor] = ACTIONS(74),
    [sym__string_style] = ACTIONS(76),
    [anon_sym_PIPE_RBRACE] = ACTIONS(112),
    [anon_sym_bold] = ACTIONS(72),
    [anon_sym_dim] = ACTIONS(72),
    [anon_sym_colour] = ACTIONS(74),
    [anon_sym_background_DASHcolour] = ACTIONS(74),
    [anon_sym_strikethrough] = ACTIONS(72),
    [anon_sym_italic] = ACTIONS(72),
    [anon_sym_blink] = ACTIONS(72),
  },
  [39] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(118),
    [anon_sym_RBRACE] = ACTIONS(118),
    [anon_sym_PIPE_RBRACE] = ACTIONS(118),
  },
  [40] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_PIPE_RBRACE] = ACTIONS(120),
  },
  [41] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_PIPE_RBRACE] = ACTIONS(122),
  },
  [42] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_PIPE_RBRACE] = ACTIONS(126),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, REDUCE(sym_node_kind, 1),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_node_kind, 1),
  [17] = {.count = 1, .reusable = false}, REDUCE(sym_token, 1),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym__terminal_selector, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym__selector_node, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym__terminal_selector, 1),
  [39] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [43] = {.count = 1, .reusable = false}, SHIFT(18),
  [45] = {.count = 1, .reusable = true}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 2),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 2),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_direct_child, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym__selector_scope, 2),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 2),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.count = 1, .reusable = true}, SHIFT(23),
  [74] = {.count = 1, .reusable = true}, SHIFT(24),
  [76] = {.count = 1, .reusable = true}, SHIFT(25),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_branch_check, 3),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 3),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 3),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_style, 1),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__color_style, 1),
  [90] = {.count = 1, .reusable = true}, SHIFT(32),
  [92] = {.count = 1, .reusable = true}, SHIFT(33),
  [94] = {.count = 1, .reusable = true}, SHIFT(34),
  [96] = {.count = 1, .reusable = true}, SHIFT(35),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym__style_list, 1),
  [100] = {.count = 1, .reusable = true}, SHIFT(36),
  [102] = {.count = 1, .reusable = true}, SHIFT(37),
  [104] = {.count = 1, .reusable = true}, SHIFT(38),
  [106] = {.count = 1, .reusable = true}, SHIFT(39),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 3),
  [110] = {.count = 1, .reusable = true}, SHIFT(41),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym__style_list, 2),
  [114] = {.count = 1, .reusable = true}, SHIFT(43),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_important_styles, 3),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym__string_value, 1),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_style, 3),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_value, 1),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym__style_list, 3),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym__color_value, 1),
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
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
