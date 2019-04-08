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
#define STATE_COUNT 49
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_COMMA = 1,
  anon_sym_GT = 2,
  anon_sym_DOT = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_LBRACE_PIPE = 8,
  anon_sym_PIPE_RBRACE = 9,
  anon_sym_SEMI = 10,
  anon_sym_COLON = 11,
  anon_sym_colour = 12,
  anon_sym_color = 13,
  anon_sym_background_DASHcolour = 14,
  anon_sym_background_DASHcolor = 15,
  anon_sym_red = 16,
  anon_sym_blue = 17,
  anon_sym_green = 18,
  anon_sym_purple = 19,
  anon_sym_yellow = 20,
  anon_sym_black = 21,
  anon_sym_white = 22,
  anon_sym_cyan = 23,
  sym__color_index = 24,
  sym__rgb_color = 25,
  anon_sym_italic = 26,
  anon_sym_bold = 27,
  anon_sym_underline = 28,
  anon_sym_strikethrough = 29,
  anon_sym_hidden = 30,
  anon_sym_blink = 31,
  anon_sym_dim = 32,
  anon_sym_reverse = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  anon_sym_language = 36,
  anon_sym_content = 37,
  sym_comment = 38,
  sym_regex = 39,
  sym__unquoted_string = 40,
  sym__quoted_string = 41,
  sym_stylesheet = 42,
  sym_rule = 43,
  sym__selectors = 44,
  sym_selector = 45,
  sym__terminal_selector = 46,
  sym__selector_scope = 47,
  sym__selector_node = 48,
  sym__simple_terminal = 49,
  sym__complex_terminal = 50,
  sym__simple_node = 51,
  sym__complex_node = 52,
  sym_direct_child = 53,
  sym_direct_terminal = 54,
  sym_no_children = 55,
  sym_branch_check = 56,
  sym_node_kind = 57,
  sym_token = 58,
  sym_token_pattern = 59,
  sym__style_block = 60,
  sym_styles = 61,
  sym_important_styles = 62,
  sym__style_list = 63,
  sym_style = 64,
  sym__color_style = 65,
  sym__color_value = 66,
  sym__color_literal = 67,
  sym__boolean_style = 68,
  sym__boolean_value = 69,
  sym__string_style = 70,
  sym__string_value = 71,
  aux_sym_stylesheet_repeat1 = 72,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_language] = "language",
  [anon_sym_content] = "content",
  [sym_comment] = "comment",
  [sym_regex] = "regex",
  [sym__unquoted_string] = "_unquoted_string",
  [sym__quoted_string] = "_quoted_string",
  [sym_stylesheet] = "stylesheet",
  [sym_rule] = "rule",
  [sym__selectors] = "_selectors",
  [sym_selector] = "selector",
  [sym__terminal_selector] = "_terminal_selector",
  [sym__selector_scope] = "_selector_scope",
  [sym__selector_node] = "_selector_node",
  [sym__simple_terminal] = "_simple_terminal",
  [sym__complex_terminal] = "_complex_terminal",
  [sym__simple_node] = "_simple_node",
  [sym__complex_node] = "_complex_node",
  [sym_direct_child] = "direct_child",
  [sym_direct_terminal] = "direct_child",
  [sym_no_children] = "no_children",
  [sym_branch_check] = "branch_check",
  [sym_node_kind] = "node_kind",
  [sym_token] = "token",
  [sym_token_pattern] = "token_pattern",
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
  [sym__string_style] = "style_name",
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
  [anon_sym_DOT] = {
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
  [anon_sym_language] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_content] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
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
  [sym__simple_terminal] = {
    .visible = false,
    .named = true,
  },
  [sym__complex_terminal] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_node] = {
    .visible = false,
    .named = true,
  },
  [sym__complex_node] = {
    .visible = false,
    .named = true,
  },
  [sym_direct_child] = {
    .visible = true,
    .named = true,
  },
  [sym_direct_terminal] = {
    .visible = true,
    .named = true,
  },
  [sym_no_children] = {
    .visible = true,
    .named = true,
  },
  [sym_branch_check] = {
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
  [sym_token_pattern] = {
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
  [sym__string_style] = {
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
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '1')
        ADVANCE(7);
      if (lookahead == '2')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == 'b')
        ADVANCE(14);
      if (lookahead == 'c')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(16);
      if (lookahead == 'f')
        ADVANCE(17);
      if (lookahead == 'g')
        ADVANCE(18);
      if (lookahead == 'h')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(20);
      if (lookahead == 'l')
        ADVANCE(21);
      if (lookahead == 'p')
        ADVANCE(22);
      if (lookahead == 'r')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 't')
        ADVANCE(25);
      if (lookahead == 'u')
        ADVANCE(26);
      if (lookahead == 'w')
        ADVANCE(27);
      if (lookahead == 'y')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\\')
        ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(35);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 6:
      if (lookahead == '*')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(40);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '5')
        ADVANCE(41);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(32);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == 'l')
        ADVANCE(44);
      if (lookahead == 'o')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(46);
      if (lookahead == 'y')
        ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h')
        ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '|')
        ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == '}')
        ADVANCE(62);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '"')
        ADVANCE(63);
      if (lookahead == '\\')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == '*')
        ADVANCE(65);
      if (lookahead == '/')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(67);
      if (lookahead != 0)
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '/')
        ADVANCE(68);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(42);
      if (lookahead == '-' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(70);
      if (lookahead == 'i')
        ADVANCE(71);
      if (lookahead == 'u')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(74);
      if (lookahead == 'n')
        ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'm')
        ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(84);
      if (lookahead == 'v')
        ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == '*')
        ADVANCE(65);
      if (lookahead == '/')
        ADVANCE(92);
      if (lookahead == '\\')
        ADVANCE(93);
      if (lookahead != 0)
        ADVANCE(94);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == '*')
        ADVANCE(95);
      if (lookahead == 'i')
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(97);
      END_STATE();
    case 67:
      if (lookahead == '\n')
        ADVANCE(97);
      if (lookahead == '*')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(37);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == 'i')
        ADVANCE(98);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_dim);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's')
        ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'p')
        ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(119);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'i')
        ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == '\n')
        ADVANCE(97);
      if (lookahead == '*')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == '*')
        ADVANCE(65);
      if (lookahead == '/')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(93);
      if (lookahead != 0)
        ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == '*')
        ADVANCE(95);
      if (lookahead == '/')
        ADVANCE(120);
      if (lookahead != 0)
        ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == '*')
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == '*')
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 'u')
        ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_cyan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(138);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_blink);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's')
        ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_white);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'w')
        ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(150);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_italic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_purple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__color_index);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h')
        ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_underline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h')
        ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 177:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(177);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 178:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 179:
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      END_STATE();
    case 180:
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '/')
        ADVANCE(38);
      END_STATE();
    case 181:
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == 'b')
        ADVANCE(182);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(184);
      if (lookahead == 'h')
        ADVANCE(185);
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 'l')
        ADVANCE(187);
      if (lookahead == 'r')
        ADVANCE(188);
      if (lookahead == 's')
        ADVANCE(189);
      if (lookahead == 'u')
        ADVANCE(190);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(181);
      END_STATE();
    case 182:
      if (lookahead == 'a')
        ADVANCE(191);
      if (lookahead == 'l')
        ADVANCE(192);
      if (lookahead == 'o')
        ADVANCE(193);
      END_STATE();
    case 183:
      if (lookahead == 'o')
        ADVANCE(194);
      END_STATE();
    case 184:
      if (lookahead == 'i')
        ADVANCE(195);
      END_STATE();
    case 185:
      if (lookahead == 'i')
        ADVANCE(196);
      END_STATE();
    case 186:
      if (lookahead == 't')
        ADVANCE(197);
      END_STATE();
    case 187:
      if (lookahead == 'a')
        ADVANCE(198);
      END_STATE();
    case 188:
      if (lookahead == 'e')
        ADVANCE(199);
      END_STATE();
    case 189:
      if (lookahead == 't')
        ADVANCE(200);
      END_STATE();
    case 190:
      if (lookahead == 'n')
        ADVANCE(201);
      END_STATE();
    case 191:
      if (lookahead == 'c')
        ADVANCE(202);
      END_STATE();
    case 192:
      if (lookahead == 'i')
        ADVANCE(203);
      END_STATE();
    case 193:
      if (lookahead == 'l')
        ADVANCE(204);
      END_STATE();
    case 194:
      if (lookahead == 'l')
        ADVANCE(205);
      if (lookahead == 'n')
        ADVANCE(206);
      END_STATE();
    case 195:
      if (lookahead == 'm')
        ADVANCE(207);
      END_STATE();
    case 196:
      if (lookahead == 'd')
        ADVANCE(208);
      END_STATE();
    case 197:
      if (lookahead == 'a')
        ADVANCE(209);
      END_STATE();
    case 198:
      if (lookahead == 'n')
        ADVANCE(210);
      END_STATE();
    case 199:
      if (lookahead == 'v')
        ADVANCE(211);
      END_STATE();
    case 200:
      if (lookahead == 'r')
        ADVANCE(212);
      END_STATE();
    case 201:
      if (lookahead == 'd')
        ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == 'k')
        ADVANCE(214);
      END_STATE();
    case 203:
      if (lookahead == 'n')
        ADVANCE(215);
      END_STATE();
    case 204:
      if (lookahead == 'd')
        ADVANCE(216);
      END_STATE();
    case 205:
      if (lookahead == 'o')
        ADVANCE(217);
      END_STATE();
    case 206:
      if (lookahead == 't')
        ADVANCE(218);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 208:
      if (lookahead == 'd')
        ADVANCE(219);
      END_STATE();
    case 209:
      if (lookahead == 'l')
        ADVANCE(220);
      END_STATE();
    case 210:
      if (lookahead == 'g')
        ADVANCE(221);
      END_STATE();
    case 211:
      if (lookahead == 'e')
        ADVANCE(222);
      END_STATE();
    case 212:
      if (lookahead == 'i')
        ADVANCE(223);
      END_STATE();
    case 213:
      if (lookahead == 'e')
        ADVANCE(224);
      END_STATE();
    case 214:
      if (lookahead == 'g')
        ADVANCE(225);
      END_STATE();
    case 215:
      if (lookahead == 'k')
        ADVANCE(226);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 217:
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 'u')
        ADVANCE(228);
      END_STATE();
    case 218:
      if (lookahead == 'e')
        ADVANCE(229);
      END_STATE();
    case 219:
      if (lookahead == 'e')
        ADVANCE(230);
      END_STATE();
    case 220:
      if (lookahead == 'i')
        ADVANCE(231);
      END_STATE();
    case 221:
      if (lookahead == 'u')
        ADVANCE(232);
      END_STATE();
    case 222:
      if (lookahead == 'r')
        ADVANCE(233);
      END_STATE();
    case 223:
      if (lookahead == 'k')
        ADVANCE(234);
      END_STATE();
    case 224:
      if (lookahead == 'r')
        ADVANCE(235);
      END_STATE();
    case 225:
      if (lookahead == 'r')
        ADVANCE(236);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_blink);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 228:
      if (lookahead == 'r')
        ADVANCE(237);
      END_STATE();
    case 229:
      if (lookahead == 'n')
        ADVANCE(238);
      END_STATE();
    case 230:
      if (lookahead == 'n')
        ADVANCE(239);
      END_STATE();
    case 231:
      if (lookahead == 'c')
        ADVANCE(240);
      END_STATE();
    case 232:
      if (lookahead == 'a')
        ADVANCE(241);
      END_STATE();
    case 233:
      if (lookahead == 's')
        ADVANCE(242);
      END_STATE();
    case 234:
      if (lookahead == 'e')
        ADVANCE(243);
      END_STATE();
    case 235:
      if (lookahead == 'l')
        ADVANCE(244);
      END_STATE();
    case 236:
      if (lookahead == 'o')
        ADVANCE(245);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 238:
      if (lookahead == 't')
        ADVANCE(246);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 241:
      if (lookahead == 'g')
        ADVANCE(247);
      END_STATE();
    case 242:
      if (lookahead == 'e')
        ADVANCE(248);
      END_STATE();
    case 243:
      if (lookahead == 't')
        ADVANCE(249);
      END_STATE();
    case 244:
      if (lookahead == 'i')
        ADVANCE(250);
      END_STATE();
    case 245:
      if (lookahead == 'u')
        ADVANCE(251);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_content);
      END_STATE();
    case 247:
      if (lookahead == 'e')
        ADVANCE(252);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 249:
      if (lookahead == 'h')
        ADVANCE(253);
      END_STATE();
    case 250:
      if (lookahead == 'n')
        ADVANCE(254);
      END_STATE();
    case 251:
      if (lookahead == 'n')
        ADVANCE(255);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_language);
      END_STATE();
    case 253:
      if (lookahead == 'r')
        ADVANCE(256);
      END_STATE();
    case 254:
      if (lookahead == 'e')
        ADVANCE(257);
      END_STATE();
    case 255:
      if (lookahead == 'd')
        ADVANCE(258);
      END_STATE();
    case 256:
      if (lookahead == 'o')
        ADVANCE(259);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 258:
      if (lookahead == '-')
        ADVANCE(260);
      END_STATE();
    case 259:
      if (lookahead == 'u')
        ADVANCE(261);
      END_STATE();
    case 260:
      if (lookahead == 'c')
        ADVANCE(262);
      END_STATE();
    case 261:
      if (lookahead == 'g')
        ADVANCE(263);
      END_STATE();
    case 262:
      if (lookahead == 'o')
        ADVANCE(264);
      END_STATE();
    case 263:
      if (lookahead == 'h')
        ADVANCE(265);
      END_STATE();
    case 264:
      if (lookahead == 'l')
        ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      END_STATE();
    case 266:
      if (lookahead == 'o')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'r')
        ADVANCE(268);
      if (lookahead == 'u')
        ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      END_STATE();
    case 269:
      if (lookahead == 'r')
        ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      END_STATE();
    case 271:
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(271);
      END_STATE();
    case 272:
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      END_STATE();
    case 273:
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(273);
      END_STATE();
    case 274:
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == 'f')
        ADVANCE(275);
      if (lookahead == 't')
        ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(274);
      END_STATE();
    case 275:
      if (lookahead == 'a')
        ADVANCE(277);
      END_STATE();
    case 276:
      if (lookahead == 'r')
        ADVANCE(278);
      END_STATE();
    case 277:
      if (lookahead == 'l')
        ADVANCE(279);
      END_STATE();
    case 278:
      if (lookahead == 'u')
        ADVANCE(280);
      END_STATE();
    case 279:
      if (lookahead == 's')
        ADVANCE(281);
      END_STATE();
    case 280:
      if (lookahead == 'e')
        ADVANCE(282);
      END_STATE();
    case 281:
      if (lookahead == 'e')
        ADVANCE(283);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 284:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == '1')
        ADVANCE(285);
      if (lookahead == '2')
        ADVANCE(286);
      if (lookahead == 'b')
        ADVANCE(287);
      if (lookahead == 'c')
        ADVANCE(288);
      if (lookahead == 'g')
        ADVANCE(289);
      if (lookahead == 'p')
        ADVANCE(290);
      if (lookahead == 'r')
        ADVANCE(291);
      if (lookahead == 'w')
        ADVANCE(292);
      if (lookahead == 'y')
        ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(284);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(294);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(294);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '5')
        ADVANCE(295);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(294);
      END_STATE();
    case 287:
      if (lookahead == 'l')
        ADVANCE(297);
      END_STATE();
    case 288:
      if (lookahead == 'y')
        ADVANCE(298);
      END_STATE();
    case 289:
      if (lookahead == 'r')
        ADVANCE(299);
      END_STATE();
    case 290:
      if (lookahead == 'u')
        ADVANCE(300);
      END_STATE();
    case 291:
      if (lookahead == 'e')
        ADVANCE(301);
      END_STATE();
    case 292:
      if (lookahead == 'h')
        ADVANCE(302);
      END_STATE();
    case 293:
      if (lookahead == 'e')
        ADVANCE(303);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__rgb_color);
      END_STATE();
    case 297:
      if (lookahead == 'a')
        ADVANCE(304);
      if (lookahead == 'u')
        ADVANCE(305);
      END_STATE();
    case 298:
      if (lookahead == 'a')
        ADVANCE(306);
      END_STATE();
    case 299:
      if (lookahead == 'e')
        ADVANCE(307);
      END_STATE();
    case 300:
      if (lookahead == 'r')
        ADVANCE(308);
      END_STATE();
    case 301:
      if (lookahead == 'd')
        ADVANCE(309);
      END_STATE();
    case 302:
      if (lookahead == 'i')
        ADVANCE(310);
      END_STATE();
    case 303:
      if (lookahead == 'l')
        ADVANCE(311);
      END_STATE();
    case 304:
      if (lookahead == 'c')
        ADVANCE(312);
      END_STATE();
    case 305:
      if (lookahead == 'e')
        ADVANCE(313);
      END_STATE();
    case 306:
      if (lookahead == 'n')
        ADVANCE(314);
      END_STATE();
    case 307:
      if (lookahead == 'e')
        ADVANCE(315);
      END_STATE();
    case 308:
      if (lookahead == 'p')
        ADVANCE(316);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 310:
      if (lookahead == 't')
        ADVANCE(317);
      END_STATE();
    case 311:
      if (lookahead == 'l')
        ADVANCE(318);
      END_STATE();
    case 312:
      if (lookahead == 'k')
        ADVANCE(319);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 315:
      if (lookahead == 'n')
        ADVANCE(320);
      END_STATE();
    case 316:
      if (lookahead == 'l')
        ADVANCE(321);
      END_STATE();
    case 317:
      if (lookahead == 'e')
        ADVANCE(322);
      END_STATE();
    case 318:
      if (lookahead == 'o')
        ADVANCE(323);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 321:
      if (lookahead == 'e')
        ADVANCE(324);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 323:
      if (lookahead == 'w')
        ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_purple);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 326:
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == 'b')
        ADVANCE(182);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(184);
      if (lookahead == 'h')
        ADVANCE(185);
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 'l')
        ADVANCE(187);
      if (lookahead == 'r')
        ADVANCE(188);
      if (lookahead == 's')
        ADVANCE(189);
      if (lookahead == 'u')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(326);
      END_STATE();
    case 327:
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(327);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 177},
  [2] = {.lex_state = 177},
  [3] = {.lex_state = 177},
  [4] = {.lex_state = 177},
  [5] = {.lex_state = 177},
  [6] = {.lex_state = 177},
  [7] = {.lex_state = 177},
  [8] = {.lex_state = 178},
  [9] = {.lex_state = 177},
  [10] = {.lex_state = 177},
  [11] = {.lex_state = 178},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 177},
  [14] = {.lex_state = 177},
  [15] = {.lex_state = 177},
  [16] = {.lex_state = 179},
  [17] = {.lex_state = 177},
  [18] = {.lex_state = 178},
  [19] = {.lex_state = 177},
  [20] = {.lex_state = 181},
  [21] = {.lex_state = 181},
  [22] = {.lex_state = 177},
  [23] = {.lex_state = 177},
  [24] = {.lex_state = 177},
  [25] = {.lex_state = 177},
  [26] = {.lex_state = 178},
  [27] = {.lex_state = 271},
  [28] = {.lex_state = 271},
  [29] = {.lex_state = 271},
  [30] = {.lex_state = 272},
  [31] = {.lex_state = 271},
  [32] = {.lex_state = 271},
  [33] = {.lex_state = 271},
  [34] = {.lex_state = 181},
  [35] = {.lex_state = 273},
  [36] = {.lex_state = 273},
  [37] = {.lex_state = 181},
  [38] = {.lex_state = 177},
  [39] = {.lex_state = 274},
  [40] = {.lex_state = 284},
  [41] = {.lex_state = 177},
  [42] = {.lex_state = 326},
  [43] = {.lex_state = 177},
  [44] = {.lex_state = 327},
  [45] = {.lex_state = 327},
  [46] = {.lex_state = 327},
  [47] = {.lex_state = 327},
  [48] = {.lex_state = 327},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_language] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_colour] = ACTIONS(1),
    [anon_sym_PIPE_RBRACE] = ACTIONS(1),
    [anon_sym_background_DASHcolour] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE_PIPE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_blink] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_background_DASHcolor] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_dim] = ACTIONS(1),
    [anon_sym_strikethrough] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym__unquoted_string] = ACTIONS(1),
    [anon_sym_content] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [sym__rgb_color] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [sym__color_index] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_stylesheet_repeat1] = STATE(7),
    [sym_selector] = STATE(8),
    [sym__terminal_selector] = STATE(9),
    [sym__simple_node] = STATE(13),
    [sym__complex_node] = STATE(13),
    [sym_node_kind] = STATE(10),
    [sym_token] = STATE(9),
    [sym_rule] = STATE(7),
    [sym__selectors] = STATE(11),
    [sym__simple_terminal] = STATE(9),
    [sym__complex_terminal] = STATE(9),
    [sym_no_children] = STATE(9),
    [sym_branch_check] = STATE(13),
    [sym_stylesheet] = STATE(12),
    [sym__selector_scope] = STATE(13),
    [sym__selector_node] = STATE(13),
    [sym_direct_child] = STATE(13),
    [sym_direct_terminal] = STATE(9),
    [sym_token_pattern] = STATE(9),
    [anon_sym_GT] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_regex] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym__quoted_string] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(15),
  },
  [2] = {
    [sym_branch_check] = STATE(15),
    [sym__simple_terminal] = STATE(14),
    [sym_token_pattern] = STATE(14),
    [sym__simple_node] = STATE(15),
    [sym_node_kind] = STATE(10),
    [sym_token] = STATE(14),
    [sym_no_children] = STATE(14),
    [sym_regex] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym__quoted_string] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(15),
  },
  [3] = {
    [anon_sym_RBRACK] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
    [anon_sym_LBRACE_PIPE] = ACTIONS(17),
  },
  [4] = {
    [sym_selector] = STATE(16),
    [sym__terminal_selector] = STATE(9),
    [sym__simple_node] = STATE(13),
    [sym__complex_node] = STATE(13),
    [sym_node_kind] = STATE(10),
    [sym_token] = STATE(9),
    [sym__simple_terminal] = STATE(9),
    [sym__complex_terminal] = STATE(9),
    [sym_no_children] = STATE(9),
    [sym_branch_check] = STATE(13),
    [sym__selector_scope] = STATE(13),
    [sym__selector_node] = STATE(13),
    [sym_direct_child] = STATE(13),
    [sym_direct_terminal] = STATE(9),
    [sym_token_pattern] = STATE(9),
    [anon_sym_GT] = ACTIONS(5),
    [sym_regex] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym__quoted_string] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(15),
  },
  [5] = {
    [anon_sym_RBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(21),
    [anon_sym_LBRACE_PIPE] = ACTIONS(23),
  },
  [6] = {
    [sym__unquoted_string] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(27),
    [sym_regex] = ACTIONS(29),
    [sym__quoted_string] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LBRACE_PIPE] = ACTIONS(27),
  },
  [7] = {
    [aux_sym_stylesheet_repeat1] = STATE(17),
    [sym_selector] = STATE(8),
    [sym__terminal_selector] = STATE(9),
    [sym__simple_node] = STATE(13),
    [sym__complex_node] = STATE(13),
    [sym_node_kind] = STATE(10),
    [sym_token] = STATE(9),
    [sym_rule] = STATE(17),
    [sym__selectors] = STATE(11),
    [sym__simple_terminal] = STATE(9),
    [sym__complex_terminal] = STATE(9),
    [sym_no_children] = STATE(9),
    [sym_branch_check] = STATE(13),
    [sym__selector_scope] = STATE(13),
    [sym__selector_node] = STATE(13),
    [sym_direct_child] = STATE(13),
    [sym_direct_terminal] = STATE(9),
    [sym_token_pattern] = STATE(9),
    [anon_sym_GT] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_regex] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym__quoted_string] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(15),
  },
  [8] = {
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_comment] = ACTIONS(21),
    [anon_sym_LBRACE_PIPE] = ACTIONS(37),
  },
  [9] = {
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(21),
    [anon_sym_LBRACE_PIPE] = ACTIONS(39),
  },
  [10] = {
    [anon_sym_LBRACE_PIPE] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(45),
    [sym_regex] = ACTIONS(49),
    [sym__quoted_string] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(51),
    [sym__unquoted_string] = ACTIONS(45),
  },
  [11] = {
    [sym__style_block] = STATE(22),
    [sym_styles] = STATE(22),
    [sym_important_styles] = STATE(22),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_comment] = ACTIONS(21),
    [anon_sym_LBRACE_PIPE] = ACTIONS(55),
  },
  [12] = {
    [sym_comment] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(57),
  },
  [13] = {
    [sym_branch_check] = STATE(24),
    [sym__terminal_selector] = STATE(23),
    [sym__simple_node] = STATE(24),
    [sym__complex_node] = STATE(24),
    [sym_node_kind] = STATE(10),
    [sym_token] = STATE(23),
    [sym__selector_node] = STATE(24),
    [sym_direct_child] = STATE(24),
    [sym_direct_terminal] = STATE(23),
    [sym_token_pattern] = STATE(23),
    [sym__simple_terminal] = STATE(23),
    [sym__complex_terminal] = STATE(23),
    [sym_no_children] = STATE(23),
    [anon_sym_GT] = ACTIONS(5),
    [sym_regex] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym__quoted_string] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(15),
  },
  [14] = {
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_comment] = ACTIONS(21),
    [anon_sym_LBRACE_PIPE] = ACTIONS(59),
  },
  [15] = {
    [anon_sym_GT] = ACTIONS(63),
    [sym_regex] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(63),
    [sym__quoted_string] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(63),
  },
  [16] = {
    [anon_sym_RBRACK] = ACTIONS(67),
    [sym_comment] = ACTIONS(21),
  },
  [17] = {
    [aux_sym_stylesheet_repeat1] = STATE(17),
    [sym_selector] = STATE(8),
    [sym__terminal_selector] = STATE(9),
    [sym__simple_node] = STATE(13),
    [sym__complex_node] = STATE(13),
    [sym_node_kind] = STATE(10),
    [sym_token] = STATE(9),
    [sym_rule] = STATE(17),
    [sym__selectors] = STATE(11),
    [sym__simple_terminal] = STATE(9),
    [sym__complex_terminal] = STATE(9),
    [sym_no_children] = STATE(9),
    [sym_branch_check] = STATE(13),
    [sym__selector_scope] = STATE(13),
    [sym__selector_node] = STATE(13),
    [sym_direct_child] = STATE(13),
    [sym_direct_terminal] = STATE(9),
    [sym_token_pattern] = STATE(9),
    [anon_sym_GT] = ACTIONS(69),
    [sym_regex] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(75),
    [sym__quoted_string] = ACTIONS(78),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(83),
  },
  [18] = {
    [sym_selector] = STATE(8),
    [sym__terminal_selector] = STATE(9),
    [sym__simple_node] = STATE(13),
    [sym__complex_node] = STATE(13),
    [sym_node_kind] = STATE(10),
    [sym_token] = STATE(9),
    [sym__selectors] = STATE(26),
    [sym__simple_terminal] = STATE(9),
    [sym__complex_terminal] = STATE(9),
    [sym_no_children] = STATE(9),
    [sym_branch_check] = STATE(13),
    [sym__selector_scope] = STATE(13),
    [sym__selector_node] = STATE(13),
    [sym_direct_child] = STATE(13),
    [sym_direct_terminal] = STATE(9),
    [sym_token_pattern] = STATE(9),
    [anon_sym_LBRACE_PIPE] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(5),
    [sym_regex] = ACTIONS(9),
    [sym__quoted_string] = ACTIONS(13),
    [sym__unquoted_string] = ACTIONS(15),
  },
  [19] = {
    [anon_sym_RBRACK] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(92),
    [sym_comment] = ACTIONS(21),
    [anon_sym_LBRACE_PIPE] = ACTIONS(90),
  },
  [20] = {
    [sym_style] = STATE(30),
    [sym__string_style] = STATE(31),
    [sym__boolean_style] = STATE(32),
    [sym__color_style] = STATE(33),
    [sym__style_list] = STATE(34),
    [anon_sym_background_DASHcolor] = ACTIONS(94),
    [anon_sym_language] = ACTIONS(96),
    [anon_sym_reverse] = ACTIONS(98),
    [sym_comment] = ACTIONS(21),
    [anon_sym_bold] = ACTIONS(98),
    [anon_sym_dim] = ACTIONS(98),
    [anon_sym_strikethrough] = ACTIONS(98),
    [anon_sym_colour] = ACTIONS(94),
    [anon_sym_background_DASHcolour] = ACTIONS(94),
    [anon_sym_content] = ACTIONS(96),
    [anon_sym_italic] = ACTIONS(98),
    [anon_sym_blink] = ACTIONS(98),
    [anon_sym_color] = ACTIONS(94),
    [anon_sym_underline] = ACTIONS(98),
    [anon_sym_hidden] = ACTIONS(98),
  },
  [21] = {
    [sym_style] = STATE(35),
    [sym__string_style] = STATE(31),
    [sym__boolean_style] = STATE(32),
    [sym__color_style] = STATE(33),
    [sym__style_list] = STATE(36),
    [anon_sym_background_DASHcolor] = ACTIONS(94),
    [anon_sym_language] = ACTIONS(96),
    [anon_sym_reverse] = ACTIONS(98),
    [sym_comment] = ACTIONS(21),
    [anon_sym_bold] = ACTIONS(98),
    [anon_sym_dim] = ACTIONS(98),
    [anon_sym_strikethrough] = ACTIONS(98),
    [anon_sym_colour] = ACTIONS(94),
    [anon_sym_background_DASHcolour] = ACTIONS(94),
    [anon_sym_content] = ACTIONS(96),
    [anon_sym_italic] = ACTIONS(98),
    [anon_sym_blink] = ACTIONS(98),
    [anon_sym_color] = ACTIONS(94),
    [anon_sym_underline] = ACTIONS(98),
    [anon_sym_hidden] = ACTIONS(98),
  },
  [22] = {
    [anon_sym_GT] = ACTIONS(100),
    [sym_regex] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym__quoted_string] = ACTIONS(100),
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(100),
  },
  [23] = {
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(21),
    [anon_sym_LBRACE_PIPE] = ACTIONS(104),
  },
  [24] = {
    [anon_sym_GT] = ACTIONS(108),
    [sym_regex] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(108),
    [sym__quoted_string] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(108),
  },
  [25] = {
    [anon_sym_GT] = ACTIONS(112),
    [sym_regex] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym__quoted_string] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(112),
  },
  [26] = {
    [anon_sym_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(21),
    [anon_sym_LBRACE_PIPE] = ACTIONS(118),
  },
  [27] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(120),
  },
  [28] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(122),
  },
  [29] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(124),
  },
  [30] = {
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(128),
    [sym_comment] = ACTIONS(21),
  },
  [31] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(130),
  },
  [32] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(132),
  },
  [33] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(134),
  },
  [34] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(136),
  },
  [35] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(128),
    [anon_sym_SEMI] = ACTIONS(138),
    [sym_comment] = ACTIONS(21),
  },
  [36] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(140),
    [sym_comment] = ACTIONS(21),
  },
  [37] = {
    [sym_style] = STATE(30),
    [sym__string_style] = STATE(31),
    [sym__boolean_style] = STATE(32),
    [sym__color_style] = STATE(33),
    [sym__style_list] = STATE(44),
    [anon_sym_background_DASHcolor] = ACTIONS(94),
    [anon_sym_language] = ACTIONS(96),
    [anon_sym_reverse] = ACTIONS(98),
    [sym_comment] = ACTIONS(21),
    [anon_sym_bold] = ACTIONS(98),
    [anon_sym_dim] = ACTIONS(98),
    [anon_sym_strikethrough] = ACTIONS(98),
    [anon_sym_colour] = ACTIONS(94),
    [anon_sym_background_DASHcolour] = ACTIONS(94),
    [anon_sym_content] = ACTIONS(96),
    [anon_sym_italic] = ACTIONS(98),
    [anon_sym_blink] = ACTIONS(98),
    [anon_sym_color] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_underline] = ACTIONS(98),
    [anon_sym_hidden] = ACTIONS(98),
  },
  [38] = {
    [sym__string_value] = STATE(46),
    [sym__quoted_string] = ACTIONS(144),
    [sym_comment] = ACTIONS(21),
    [sym__unquoted_string] = ACTIONS(144),
  },
  [39] = {
    [sym__boolean_value] = STATE(46),
    [anon_sym_true] = ACTIONS(146),
    [anon_sym_false] = ACTIONS(146),
    [sym_comment] = ACTIONS(21),
  },
  [40] = {
    [sym__color_value] = STATE(46),
    [sym__color_literal] = STATE(48),
    [anon_sym_black] = ACTIONS(148),
    [anon_sym_yellow] = ACTIONS(148),
    [anon_sym_blue] = ACTIONS(148),
    [anon_sym_white] = ACTIONS(148),
    [sym_comment] = ACTIONS(21),
    [anon_sym_red] = ACTIONS(148),
    [anon_sym_green] = ACTIONS(148),
    [anon_sym_cyan] = ACTIONS(148),
    [sym__rgb_color] = ACTIONS(148),
    [anon_sym_purple] = ACTIONS(148),
    [sym__color_index] = ACTIONS(148),
  },
  [41] = {
    [anon_sym_GT] = ACTIONS(150),
    [sym_regex] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(150),
    [sym__quoted_string] = ACTIONS(150),
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(150),
  },
  [42] = {
    [sym_style] = STATE(35),
    [sym__string_style] = STATE(31),
    [sym__boolean_style] = STATE(32),
    [sym__color_style] = STATE(33),
    [sym__style_list] = STATE(44),
    [anon_sym_background_DASHcolor] = ACTIONS(94),
    [anon_sym_language] = ACTIONS(96),
    [anon_sym_reverse] = ACTIONS(98),
    [sym_comment] = ACTIONS(21),
    [anon_sym_bold] = ACTIONS(98),
    [anon_sym_dim] = ACTIONS(98),
    [anon_sym_strikethrough] = ACTIONS(98),
    [anon_sym_colour] = ACTIONS(94),
    [anon_sym_PIPE_RBRACE] = ACTIONS(142),
    [anon_sym_background_DASHcolour] = ACTIONS(94),
    [anon_sym_content] = ACTIONS(96),
    [anon_sym_italic] = ACTIONS(98),
    [anon_sym_blink] = ACTIONS(98),
    [anon_sym_color] = ACTIONS(94),
    [anon_sym_underline] = ACTIONS(98),
    [anon_sym_hidden] = ACTIONS(98),
  },
  [43] = {
    [anon_sym_GT] = ACTIONS(154),
    [sym_regex] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(154),
    [sym__quoted_string] = ACTIONS(154),
    [ts_builtin_sym_end] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(154),
  },
  [44] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(158),
    [sym_comment] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(158),
  },
  [45] = {
    [anon_sym_SEMI] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_PIPE_RBRACE] = ACTIONS(160),
    [sym_comment] = ACTIONS(21),
  },
  [46] = {
    [anon_sym_SEMI] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_PIPE_RBRACE] = ACTIONS(162),
    [sym_comment] = ACTIONS(21),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_PIPE_RBRACE] = ACTIONS(164),
    [sym_comment] = ACTIONS(21),
  },
  [48] = {
    [anon_sym_SEMI] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_PIPE_RBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(21),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_token_pattern, 1),
  [19] = {.count = 1, .reusable = false}, REDUCE(sym_token_pattern, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_token, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_node_kind, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_node_kind, 1),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym__simple_terminal, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym__simple_node, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym__simple_terminal, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym__simple_node, 1),
  [51] = {.count = 1, .reusable = true}, SHIFT(19),
  [53] = {.count = 1, .reusable = false}, SHIFT(20),
  [55] = {.count = 1, .reusable = true}, SHIFT(21),
  [57] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_direct_terminal, 2),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_direct_terminal, 2),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_direct_child, 2),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_direct_child, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(25),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [72] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [81] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 2),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 2),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_no_children, 2),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_no_children, 2),
  [94] = {.count = 1, .reusable = true}, SHIFT(29),
  [96] = {.count = 1, .reusable = true}, SHIFT(27),
  [98] = {.count = 1, .reusable = true}, SHIFT(28),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym__selector_scope, 2),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym__selector_scope, 2),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_branch_check, 3),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_branch_check, 3),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 3),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 3),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym__string_style, 1),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_style, 1),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym__color_style, 1),
  [126] = {.count = 1, .reusable = true}, SHIFT(37),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym__style_list, 1),
  [130] = {.count = 1, .reusable = true}, SHIFT(38),
  [132] = {.count = 1, .reusable = true}, SHIFT(39),
  [134] = {.count = 1, .reusable = true}, SHIFT(40),
  [136] = {.count = 1, .reusable = true}, SHIFT(41),
  [138] = {.count = 1, .reusable = true}, SHIFT(42),
  [140] = {.count = 1, .reusable = true}, SHIFT(43),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym__style_list, 2),
  [144] = {.count = 1, .reusable = true}, SHIFT(45),
  [146] = {.count = 1, .reusable = true}, SHIFT(47),
  [148] = {.count = 1, .reusable = true}, SHIFT(48),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_styles, 3),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_important_styles, 3),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_important_styles, 3),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym__style_list, 3),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym__string_value, 1),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_style, 3),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_value, 1),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym__color_value, 1),
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
