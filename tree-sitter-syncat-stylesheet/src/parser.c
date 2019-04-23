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
#define STATE_COUNT 50
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_COMMA = 1,
  anon_sym_GT = 2,
  sym_any = 3,
  anon_sym_DOT = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LBRACE_PIPE = 9,
  anon_sym_PIPE_RBRACE = 10,
  anon_sym_SEMI = 11,
  anon_sym_COLON = 12,
  anon_sym_colour = 13,
  anon_sym_color = 14,
  anon_sym_background_DASHcolour = 15,
  anon_sym_background_DASHcolor = 16,
  anon_sym_red = 17,
  anon_sym_blue = 18,
  anon_sym_green = 19,
  anon_sym_purple = 20,
  anon_sym_yellow = 21,
  anon_sym_black = 22,
  anon_sym_white = 23,
  anon_sym_cyan = 24,
  sym__color_index = 25,
  sym__rgb_color = 26,
  anon_sym_italic = 27,
  anon_sym_bold = 28,
  anon_sym_underline = 29,
  anon_sym_strikethrough = 30,
  anon_sym_hidden = 31,
  anon_sym_blink = 32,
  anon_sym_dim = 33,
  anon_sym_reverse = 34,
  anon_sym_true = 35,
  anon_sym_false = 36,
  anon_sym_language = 37,
  anon_sym_content = 38,
  sym_comment = 39,
  sym_regex = 40,
  sym__unquoted_string = 41,
  sym__quoted_string = 42,
  sym_stylesheet = 43,
  sym_rule = 44,
  sym__selectors = 45,
  sym_selector = 46,
  sym__terminal_selector = 47,
  sym__selector_scope = 48,
  sym__selector_node = 49,
  sym__simple_terminal = 50,
  sym__complex_terminal = 51,
  sym__simple_node = 52,
  sym__complex_node = 53,
  sym_direct_child = 54,
  sym_direct_terminal = 55,
  sym_no_children = 56,
  sym_branch_check = 57,
  sym_node_kind = 58,
  sym_token = 59,
  sym_token_pattern = 60,
  sym__style_block = 61,
  sym_styles = 62,
  sym_important_styles = 63,
  sym__style_list = 64,
  sym_style = 65,
  sym__color_style = 66,
  sym__color_value = 67,
  sym__color_literal = 68,
  sym__boolean_style = 69,
  sym__boolean_value = 70,
  sym__string_style = 71,
  sym__string_value = 72,
  aux_sym_stylesheet_repeat1 = 73,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [sym_any] = "any",
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
  [sym_any] = {
    .visible = true,
    .named = true,
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
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '1')
        ADVANCE(8);
      if (lookahead == '2')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == '>')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == 'b')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(16);
      if (lookahead == 'd')
        ADVANCE(17);
      if (lookahead == 'f')
        ADVANCE(18);
      if (lookahead == 'g')
        ADVANCE(19);
      if (lookahead == 'h')
        ADVANCE(20);
      if (lookahead == 'i')
        ADVANCE(21);
      if (lookahead == 'l')
        ADVANCE(22);
      if (lookahead == 'p')
        ADVANCE(23);
      if (lookahead == 'r')
        ADVANCE(24);
      if (lookahead == 's')
        ADVANCE(25);
      if (lookahead == 't')
        ADVANCE(26);
      if (lookahead == 'u')
        ADVANCE(27);
      if (lookahead == 'w')
        ADVANCE(28);
      if (lookahead == 'y')
        ADVANCE(29);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(31);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(36);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_any);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 7:
      if (lookahead == '*')
        ADVANCE(38);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(41);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '5')
        ADVANCE(42);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(33);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'l')
        ADVANCE(45);
      if (lookahead == 'o')
        ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(47);
      if (lookahead == 'y')
        ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h')
        ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '|')
        ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == '}')
        ADVANCE(63);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '"')
        ADVANCE(64);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == '*')
        ADVANCE(66);
      if (lookahead == '/')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(68);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '/')
        ADVANCE(69);
      if (lookahead == '\\')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(43);
      if (lookahead == '-' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'i')
        ADVANCE(72);
      if (lookahead == 'u')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(75);
      if (lookahead == 'n')
        ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'm')
        ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(85);
      if (lookahead == 'v')
        ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE_PIPE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == '*')
        ADVANCE(66);
      if (lookahead == '/')
        ADVANCE(93);
      if (lookahead == '\\')
        ADVANCE(94);
      if (lookahead != 0)
        ADVANCE(95);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == '*')
        ADVANCE(96);
      if (lookahead == 'i')
        ADVANCE(97);
      if (lookahead != 0)
        ADVANCE(98);
      END_STATE();
    case 68:
      if (lookahead == '\n')
        ADVANCE(98);
      if (lookahead == '*')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == 'i')
        ADVANCE(99);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_dim);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's')
        ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'p')
        ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
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
        ADVANCE(34);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(120);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'i')
        ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == '\n')
        ADVANCE(98);
      if (lookahead == '*')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == '*')
        ADVANCE(66);
      if (lookahead == '/')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(94);
      if (lookahead != 0)
        ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == '*')
        ADVANCE(96);
      if (lookahead == '/')
        ADVANCE(121);
      if (lookahead != 0)
        ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == '*')
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == '*')
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
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
        ADVANCE(34);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(125);
      if (lookahead == 'u')
        ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_cyan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k')
        ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(139);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_blink);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's')
        ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_white);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'w')
        ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(151);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_italic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_purple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i')
        ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__color_index);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h')
        ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
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
        ADVANCE(34);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd')
        ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_underline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u')
        ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c')
        ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g')
        ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h')
        ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o')
        ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(175);
      if (lookahead == 'u')
        ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 178:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '>')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(178);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 179:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '>')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 180:
      if (lookahead == '/')
        ADVANCE(181);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(180);
      END_STATE();
    case 181:
      if (lookahead == '*')
        ADVANCE(98);
      if (lookahead == '/')
        ADVANCE(39);
      END_STATE();
    case 182:
      if (lookahead == '/')
        ADVANCE(181);
      if (lookahead == 'b')
        ADVANCE(183);
      if (lookahead == 'c')
        ADVANCE(184);
      if (lookahead == 'd')
        ADVANCE(185);
      if (lookahead == 'h')
        ADVANCE(186);
      if (lookahead == 'i')
        ADVANCE(187);
      if (lookahead == 'l')
        ADVANCE(188);
      if (lookahead == 'r')
        ADVANCE(189);
      if (lookahead == 's')
        ADVANCE(190);
      if (lookahead == 'u')
        ADVANCE(191);
      if (lookahead == '|')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(182);
      END_STATE();
    case 183:
      if (lookahead == 'a')
        ADVANCE(192);
      if (lookahead == 'l')
        ADVANCE(193);
      if (lookahead == 'o')
        ADVANCE(194);
      END_STATE();
    case 184:
      if (lookahead == 'o')
        ADVANCE(195);
      END_STATE();
    case 185:
      if (lookahead == 'i')
        ADVANCE(196);
      END_STATE();
    case 186:
      if (lookahead == 'i')
        ADVANCE(197);
      END_STATE();
    case 187:
      if (lookahead == 't')
        ADVANCE(198);
      END_STATE();
    case 188:
      if (lookahead == 'a')
        ADVANCE(199);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(200);
      END_STATE();
    case 190:
      if (lookahead == 't')
        ADVANCE(201);
      END_STATE();
    case 191:
      if (lookahead == 'n')
        ADVANCE(202);
      END_STATE();
    case 192:
      if (lookahead == 'c')
        ADVANCE(203);
      END_STATE();
    case 193:
      if (lookahead == 'i')
        ADVANCE(204);
      END_STATE();
    case 194:
      if (lookahead == 'l')
        ADVANCE(205);
      END_STATE();
    case 195:
      if (lookahead == 'l')
        ADVANCE(206);
      if (lookahead == 'n')
        ADVANCE(207);
      END_STATE();
    case 196:
      if (lookahead == 'm')
        ADVANCE(208);
      END_STATE();
    case 197:
      if (lookahead == 'd')
        ADVANCE(209);
      END_STATE();
    case 198:
      if (lookahead == 'a')
        ADVANCE(210);
      END_STATE();
    case 199:
      if (lookahead == 'n')
        ADVANCE(211);
      END_STATE();
    case 200:
      if (lookahead == 'v')
        ADVANCE(212);
      END_STATE();
    case 201:
      if (lookahead == 'r')
        ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == 'd')
        ADVANCE(214);
      END_STATE();
    case 203:
      if (lookahead == 'k')
        ADVANCE(215);
      END_STATE();
    case 204:
      if (lookahead == 'n')
        ADVANCE(216);
      END_STATE();
    case 205:
      if (lookahead == 'd')
        ADVANCE(217);
      END_STATE();
    case 206:
      if (lookahead == 'o')
        ADVANCE(218);
      END_STATE();
    case 207:
      if (lookahead == 't')
        ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 209:
      if (lookahead == 'd')
        ADVANCE(220);
      END_STATE();
    case 210:
      if (lookahead == 'l')
        ADVANCE(221);
      END_STATE();
    case 211:
      if (lookahead == 'g')
        ADVANCE(222);
      END_STATE();
    case 212:
      if (lookahead == 'e')
        ADVANCE(223);
      END_STATE();
    case 213:
      if (lookahead == 'i')
        ADVANCE(224);
      END_STATE();
    case 214:
      if (lookahead == 'e')
        ADVANCE(225);
      END_STATE();
    case 215:
      if (lookahead == 'g')
        ADVANCE(226);
      END_STATE();
    case 216:
      if (lookahead == 'k')
        ADVANCE(227);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 218:
      if (lookahead == 'r')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      END_STATE();
    case 219:
      if (lookahead == 'e')
        ADVANCE(230);
      END_STATE();
    case 220:
      if (lookahead == 'e')
        ADVANCE(231);
      END_STATE();
    case 221:
      if (lookahead == 'i')
        ADVANCE(232);
      END_STATE();
    case 222:
      if (lookahead == 'u')
        ADVANCE(233);
      END_STATE();
    case 223:
      if (lookahead == 'r')
        ADVANCE(234);
      END_STATE();
    case 224:
      if (lookahead == 'k')
        ADVANCE(235);
      END_STATE();
    case 225:
      if (lookahead == 'r')
        ADVANCE(236);
      END_STATE();
    case 226:
      if (lookahead == 'r')
        ADVANCE(237);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_blink);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 229:
      if (lookahead == 'r')
        ADVANCE(238);
      END_STATE();
    case 230:
      if (lookahead == 'n')
        ADVANCE(239);
      END_STATE();
    case 231:
      if (lookahead == 'n')
        ADVANCE(240);
      END_STATE();
    case 232:
      if (lookahead == 'c')
        ADVANCE(241);
      END_STATE();
    case 233:
      if (lookahead == 'a')
        ADVANCE(242);
      END_STATE();
    case 234:
      if (lookahead == 's')
        ADVANCE(243);
      END_STATE();
    case 235:
      if (lookahead == 'e')
        ADVANCE(244);
      END_STATE();
    case 236:
      if (lookahead == 'l')
        ADVANCE(245);
      END_STATE();
    case 237:
      if (lookahead == 'o')
        ADVANCE(246);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 239:
      if (lookahead == 't')
        ADVANCE(247);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 242:
      if (lookahead == 'g')
        ADVANCE(248);
      END_STATE();
    case 243:
      if (lookahead == 'e')
        ADVANCE(249);
      END_STATE();
    case 244:
      if (lookahead == 't')
        ADVANCE(250);
      END_STATE();
    case 245:
      if (lookahead == 'i')
        ADVANCE(251);
      END_STATE();
    case 246:
      if (lookahead == 'u')
        ADVANCE(252);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_content);
      END_STATE();
    case 248:
      if (lookahead == 'e')
        ADVANCE(253);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 250:
      if (lookahead == 'h')
        ADVANCE(254);
      END_STATE();
    case 251:
      if (lookahead == 'n')
        ADVANCE(255);
      END_STATE();
    case 252:
      if (lookahead == 'n')
        ADVANCE(256);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_language);
      END_STATE();
    case 254:
      if (lookahead == 'r')
        ADVANCE(257);
      END_STATE();
    case 255:
      if (lookahead == 'e')
        ADVANCE(258);
      END_STATE();
    case 256:
      if (lookahead == 'd')
        ADVANCE(259);
      END_STATE();
    case 257:
      if (lookahead == 'o')
        ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 259:
      if (lookahead == '-')
        ADVANCE(261);
      END_STATE();
    case 260:
      if (lookahead == 'u')
        ADVANCE(262);
      END_STATE();
    case 261:
      if (lookahead == 'c')
        ADVANCE(263);
      END_STATE();
    case 262:
      if (lookahead == 'g')
        ADVANCE(264);
      END_STATE();
    case 263:
      if (lookahead == 'o')
        ADVANCE(265);
      END_STATE();
    case 264:
      if (lookahead == 'h')
        ADVANCE(266);
      END_STATE();
    case 265:
      if (lookahead == 'l')
        ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      END_STATE();
    case 267:
      if (lookahead == 'o')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'r')
        ADVANCE(269);
      if (lookahead == 'u')
        ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      END_STATE();
    case 270:
      if (lookahead == 'r')
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      END_STATE();
    case 272:
      if (lookahead == '/')
        ADVANCE(181);
      if (lookahead == ':')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      END_STATE();
    case 273:
      if (lookahead == '/')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == '|')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(273);
      END_STATE();
    case 274:
      if (lookahead == '/')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(274);
      END_STATE();
    case 275:
      if (lookahead == '/')
        ADVANCE(181);
      if (lookahead == 'f')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(275);
      END_STATE();
    case 276:
      if (lookahead == 'a')
        ADVANCE(278);
      END_STATE();
    case 277:
      if (lookahead == 'r')
        ADVANCE(279);
      END_STATE();
    case 278:
      if (lookahead == 'l')
        ADVANCE(280);
      END_STATE();
    case 279:
      if (lookahead == 'u')
        ADVANCE(281);
      END_STATE();
    case 280:
      if (lookahead == 's')
        ADVANCE(282);
      END_STATE();
    case 281:
      if (lookahead == 'e')
        ADVANCE(283);
      END_STATE();
    case 282:
      if (lookahead == 'e')
        ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 285:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(181);
      if (lookahead == '1')
        ADVANCE(286);
      if (lookahead == '2')
        ADVANCE(287);
      if (lookahead == 'b')
        ADVANCE(288);
      if (lookahead == 'c')
        ADVANCE(289);
      if (lookahead == 'g')
        ADVANCE(290);
      if (lookahead == 'p')
        ADVANCE(291);
      if (lookahead == 'r')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(293);
      if (lookahead == 'y')
        ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(295);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(295);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '5')
        ADVANCE(296);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(295);
      END_STATE();
    case 288:
      if (lookahead == 'l')
        ADVANCE(298);
      END_STATE();
    case 289:
      if (lookahead == 'y')
        ADVANCE(299);
      END_STATE();
    case 290:
      if (lookahead == 'r')
        ADVANCE(300);
      END_STATE();
    case 291:
      if (lookahead == 'u')
        ADVANCE(301);
      END_STATE();
    case 292:
      if (lookahead == 'e')
        ADVANCE(302);
      END_STATE();
    case 293:
      if (lookahead == 'h')
        ADVANCE(303);
      END_STATE();
    case 294:
      if (lookahead == 'e')
        ADVANCE(304);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__rgb_color);
      END_STATE();
    case 298:
      if (lookahead == 'a')
        ADVANCE(305);
      if (lookahead == 'u')
        ADVANCE(306);
      END_STATE();
    case 299:
      if (lookahead == 'a')
        ADVANCE(307);
      END_STATE();
    case 300:
      if (lookahead == 'e')
        ADVANCE(308);
      END_STATE();
    case 301:
      if (lookahead == 'r')
        ADVANCE(309);
      END_STATE();
    case 302:
      if (lookahead == 'd')
        ADVANCE(310);
      END_STATE();
    case 303:
      if (lookahead == 'i')
        ADVANCE(311);
      END_STATE();
    case 304:
      if (lookahead == 'l')
        ADVANCE(312);
      END_STATE();
    case 305:
      if (lookahead == 'c')
        ADVANCE(313);
      END_STATE();
    case 306:
      if (lookahead == 'e')
        ADVANCE(314);
      END_STATE();
    case 307:
      if (lookahead == 'n')
        ADVANCE(315);
      END_STATE();
    case 308:
      if (lookahead == 'e')
        ADVANCE(316);
      END_STATE();
    case 309:
      if (lookahead == 'p')
        ADVANCE(317);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 311:
      if (lookahead == 't')
        ADVANCE(318);
      END_STATE();
    case 312:
      if (lookahead == 'l')
        ADVANCE(319);
      END_STATE();
    case 313:
      if (lookahead == 'k')
        ADVANCE(320);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 316:
      if (lookahead == 'n')
        ADVANCE(321);
      END_STATE();
    case 317:
      if (lookahead == 'l')
        ADVANCE(322);
      END_STATE();
    case 318:
      if (lookahead == 'e')
        ADVANCE(323);
      END_STATE();
    case 319:
      if (lookahead == 'o')
        ADVANCE(324);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 322:
      if (lookahead == 'e')
        ADVANCE(325);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 324:
      if (lookahead == 'w')
        ADVANCE(326);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_purple);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 327:
      if (lookahead == '/')
        ADVANCE(181);
      if (lookahead == 'b')
        ADVANCE(183);
      if (lookahead == 'c')
        ADVANCE(184);
      if (lookahead == 'd')
        ADVANCE(185);
      if (lookahead == 'h')
        ADVANCE(186);
      if (lookahead == 'i')
        ADVANCE(187);
      if (lookahead == 'l')
        ADVANCE(188);
      if (lookahead == 'r')
        ADVANCE(189);
      if (lookahead == 's')
        ADVANCE(190);
      if (lookahead == 'u')
        ADVANCE(191);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(327);
      END_STATE();
    case 328:
      if (lookahead == '/')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == '|')
        ADVANCE(31);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(328);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 178},
  [2] = {.lex_state = 178},
  [3] = {.lex_state = 178},
  [4] = {.lex_state = 178},
  [5] = {.lex_state = 178},
  [6] = {.lex_state = 178},
  [7] = {.lex_state = 178},
  [8] = {.lex_state = 178},
  [9] = {.lex_state = 179},
  [10] = {.lex_state = 178},
  [11] = {.lex_state = 178},
  [12] = {.lex_state = 179},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 178},
  [15] = {.lex_state = 180},
  [16] = {.lex_state = 178},
  [17] = {.lex_state = 178},
  [18] = {.lex_state = 178},
  [19] = {.lex_state = 179},
  [20] = {.lex_state = 178},
  [21] = {.lex_state = 182},
  [22] = {.lex_state = 182},
  [23] = {.lex_state = 178},
  [24] = {.lex_state = 178},
  [25] = {.lex_state = 178},
  [26] = {.lex_state = 178},
  [27] = {.lex_state = 179},
  [28] = {.lex_state = 272},
  [29] = {.lex_state = 272},
  [30] = {.lex_state = 272},
  [31] = {.lex_state = 273},
  [32] = {.lex_state = 272},
  [33] = {.lex_state = 272},
  [34] = {.lex_state = 272},
  [35] = {.lex_state = 182},
  [36] = {.lex_state = 274},
  [37] = {.lex_state = 274},
  [38] = {.lex_state = 182},
  [39] = {.lex_state = 178},
  [40] = {.lex_state = 275},
  [41] = {.lex_state = 285},
  [42] = {.lex_state = 178},
  [43] = {.lex_state = 327},
  [44] = {.lex_state = 178},
  [45] = {.lex_state = 328},
  [46] = {.lex_state = 328},
  [47] = {.lex_state = 328},
  [48] = {.lex_state = 328},
  [49] = {.lex_state = 328},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_yellow] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_dim] = ACTIONS(1),
    [anon_sym_content] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_PIPE] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [sym_any] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym__rgb_color] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_RBRACE] = ACTIONS(1),
    [anon_sym_background_DASHcolour] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_blink] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [sym__unquoted_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [anon_sym_language] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_background_DASHcolor] = ACTIONS(1),
    [anon_sym_colour] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [sym__color_index] = ACTIONS(1),
    [anon_sym_strikethrough] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_stylesheet_repeat1] = STATE(8),
    [sym_selector] = STATE(9),
    [sym__terminal_selector] = STATE(10),
    [sym__simple_node] = STATE(14),
    [sym__complex_node] = STATE(14),
    [sym_node_kind] = STATE(11),
    [sym_token] = STATE(10),
    [sym_rule] = STATE(8),
    [sym__selectors] = STATE(12),
    [sym__simple_terminal] = STATE(10),
    [sym__complex_terminal] = STATE(10),
    [sym_no_children] = STATE(10),
    [sym_branch_check] = STATE(14),
    [sym_stylesheet] = STATE(13),
    [sym__selector_scope] = STATE(14),
    [sym__selector_node] = STATE(14),
    [sym_direct_child] = STATE(14),
    [sym_direct_terminal] = STATE(10),
    [sym_token_pattern] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym__quoted_string] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(13),
    [sym_any] = ACTIONS(15),
    [sym_regex] = ACTIONS(17),
  },
  [2] = {
    [sym_selector] = STATE(15),
    [sym__terminal_selector] = STATE(10),
    [sym__simple_node] = STATE(14),
    [sym__complex_node] = STATE(14),
    [sym_node_kind] = STATE(11),
    [sym_token] = STATE(10),
    [sym__simple_terminal] = STATE(10),
    [sym__complex_terminal] = STATE(10),
    [sym_no_children] = STATE(10),
    [sym_branch_check] = STATE(14),
    [sym__selector_scope] = STATE(14),
    [sym__selector_node] = STATE(14),
    [sym_direct_child] = STATE(14),
    [sym_direct_terminal] = STATE(10),
    [sym_token_pattern] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(11),
    [sym__quoted_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(13),
    [sym_any] = ACTIONS(15),
    [sym_regex] = ACTIONS(17),
  },
  [3] = {
    [sym_branch_check] = STATE(17),
    [sym__simple_terminal] = STATE(16),
    [sym_token_pattern] = STATE(16),
    [sym__simple_node] = STATE(17),
    [sym_node_kind] = STATE(11),
    [sym_token] = STATE(16),
    [sym_no_children] = STATE(16),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym__quoted_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(13),
    [sym_any] = ACTIONS(15),
    [sym_regex] = ACTIONS(17),
  },
  [4] = {
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_LBRACE_PIPE] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(23),
  },
  [5] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym__quoted_string] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE_PIPE] = ACTIONS(25),
    [sym__unquoted_string] = ACTIONS(25),
    [sym_any] = ACTIONS(25),
    [sym_regex] = ACTIONS(27),
  },
  [6] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym__quoted_string] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE_PIPE] = ACTIONS(31),
    [sym__unquoted_string] = ACTIONS(29),
    [sym_any] = ACTIONS(29),
    [sym_regex] = ACTIONS(35),
  },
  [7] = {
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_comment] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_LBRACE_PIPE] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
  },
  [8] = {
    [aux_sym_stylesheet_repeat1] = STATE(18),
    [sym_selector] = STATE(9),
    [sym__terminal_selector] = STATE(10),
    [sym__simple_node] = STATE(14),
    [sym__complex_node] = STATE(14),
    [sym_node_kind] = STATE(11),
    [sym_token] = STATE(10),
    [sym_rule] = STATE(18),
    [sym__selectors] = STATE(12),
    [sym__simple_terminal] = STATE(10),
    [sym__complex_terminal] = STATE(10),
    [sym_no_children] = STATE(10),
    [sym_branch_check] = STATE(14),
    [sym__selector_scope] = STATE(14),
    [sym__selector_node] = STATE(14),
    [sym_direct_child] = STATE(14),
    [sym_direct_terminal] = STATE(10),
    [sym_token_pattern] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym__quoted_string] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(13),
    [sym_any] = ACTIONS(15),
    [sym_regex] = ACTIONS(17),
  },
  [9] = {
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(21),
    [anon_sym_LBRACE_PIPE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
  },
  [10] = {
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_LBRACE_PIPE] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
  },
  [11] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym__quoted_string] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE_PIPE] = ACTIONS(31),
    [sym__unquoted_string] = ACTIONS(29),
    [sym_any] = ACTIONS(29),
    [sym_regex] = ACTIONS(35),
  },
  [12] = {
    [sym__style_block] = STATE(23),
    [sym_styles] = STATE(23),
    [sym_important_styles] = STATE(23),
    [anon_sym_LBRACE_PIPE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_comment] = ACTIONS(21),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(21),
  },
  [14] = {
    [sym_branch_check] = STATE(25),
    [sym__terminal_selector] = STATE(24),
    [sym__simple_node] = STATE(25),
    [sym__complex_node] = STATE(25),
    [sym_node_kind] = STATE(11),
    [sym_token] = STATE(24),
    [sym__selector_node] = STATE(25),
    [sym_direct_child] = STATE(25),
    [sym_direct_terminal] = STATE(24),
    [sym_token_pattern] = STATE(24),
    [sym__simple_terminal] = STATE(24),
    [sym__complex_terminal] = STATE(24),
    [sym_no_children] = STATE(24),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(11),
    [sym__quoted_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(13),
    [sym_any] = ACTIONS(15),
    [sym_regex] = ACTIONS(17),
  },
  [15] = {
    [anon_sym_RBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(21),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_comment] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_LBRACE_PIPE] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
  },
  [17] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [sym__quoted_string] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(67),
    [sym_any] = ACTIONS(67),
    [sym_regex] = ACTIONS(69),
  },
  [18] = {
    [aux_sym_stylesheet_repeat1] = STATE(18),
    [sym_selector] = STATE(9),
    [sym__terminal_selector] = STATE(10),
    [sym__simple_node] = STATE(14),
    [sym__complex_node] = STATE(14),
    [sym_node_kind] = STATE(11),
    [sym_token] = STATE(10),
    [sym_rule] = STATE(18),
    [sym__selectors] = STATE(12),
    [sym__simple_terminal] = STATE(10),
    [sym__complex_terminal] = STATE(10),
    [sym_no_children] = STATE(10),
    [sym_branch_check] = STATE(14),
    [sym__selector_scope] = STATE(14),
    [sym__selector_node] = STATE(14),
    [sym_direct_child] = STATE(14),
    [sym_direct_terminal] = STATE(10),
    [sym_token_pattern] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym__quoted_string] = ACTIONS(74),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(82),
    [sym_any] = ACTIONS(85),
    [sym_regex] = ACTIONS(88),
  },
  [19] = {
    [sym_selector] = STATE(9),
    [sym__terminal_selector] = STATE(10),
    [sym__simple_node] = STATE(14),
    [sym__complex_node] = STATE(14),
    [sym_node_kind] = STATE(11),
    [sym_token] = STATE(10),
    [sym__selectors] = STATE(27),
    [sym__simple_terminal] = STATE(10),
    [sym__complex_terminal] = STATE(10),
    [sym_no_children] = STATE(10),
    [sym_branch_check] = STATE(14),
    [sym__selector_scope] = STATE(14),
    [sym__selector_node] = STATE(14),
    [sym_direct_child] = STATE(14),
    [sym_direct_terminal] = STATE(10),
    [sym_token_pattern] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym__quoted_string] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE_PIPE] = ACTIONS(93),
    [sym__unquoted_string] = ACTIONS(13),
    [sym_any] = ACTIONS(15),
    [sym_regex] = ACTIONS(17),
  },
  [20] = {
    [anon_sym_LBRACE] = ACTIONS(95),
    [sym_comment] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_LBRACE_PIPE] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
  },
  [21] = {
    [sym_style] = STATE(31),
    [sym__string_style] = STATE(32),
    [sym__boolean_style] = STATE(33),
    [sym__color_style] = STATE(34),
    [sym__style_list] = STATE(35),
    [anon_sym_background_DASHcolour] = ACTIONS(99),
    [anon_sym_dim] = ACTIONS(101),
    [anon_sym_content] = ACTIONS(103),
    [anon_sym_italic] = ACTIONS(101),
    [anon_sym_blink] = ACTIONS(101),
    [anon_sym_underline] = ACTIONS(101),
    [anon_sym_color] = ACTIONS(99),
    [anon_sym_language] = ACTIONS(103),
    [anon_sym_hidden] = ACTIONS(101),
    [anon_sym_background_DASHcolor] = ACTIONS(99),
    [anon_sym_colour] = ACTIONS(99),
    [anon_sym_reverse] = ACTIONS(101),
    [sym_comment] = ACTIONS(21),
    [anon_sym_bold] = ACTIONS(101),
    [anon_sym_strikethrough] = ACTIONS(101),
  },
  [22] = {
    [sym_style] = STATE(36),
    [sym__string_style] = STATE(32),
    [sym__boolean_style] = STATE(33),
    [sym__color_style] = STATE(34),
    [sym__style_list] = STATE(37),
    [anon_sym_background_DASHcolour] = ACTIONS(99),
    [anon_sym_dim] = ACTIONS(101),
    [anon_sym_content] = ACTIONS(103),
    [anon_sym_italic] = ACTIONS(101),
    [anon_sym_blink] = ACTIONS(101),
    [anon_sym_underline] = ACTIONS(101),
    [anon_sym_color] = ACTIONS(99),
    [anon_sym_language] = ACTIONS(103),
    [anon_sym_hidden] = ACTIONS(101),
    [anon_sym_background_DASHcolor] = ACTIONS(99),
    [anon_sym_colour] = ACTIONS(99),
    [anon_sym_reverse] = ACTIONS(101),
    [sym_comment] = ACTIONS(21),
    [anon_sym_bold] = ACTIONS(101),
    [anon_sym_strikethrough] = ACTIONS(101),
  },
  [23] = {
    [anon_sym_LBRACK] = ACTIONS(105),
    [sym__quoted_string] = ACTIONS(105),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(105),
    [sym_any] = ACTIONS(105),
    [sym_regex] = ACTIONS(107),
  },
  [24] = {
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_LBRACE_PIPE] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
  },
  [25] = {
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [sym__quoted_string] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(113),
    [sym_any] = ACTIONS(113),
    [sym_regex] = ACTIONS(115),
  },
  [26] = {
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [sym__quoted_string] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(117),
    [sym_any] = ACTIONS(117),
    [sym_regex] = ACTIONS(119),
  },
  [27] = {
    [anon_sym_LBRACE_PIPE] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_comment] = ACTIONS(21),
  },
  [28] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(125),
  },
  [29] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(127),
  },
  [30] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(129),
  },
  [31] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(133),
    [sym_comment] = ACTIONS(21),
  },
  [32] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(135),
  },
  [33] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(137),
  },
  [34] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(139),
  },
  [35] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(141),
    [sym_comment] = ACTIONS(21),
  },
  [36] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(131),
  },
  [37] = {
    [sym_comment] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(145),
  },
  [38] = {
    [sym_style] = STATE(31),
    [sym__string_style] = STATE(32),
    [sym__boolean_style] = STATE(33),
    [sym__color_style] = STATE(34),
    [sym__style_list] = STATE(45),
    [anon_sym_PIPE_RBRACE] = ACTIONS(147),
    [anon_sym_background_DASHcolour] = ACTIONS(99),
    [anon_sym_dim] = ACTIONS(101),
    [anon_sym_content] = ACTIONS(103),
    [anon_sym_italic] = ACTIONS(101),
    [anon_sym_blink] = ACTIONS(101),
    [anon_sym_underline] = ACTIONS(101),
    [anon_sym_color] = ACTIONS(99),
    [anon_sym_language] = ACTIONS(103),
    [anon_sym_hidden] = ACTIONS(101),
    [anon_sym_background_DASHcolor] = ACTIONS(99),
    [anon_sym_colour] = ACTIONS(99),
    [anon_sym_reverse] = ACTIONS(101),
    [sym_comment] = ACTIONS(21),
    [anon_sym_bold] = ACTIONS(101),
    [anon_sym_strikethrough] = ACTIONS(101),
  },
  [39] = {
    [sym__string_value] = STATE(47),
    [sym__unquoted_string] = ACTIONS(149),
    [sym__quoted_string] = ACTIONS(149),
    [sym_comment] = ACTIONS(21),
  },
  [40] = {
    [sym__boolean_value] = STATE(47),
    [sym_comment] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
  },
  [41] = {
    [sym__color_value] = STATE(47),
    [sym__color_literal] = STATE(49),
    [anon_sym_yellow] = ACTIONS(153),
    [sym__rgb_color] = ACTIONS(153),
    [anon_sym_purple] = ACTIONS(153),
    [anon_sym_red] = ACTIONS(153),
    [anon_sym_black] = ACTIONS(153),
    [anon_sym_blue] = ACTIONS(153),
    [anon_sym_white] = ACTIONS(153),
    [sym_comment] = ACTIONS(21),
    [sym__color_index] = ACTIONS(153),
    [anon_sym_green] = ACTIONS(153),
    [anon_sym_cyan] = ACTIONS(153),
  },
  [42] = {
    [anon_sym_LBRACK] = ACTIONS(155),
    [sym__quoted_string] = ACTIONS(155),
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(155),
    [sym_any] = ACTIONS(155),
    [sym_regex] = ACTIONS(157),
  },
  [43] = {
    [sym_style] = STATE(36),
    [sym__string_style] = STATE(32),
    [sym__boolean_style] = STATE(33),
    [sym__color_style] = STATE(34),
    [sym__style_list] = STATE(45),
    [anon_sym_background_DASHcolour] = ACTIONS(99),
    [anon_sym_dim] = ACTIONS(101),
    [anon_sym_content] = ACTIONS(103),
    [anon_sym_italic] = ACTIONS(101),
    [anon_sym_blink] = ACTIONS(101),
    [anon_sym_underline] = ACTIONS(101),
    [anon_sym_color] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_language] = ACTIONS(103),
    [anon_sym_hidden] = ACTIONS(101),
    [anon_sym_background_DASHcolor] = ACTIONS(99),
    [anon_sym_colour] = ACTIONS(99),
    [anon_sym_reverse] = ACTIONS(101),
    [sym_comment] = ACTIONS(21),
    [anon_sym_bold] = ACTIONS(101),
    [anon_sym_strikethrough] = ACTIONS(101),
  },
  [44] = {
    [anon_sym_LBRACK] = ACTIONS(159),
    [sym__quoted_string] = ACTIONS(159),
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym__unquoted_string] = ACTIONS(159),
    [sym_any] = ACTIONS(159),
    [sym_regex] = ACTIONS(161),
  },
  [45] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(163),
    [sym_comment] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(163),
  },
  [46] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(165),
    [sym_comment] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
  },
  [47] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
  },
  [48] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(169),
    [sym_comment] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
  },
  [49] = {
    [anon_sym_PIPE_RBRACE] = ACTIONS(171),
    [sym_comment] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, REDUCE(sym_token, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_node_kind, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_node_kind, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym__simple_node, 1),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym__simple_terminal, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym__simple_terminal, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym__simple_node, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_token_pattern, 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_token_pattern, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(20),
  [55] = {.count = 1, .reusable = true}, SHIFT(21),
  [57] = {.count = 1, .reusable = false}, SHIFT(22),
  [59] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [61] = {.count = 1, .reusable = true}, SHIFT(26),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_direct_terminal, 2),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_direct_terminal, 2),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_direct_child, 2),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_direct_child, 2),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_no_children, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_no_children, 2),
  [99] = {.count = 1, .reusable = true}, SHIFT(29),
  [101] = {.count = 1, .reusable = true}, SHIFT(30),
  [103] = {.count = 1, .reusable = true}, SHIFT(28),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__selector_scope, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym__selector_scope, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_branch_check, 3),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_branch_check, 3),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 3),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 3),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__string_style, 1),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym__color_style, 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_style, 1),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__style_list, 1),
  [133] = {.count = 1, .reusable = true}, SHIFT(38),
  [135] = {.count = 1, .reusable = true}, SHIFT(39),
  [137] = {.count = 1, .reusable = true}, SHIFT(40),
  [139] = {.count = 1, .reusable = true}, SHIFT(41),
  [141] = {.count = 1, .reusable = true}, SHIFT(42),
  [143] = {.count = 1, .reusable = true}, SHIFT(43),
  [145] = {.count = 1, .reusable = true}, SHIFT(44),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym__style_list, 2),
  [149] = {.count = 1, .reusable = true}, SHIFT(46),
  [151] = {.count = 1, .reusable = true}, SHIFT(48),
  [153] = {.count = 1, .reusable = true}, SHIFT(49),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_important_styles, 3),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_important_styles, 3),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 3),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_styles, 3),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym__style_list, 3),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym__string_value, 1),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_style, 3),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_value, 1),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym__color_value, 1),
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
