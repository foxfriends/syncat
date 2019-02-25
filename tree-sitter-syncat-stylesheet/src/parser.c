#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 41
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_COMMA = 1,
  anon_sym_GT = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LBRACE_PIPE = 5,
  anon_sym_PIPE_RBRACE = 6,
  anon_sym_SEMI = 7,
  anon_sym_COLON = 8,
  anon_sym_colour = 9,
  anon_sym_color = 10,
  anon_sym_background_DASHcolour = 11,
  anon_sym_background_DASHcolor = 12,
  anon_sym_red = 13,
  anon_sym_blue = 14,
  anon_sym_green = 15,
  anon_sym_purple = 16,
  anon_sym_yellow = 17,
  anon_sym_black = 18,
  anon_sym_white = 19,
  anon_sym_cyan = 20,
  sym__color_index = 21,
  sym__rgb_color = 22,
  anon_sym_italic = 23,
  anon_sym_bold = 24,
  anon_sym_underline = 25,
  anon_sym_strikethrough = 26,
  anon_sym_hidden = 27,
  anon_sym_blink = 28,
  anon_sym_dim = 29,
  anon_sym_reverse = 30,
  anon_sym_true = 31,
  anon_sym_false = 32,
  sym__string_style = 33,
  sym_comment = 34,
  sym__unquoted_string = 35,
  sym__quoted_string = 36,
  sym_stylesheet = 37,
  sym_rule = 38,
  sym__selectors = 39,
  sym_selector = 40,
  sym__terminal_selector = 41,
  sym__selector_scope = 42,
  sym__selector_node = 43,
  sym_direct_child = 44,
  sym_node_kind = 45,
  sym_token = 46,
  sym__style_block = 47,
  sym_styles = 48,
  sym_important_styles = 49,
  sym__style_list = 50,
  sym_style = 51,
  sym__color_style = 52,
  sym__color_value = 53,
  sym__color_literal = 54,
  sym__boolean_style = 55,
  sym__boolean_value = 56,
  sym__string_value = 57,
  aux_sym_stylesheet_repeat1 = 58,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
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
      if (lookahead == 'b')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(12);
      if (lookahead == 'd')
        ADVANCE(13);
      if (lookahead == 'f')
        ADVANCE(14);
      if (lookahead == 'g')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(16);
      if (lookahead == 'i')
        ADVANCE(17);
      if (lookahead == 'l')
        ADVANCE(18);
      if (lookahead == 'p')
        ADVANCE(19);
      if (lookahead == 'r')
        ADVANCE(20);
      if (lookahead == 's')
        ADVANCE(21);
      if (lookahead == 't')
        ADVANCE(22);
      if (lookahead == 'u')
        ADVANCE(23);
      if (lookahead == 'w')
        ADVANCE(24);
      if (lookahead == 'y')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\\')
        ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(32);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      if (lookahead == '*')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '5')
        ADVANCE(36);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(29);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
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
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'l')
        ADVANCE(39);
      if (lookahead == 'o')
        ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(41);
      if (lookahead == 'y')
        ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h')
        ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '|')
        ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == '}')
        ADVANCE(57);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '"')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(32);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == '*')
        ADVANCE(60);
      if (lookahead != 0)
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(37);
      if (lookahead == '-' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(62);
      if (lookahead == 'i')
        ADVANCE(63);
      if (lookahead == 'u')
        ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'm')
        ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == '*')
        ADVANCE(60);
      if (lookahead == '/')
        ADVANCE(83);
      if (lookahead != 0)
        ADVANCE(34);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_dim);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's')
        ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'p')
        ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
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
        ADVANCE(30);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(103);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(107);
      if (lookahead == 'u')
        ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_cyan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
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
        ADVANCE(30);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_blink);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's')
        ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
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
        ADVANCE(30);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_white);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'w')
        ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_italic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_purple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__color_index);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h')
        ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__string_style);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_underline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h')
        ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(154);
      if (lookahead == 'u')
        ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 157:
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
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 158:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(159);
      if (lookahead == 'c')
        ADVANCE(160);
      if (lookahead == 'd')
        ADVANCE(161);
      if (lookahead == 'h')
        ADVANCE(162);
      if (lookahead == 'i')
        ADVANCE(163);
      if (lookahead == 'l')
        ADVANCE(164);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 's')
        ADVANCE(166);
      if (lookahead == 'u')
        ADVANCE(167);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(158);
      END_STATE();
    case 159:
      if (lookahead == 'a')
        ADVANCE(168);
      if (lookahead == 'l')
        ADVANCE(169);
      if (lookahead == 'o')
        ADVANCE(170);
      END_STATE();
    case 160:
      if (lookahead == 'o')
        ADVANCE(171);
      END_STATE();
    case 161:
      if (lookahead == 'i')
        ADVANCE(172);
      END_STATE();
    case 162:
      if (lookahead == 'i')
        ADVANCE(173);
      END_STATE();
    case 163:
      if (lookahead == 't')
        ADVANCE(174);
      END_STATE();
    case 164:
      if (lookahead == 'a')
        ADVANCE(175);
      END_STATE();
    case 165:
      if (lookahead == 'e')
        ADVANCE(176);
      END_STATE();
    case 166:
      if (lookahead == 't')
        ADVANCE(177);
      END_STATE();
    case 167:
      if (lookahead == 'n')
        ADVANCE(178);
      END_STATE();
    case 168:
      if (lookahead == 'c')
        ADVANCE(179);
      END_STATE();
    case 169:
      if (lookahead == 'i')
        ADVANCE(180);
      END_STATE();
    case 170:
      if (lookahead == 'l')
        ADVANCE(181);
      END_STATE();
    case 171:
      if (lookahead == 'l')
        ADVANCE(182);
      END_STATE();
    case 172:
      if (lookahead == 'm')
        ADVANCE(183);
      END_STATE();
    case 173:
      if (lookahead == 'd')
        ADVANCE(184);
      END_STATE();
    case 174:
      if (lookahead == 'a')
        ADVANCE(185);
      END_STATE();
    case 175:
      if (lookahead == 'n')
        ADVANCE(186);
      END_STATE();
    case 176:
      if (lookahead == 'v')
        ADVANCE(187);
      END_STATE();
    case 177:
      if (lookahead == 'r')
        ADVANCE(188);
      END_STATE();
    case 178:
      if (lookahead == 'd')
        ADVANCE(189);
      END_STATE();
    case 179:
      if (lookahead == 'k')
        ADVANCE(190);
      END_STATE();
    case 180:
      if (lookahead == 'n')
        ADVANCE(191);
      END_STATE();
    case 181:
      if (lookahead == 'd')
        ADVANCE(192);
      END_STATE();
    case 182:
      if (lookahead == 'o')
        ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 184:
      if (lookahead == 'd')
        ADVANCE(194);
      END_STATE();
    case 185:
      if (lookahead == 'l')
        ADVANCE(195);
      END_STATE();
    case 186:
      if (lookahead == 'g')
        ADVANCE(196);
      END_STATE();
    case 187:
      if (lookahead == 'e')
        ADVANCE(197);
      END_STATE();
    case 188:
      if (lookahead == 'i')
        ADVANCE(198);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(199);
      END_STATE();
    case 190:
      if (lookahead == 'g')
        ADVANCE(200);
      END_STATE();
    case 191:
      if (lookahead == 'k')
        ADVANCE(201);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 193:
      if (lookahead == 'r')
        ADVANCE(202);
      if (lookahead == 'u')
        ADVANCE(203);
      END_STATE();
    case 194:
      if (lookahead == 'e')
        ADVANCE(204);
      END_STATE();
    case 195:
      if (lookahead == 'i')
        ADVANCE(205);
      END_STATE();
    case 196:
      if (lookahead == 'u')
        ADVANCE(206);
      END_STATE();
    case 197:
      if (lookahead == 'r')
        ADVANCE(207);
      END_STATE();
    case 198:
      if (lookahead == 'k')
        ADVANCE(208);
      END_STATE();
    case 199:
      if (lookahead == 'r')
        ADVANCE(209);
      END_STATE();
    case 200:
      if (lookahead == 'r')
        ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_blink);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 203:
      if (lookahead == 'r')
        ADVANCE(211);
      END_STATE();
    case 204:
      if (lookahead == 'n')
        ADVANCE(212);
      END_STATE();
    case 205:
      if (lookahead == 'c')
        ADVANCE(213);
      END_STATE();
    case 206:
      if (lookahead == 'a')
        ADVANCE(214);
      END_STATE();
    case 207:
      if (lookahead == 's')
        ADVANCE(215);
      END_STATE();
    case 208:
      if (lookahead == 'e')
        ADVANCE(216);
      END_STATE();
    case 209:
      if (lookahead == 'l')
        ADVANCE(217);
      END_STATE();
    case 210:
      if (lookahead == 'o')
        ADVANCE(218);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 214:
      if (lookahead == 'g')
        ADVANCE(219);
      END_STATE();
    case 215:
      if (lookahead == 'e')
        ADVANCE(220);
      END_STATE();
    case 216:
      if (lookahead == 't')
        ADVANCE(221);
      END_STATE();
    case 217:
      if (lookahead == 'i')
        ADVANCE(222);
      END_STATE();
    case 218:
      if (lookahead == 'u')
        ADVANCE(223);
      END_STATE();
    case 219:
      if (lookahead == 'e')
        ADVANCE(224);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 221:
      if (lookahead == 'h')
        ADVANCE(225);
      END_STATE();
    case 222:
      if (lookahead == 'n')
        ADVANCE(226);
      END_STATE();
    case 223:
      if (lookahead == 'n')
        ADVANCE(227);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__string_style);
      END_STATE();
    case 225:
      if (lookahead == 'r')
        ADVANCE(228);
      END_STATE();
    case 226:
      if (lookahead == 'e')
        ADVANCE(229);
      END_STATE();
    case 227:
      if (lookahead == 'd')
        ADVANCE(230);
      END_STATE();
    case 228:
      if (lookahead == 'o')
        ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 230:
      if (lookahead == '-')
        ADVANCE(232);
      END_STATE();
    case 231:
      if (lookahead == 'u')
        ADVANCE(233);
      END_STATE();
    case 232:
      if (lookahead == 'c')
        ADVANCE(234);
      END_STATE();
    case 233:
      if (lookahead == 'g')
        ADVANCE(235);
      END_STATE();
    case 234:
      if (lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 235:
      if (lookahead == 'h')
        ADVANCE(237);
      END_STATE();
    case 236:
      if (lookahead == 'l')
        ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      END_STATE();
    case 238:
      if (lookahead == 'o')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'r')
        ADVANCE(240);
      if (lookahead == 'u')
        ADVANCE(241);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      END_STATE();
    case 241:
      if (lookahead == 'r')
        ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      END_STATE();
    case 243:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(243);
      END_STATE();
    case 244:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(244);
      END_STATE();
    case 245:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      END_STATE();
    case 246:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 't')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(246);
      END_STATE();
    case 247:
      if (lookahead == 'a')
        ADVANCE(249);
      END_STATE();
    case 248:
      if (lookahead == 'r')
        ADVANCE(250);
      END_STATE();
    case 249:
      if (lookahead == 'l')
        ADVANCE(251);
      END_STATE();
    case 250:
      if (lookahead == 'u')
        ADVANCE(252);
      END_STATE();
    case 251:
      if (lookahead == 's')
        ADVANCE(253);
      END_STATE();
    case 252:
      if (lookahead == 'e')
        ADVANCE(254);
      END_STATE();
    case 253:
      if (lookahead == 'e')
        ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 256:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == '1')
        ADVANCE(257);
      if (lookahead == '2')
        ADVANCE(258);
      if (lookahead == 'b')
        ADVANCE(259);
      if (lookahead == 'c')
        ADVANCE(260);
      if (lookahead == 'g')
        ADVANCE(261);
      if (lookahead == 'p')
        ADVANCE(262);
      if (lookahead == 'r')
        ADVANCE(263);
      if (lookahead == 'w')
        ADVANCE(264);
      if (lookahead == 'y')
        ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(256);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '5')
        ADVANCE(267);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(266);
      END_STATE();
    case 259:
      if (lookahead == 'l')
        ADVANCE(269);
      END_STATE();
    case 260:
      if (lookahead == 'y')
        ADVANCE(270);
      END_STATE();
    case 261:
      if (lookahead == 'r')
        ADVANCE(271);
      END_STATE();
    case 262:
      if (lookahead == 'u')
        ADVANCE(272);
      END_STATE();
    case 263:
      if (lookahead == 'e')
        ADVANCE(273);
      END_STATE();
    case 264:
      if (lookahead == 'h')
        ADVANCE(274);
      END_STATE();
    case 265:
      if (lookahead == 'e')
        ADVANCE(275);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__rgb_color);
      END_STATE();
    case 269:
      if (lookahead == 'a')
        ADVANCE(276);
      if (lookahead == 'u')
        ADVANCE(277);
      END_STATE();
    case 270:
      if (lookahead == 'a')
        ADVANCE(278);
      END_STATE();
    case 271:
      if (lookahead == 'e')
        ADVANCE(279);
      END_STATE();
    case 272:
      if (lookahead == 'r')
        ADVANCE(280);
      END_STATE();
    case 273:
      if (lookahead == 'd')
        ADVANCE(281);
      END_STATE();
    case 274:
      if (lookahead == 'i')
        ADVANCE(282);
      END_STATE();
    case 275:
      if (lookahead == 'l')
        ADVANCE(283);
      END_STATE();
    case 276:
      if (lookahead == 'c')
        ADVANCE(284);
      END_STATE();
    case 277:
      if (lookahead == 'e')
        ADVANCE(285);
      END_STATE();
    case 278:
      if (lookahead == 'n')
        ADVANCE(286);
      END_STATE();
    case 279:
      if (lookahead == 'e')
        ADVANCE(287);
      END_STATE();
    case 280:
      if (lookahead == 'p')
        ADVANCE(288);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 282:
      if (lookahead == 't')
        ADVANCE(289);
      END_STATE();
    case 283:
      if (lookahead == 'l')
        ADVANCE(290);
      END_STATE();
    case 284:
      if (lookahead == 'k')
        ADVANCE(291);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 287:
      if (lookahead == 'n')
        ADVANCE(292);
      END_STATE();
    case 288:
      if (lookahead == 'l')
        ADVANCE(293);
      END_STATE();
    case 289:
      if (lookahead == 'e')
        ADVANCE(294);
      END_STATE();
    case 290:
      if (lookahead == 'o')
        ADVANCE(295);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 293:
      if (lookahead == 'e')
        ADVANCE(296);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 295:
      if (lookahead == 'w')
        ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_purple);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 298:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(159);
      if (lookahead == 'c')
        ADVANCE(160);
      if (lookahead == 'd')
        ADVANCE(161);
      if (lookahead == 'h')
        ADVANCE(162);
      if (lookahead == 'i')
        ADVANCE(163);
      if (lookahead == 'l')
        ADVANCE(164);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 's')
        ADVANCE(166);
      if (lookahead == 'u')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      END_STATE();
    case 299:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(299);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 157},
  [2] = {.lex_state = 157},
  [3] = {.lex_state = 157},
  [4] = {.lex_state = 157},
  [5] = {.lex_state = 157},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 157},
  [8] = {.lex_state = 157},
  [9] = {.lex_state = 157},
  [10] = {.lex_state = 157},
  [11] = {.lex_state = 157},
  [12] = {.lex_state = 157},
  [13] = {.lex_state = 157},
  [14] = {.lex_state = 157},
  [15] = {.lex_state = 158},
  [16] = {.lex_state = 158},
  [17] = {.lex_state = 157},
  [18] = {.lex_state = 157},
  [19] = {.lex_state = 157},
  [20] = {.lex_state = 243},
  [21] = {.lex_state = 243},
  [22] = {.lex_state = 243},
  [23] = {.lex_state = 244},
  [24] = {.lex_state = 243},
  [25] = {.lex_state = 243},
  [26] = {.lex_state = 158},
  [27] = {.lex_state = 245},
  [28] = {.lex_state = 245},
  [29] = {.lex_state = 157},
  [30] = {.lex_state = 158},
  [31] = {.lex_state = 246},
  [32] = {.lex_state = 256},
  [33] = {.lex_state = 157},
  [34] = {.lex_state = 298},
  [35] = {.lex_state = 157},
  [36] = {.lex_state = 299},
  [37] = {.lex_state = 299},
  [38] = {.lex_state = 299},
  [39] = {.lex_state = 299},
  [40] = {.lex_state = 299},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__color_index] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
    [sym__string_style] = ACTIONS(1),
    [anon_sym_background_DASHcolor] = ACTIONS(1),
    [anon_sym_colour] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_PIPE] = ACTIONS(1),
    [anon_sym_strikethrough] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [sym__rgb_color] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE_RBRACE] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_dim] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [sym__unquoted_string] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_background_DASHcolour] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_blink] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
  },
  [1] = {
    [sym_selector] = STATE(4),
    [sym__terminal_selector] = STATE(5),
    [sym_token] = STATE(5),
    [sym_stylesheet] = STATE(6),
    [aux_sym_stylesheet_repeat1] = STATE(8),
    [sym__selector_node] = STATE(7),
    [sym__selector_scope] = STATE(7),
    [sym_rule] = STATE(8),
    [sym__selectors] = STATE(9),
    [sym_direct_child] = STATE(7),
    [sym_node_kind] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__quoted_string] = ACTIONS(7),
    [sym__unquoted_string] = ACTIONS(9),
  },
  [2] = {
    [anon_sym_LBRACE_PIPE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym__unquoted_string] = ACTIONS(11),
  },
  [3] = {
    [anon_sym_LBRACE_PIPE] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
  },
  [4] = {
    [anon_sym_LBRACE_PIPE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [5] = {
    [anon_sym_LBRACE_PIPE] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [6] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [7] = {
    [sym__selector_node] = STATE(12),
    [sym__terminal_selector] = STATE(13),
    [sym_token] = STATE(13),
    [sym_direct_child] = STATE(12),
    [sym_node_kind] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(9),
    [sym__quoted_string] = ACTIONS(7),
  },
  [8] = {
    [sym_selector] = STATE(4),
    [sym__terminal_selector] = STATE(5),
    [sym_token] = STATE(5),
    [aux_sym_stylesheet_repeat1] = STATE(14),
    [sym__selector_node] = STATE(7),
    [sym__selector_scope] = STATE(7),
    [sym_rule] = STATE(14),
    [sym__selectors] = STATE(9),
    [sym_direct_child] = STATE(7),
    [sym_node_kind] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym__quoted_string] = ACTIONS(7),
    [sym__unquoted_string] = ACTIONS(9),
  },
  [9] = {
    [sym__style_block] = STATE(17),
    [sym_styles] = STATE(17),
    [sym_important_styles] = STATE(17),
    [anon_sym_LBRACE_PIPE] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(35),
  },
  [10] = {
    [anon_sym_LBRACE_PIPE] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym__unquoted_string] = ACTIONS(41),
  },
  [11] = {
    [sym_selector] = STATE(4),
    [sym__terminal_selector] = STATE(5),
    [sym_token] = STATE(5),
    [sym__selector_scope] = STATE(7),
    [sym__selector_node] = STATE(7),
    [sym__selectors] = STATE(19),
    [sym_direct_child] = STATE(7),
    [sym_node_kind] = STATE(10),
    [anon_sym_LBRACE_PIPE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [sym__quoted_string] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym__unquoted_string] = ACTIONS(9),
  },
  [12] = {
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(49),
    [sym__quoted_string] = ACTIONS(49),
  },
  [13] = {
    [anon_sym_LBRACE_PIPE] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
  },
  [14] = {
    [sym_selector] = STATE(4),
    [sym__terminal_selector] = STATE(5),
    [sym_token] = STATE(5),
    [aux_sym_stylesheet_repeat1] = STATE(14),
    [sym__selector_node] = STATE(7),
    [sym__selector_scope] = STATE(7),
    [sym_rule] = STATE(14),
    [sym__selectors] = STATE(9),
    [sym_direct_child] = STATE(7),
    [sym_node_kind] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym__quoted_string] = ACTIONS(57),
    [sym__unquoted_string] = ACTIONS(60),
  },
  [15] = {
    [sym_style] = STATE(23),
    [sym__boolean_style] = STATE(24),
    [sym__color_style] = STATE(25),
    [sym__style_list] = STATE(26),
    [anon_sym_bold] = ACTIONS(63),
    [anon_sym_color] = ACTIONS(65),
    [anon_sym_strikethrough] = ACTIONS(63),
    [sym__string_style] = ACTIONS(67),
    [anon_sym_background_DASHcolour] = ACTIONS(65),
    [anon_sym_hidden] = ACTIONS(63),
    [anon_sym_dim] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [anon_sym_italic] = ACTIONS(63),
    [anon_sym_background_DASHcolor] = ACTIONS(65),
    [anon_sym_colour] = ACTIONS(65),
    [anon_sym_reverse] = ACTIONS(63),
    [anon_sym_underline] = ACTIONS(63),
    [anon_sym_blink] = ACTIONS(63),
  },
  [16] = {
    [sym_style] = STATE(27),
    [sym__boolean_style] = STATE(24),
    [sym__color_style] = STATE(25),
    [sym__style_list] = STATE(28),
    [anon_sym_bold] = ACTIONS(63),
    [anon_sym_color] = ACTIONS(65),
    [anon_sym_strikethrough] = ACTIONS(63),
    [sym__string_style] = ACTIONS(67),
    [anon_sym_background_DASHcolour] = ACTIONS(65),
    [anon_sym_hidden] = ACTIONS(63),
    [anon_sym_dim] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [anon_sym_italic] = ACTIONS(63),
    [anon_sym_background_DASHcolor] = ACTIONS(65),
    [anon_sym_colour] = ACTIONS(65),
    [anon_sym_reverse] = ACTIONS(63),
    [anon_sym_underline] = ACTIONS(63),
    [anon_sym_blink] = ACTIONS(63),
  },
  [17] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym__quoted_string] = ACTIONS(69),
    [sym__unquoted_string] = ACTIONS(69),
  },
  [18] = {
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(71),
    [sym__quoted_string] = ACTIONS(71),
  },
  [19] = {
    [anon_sym_LBRACE_PIPE] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(75),
  },
  [20] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(77),
  },
  [21] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(79),
  },
  [22] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(81),
  },
  [23] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(87),
  },
  [25] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(89),
  },
  [26] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(83),
  },
  [28] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(95),
  },
  [29] = {
    [sym__string_value] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(97),
    [sym__quoted_string] = ACTIONS(97),
  },
  [30] = {
    [sym_style] = STATE(23),
    [sym__boolean_style] = STATE(24),
    [sym__color_style] = STATE(25),
    [sym__style_list] = STATE(38),
    [anon_sym_color] = ACTIONS(65),
    [sym__string_style] = ACTIONS(67),
    [anon_sym_PIPE_RBRACE] = ACTIONS(99),
    [anon_sym_hidden] = ACTIONS(63),
    [anon_sym_dim] = ACTIONS(63),
    [anon_sym_italic] = ACTIONS(63),
    [anon_sym_background_DASHcolor] = ACTIONS(65),
    [anon_sym_colour] = ACTIONS(65),
    [anon_sym_strikethrough] = ACTIONS(63),
    [anon_sym_background_DASHcolour] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_blink] = ACTIONS(63),
    [anon_sym_underline] = ACTIONS(63),
    [anon_sym_reverse] = ACTIONS(63),
    [anon_sym_bold] = ACTIONS(63),
  },
  [31] = {
    [sym__boolean_value] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(101),
  },
  [32] = {
    [sym__color_value] = STATE(37),
    [sym__color_literal] = STATE(40),
    [sym__color_index] = ACTIONS(103),
    [anon_sym_green] = ACTIONS(103),
    [anon_sym_cyan] = ACTIONS(103),
    [anon_sym_yellow] = ACTIONS(103),
    [sym__rgb_color] = ACTIONS(103),
    [anon_sym_purple] = ACTIONS(103),
    [anon_sym_red] = ACTIONS(103),
    [anon_sym_black] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [anon_sym_blue] = ACTIONS(103),
    [anon_sym_white] = ACTIONS(103),
  },
  [33] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym__quoted_string] = ACTIONS(105),
    [sym__unquoted_string] = ACTIONS(105),
  },
  [34] = {
    [sym_style] = STATE(27),
    [sym__boolean_style] = STATE(24),
    [sym__color_style] = STATE(25),
    [sym__style_list] = STATE(38),
    [anon_sym_color] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(99),
    [sym__string_style] = ACTIONS(67),
    [anon_sym_hidden] = ACTIONS(63),
    [anon_sym_dim] = ACTIONS(63),
    [anon_sym_italic] = ACTIONS(63),
    [anon_sym_background_DASHcolor] = ACTIONS(65),
    [anon_sym_colour] = ACTIONS(65),
    [anon_sym_strikethrough] = ACTIONS(63),
    [anon_sym_background_DASHcolour] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_blink] = ACTIONS(63),
    [anon_sym_underline] = ACTIONS(63),
    [anon_sym_reverse] = ACTIONS(63),
    [anon_sym_bold] = ACTIONS(63),
  },
  [35] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym__quoted_string] = ACTIONS(107),
    [sym__unquoted_string] = ACTIONS(107),
  },
  [36] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_PIPE_RBRACE] = ACTIONS(109),
  },
  [37] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_PIPE_RBRACE] = ACTIONS(111),
  },
  [38] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(113),
  },
  [39] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_PIPE_RBRACE] = ACTIONS(115),
  },
  [40] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_PIPE_RBRACE] = ACTIONS(117),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_node_kind, 1),
  [13] = {.count = 1, .reusable = false}, REDUCE(sym_node_kind, 1),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [17] = {.count = 1, .reusable = false}, REDUCE(sym_token, 1),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 1),
  [29] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = false}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym__terminal_selector, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym__selector_node, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym__terminal_selector, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 2),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym__selector_scope, 2),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [63] = {.count = 1, .reusable = true}, SHIFT(20),
  [65] = {.count = 1, .reusable = true}, SHIFT(21),
  [67] = {.count = 1, .reusable = true}, SHIFT(22),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_direct_child, 2),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 3),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 3),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_style, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym__color_style, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(29),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym__style_list, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(30),
  [87] = {.count = 1, .reusable = true}, SHIFT(31),
  [89] = {.count = 1, .reusable = true}, SHIFT(32),
  [91] = {.count = 1, .reusable = true}, SHIFT(33),
  [93] = {.count = 1, .reusable = true}, SHIFT(34),
  [95] = {.count = 1, .reusable = true}, SHIFT(35),
  [97] = {.count = 1, .reusable = true}, SHIFT(36),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym__style_list, 2),
  [101] = {.count = 1, .reusable = true}, SHIFT(39),
  [103] = {.count = 1, .reusable = true}, SHIFT(40),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_important_styles, 3),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 3),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym__string_value, 1),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_style, 3),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__style_list, 3),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_value, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__color_value, 1),
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
