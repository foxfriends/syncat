#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 31
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_COMMA = 1,
  anon_sym_GT = 2,
  sym_node_kind = 3,
  sym_token = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LBRACE_PIPE = 7,
  anon_sym_PIPE_RBRACE = 8,
  anon_sym_COLON = 9,
  anon_sym_SEMI = 10,
  anon_sym_colour = 11,
  anon_sym_color = 12,
  anon_sym_background_DASHcolour = 13,
  anon_sym_background_DASHcolor = 14,
  anon_sym_italic = 15,
  anon_sym_bold = 16,
  anon_sym_underline = 17,
  anon_sym_strikethrough = 18,
  anon_sym_hidden = 19,
  anon_sym_blink = 20,
  anon_sym_dim = 21,
  anon_sym_reverse = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  anon_sym_red = 25,
  anon_sym_blue = 26,
  anon_sym_green = 27,
  anon_sym_purple = 28,
  anon_sym_yellow = 29,
  anon_sym_black = 30,
  anon_sym_white = 31,
  anon_sym_cyan = 32,
  sym__color_index = 33,
  sym__rgb_color = 34,
  sym_comment = 35,
  sym_source_file = 36,
  sym_rule = 37,
  sym__selectors = 38,
  sym_selector = 39,
  sym__terminal_selector = 40,
  sym__selector_scope = 41,
  sym__selector_node = 42,
  sym_direct_child = 43,
  sym__style_block = 44,
  sym_styles = 45,
  sym_important_styles = 46,
  sym_style = 47,
  sym_style_name = 48,
  sym_style_value = 49,
  sym__boolean_value = 50,
  sym__color_literal = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_styles_repeat1 = 53,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [sym_node_kind] = "node_kind",
  [sym_token] = "token",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_PIPE] = "{|",
  [anon_sym_PIPE_RBRACE] = "|}",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_colour] = "colour",
  [anon_sym_color] = "color",
  [anon_sym_background_DASHcolour] = "background-colour",
  [anon_sym_background_DASHcolor] = "background-color",
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
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_rule] = "rule",
  [sym__selectors] = "_selectors",
  [sym_selector] = "selector",
  [sym__terminal_selector] = "_terminal_selector",
  [sym__selector_scope] = "_selector_scope",
  [sym__selector_node] = "_selector_node",
  [sym_direct_child] = "direct_child",
  [sym__style_block] = "_style_block",
  [sym_styles] = "styles",
  [sym_important_styles] = "important_styles",
  [sym_style] = "style",
  [sym_style_name] = "style_name",
  [sym_style_value] = "style_value",
  [sym__boolean_value] = "_boolean_value",
  [sym__color_literal] = "_color_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_styles_repeat1] = "styles_repeat1",
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
  [sym_node_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
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
  [anon_sym_LBRACE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
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
  [sym_style] = {
    .visible = true,
    .named = true,
  },
  [sym_style_name] = {
    .visible = true,
    .named = true,
  },
  [sym_style_value] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_value] = {
    .visible = false,
    .named = true,
  },
  [sym__color_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
      if (lookahead == 'p')
        ADVANCE(18);
      if (lookahead == 'r')
        ADVANCE(19);
      if (lookahead == 's')
        ADVANCE(20);
      if (lookahead == 't')
        ADVANCE(21);
      if (lookahead == 'u')
        ADVANCE(22);
      if (lookahead == 'w')
        ADVANCE(23);
      if (lookahead == 'y')
        ADVANCE(24);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\\')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(31);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(32);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      if (lookahead == '*')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(34);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_node_kind);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '5')
        ADVANCE(35);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
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
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(37);
      if (lookahead == 'l')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(40);
      if (lookahead == 'y')
        ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'h')
        ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '|')
        ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == '}')
        ADVANCE(55);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_node_kind);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '"')
        ADVANCE(56);
      if (lookahead == '\\')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(31);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == '*')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_node_kind);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(36);
      if (lookahead == '-' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(60);
      if (lookahead == 'i')
        ADVANCE(61);
      if (lookahead == 'u')
        ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'm')
        ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(72);
      if (lookahead == 'v')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE_PIPE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == '*')
        ADVANCE(58);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_dim);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 's')
        ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'p')
        ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'g')
        ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(103);
      if (lookahead == 'u')
        ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_cyan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(115);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_blink);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 's')
        ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_white);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'w')
        ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_italic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_purple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__color_index);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'h')
        ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_underline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '-')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'g')
        ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'h')
        ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(146);
      if (lookahead == 'u')
        ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 149:
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
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 150:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(152);
      if (lookahead == 'd')
        ADVANCE(153);
      if (lookahead == 'h')
        ADVANCE(154);
      if (lookahead == 'i')
        ADVANCE(155);
      if (lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(157);
      if (lookahead == 'u')
        ADVANCE(158);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(150);
      END_STATE();
    case 151:
      if (lookahead == 'a')
        ADVANCE(159);
      if (lookahead == 'l')
        ADVANCE(160);
      if (lookahead == 'o')
        ADVANCE(161);
      END_STATE();
    case 152:
      if (lookahead == 'o')
        ADVANCE(162);
      END_STATE();
    case 153:
      if (lookahead == 'i')
        ADVANCE(163);
      END_STATE();
    case 154:
      if (lookahead == 'i')
        ADVANCE(164);
      END_STATE();
    case 155:
      if (lookahead == 't')
        ADVANCE(165);
      END_STATE();
    case 156:
      if (lookahead == 'e')
        ADVANCE(166);
      END_STATE();
    case 157:
      if (lookahead == 't')
        ADVANCE(167);
      END_STATE();
    case 158:
      if (lookahead == 'n')
        ADVANCE(168);
      END_STATE();
    case 159:
      if (lookahead == 'c')
        ADVANCE(169);
      END_STATE();
    case 160:
      if (lookahead == 'i')
        ADVANCE(170);
      END_STATE();
    case 161:
      if (lookahead == 'l')
        ADVANCE(171);
      END_STATE();
    case 162:
      if (lookahead == 'l')
        ADVANCE(172);
      END_STATE();
    case 163:
      if (lookahead == 'm')
        ADVANCE(173);
      END_STATE();
    case 164:
      if (lookahead == 'd')
        ADVANCE(174);
      END_STATE();
    case 165:
      if (lookahead == 'a')
        ADVANCE(175);
      END_STATE();
    case 166:
      if (lookahead == 'v')
        ADVANCE(176);
      END_STATE();
    case 167:
      if (lookahead == 'r')
        ADVANCE(177);
      END_STATE();
    case 168:
      if (lookahead == 'd')
        ADVANCE(178);
      END_STATE();
    case 169:
      if (lookahead == 'k')
        ADVANCE(179);
      END_STATE();
    case 170:
      if (lookahead == 'n')
        ADVANCE(180);
      END_STATE();
    case 171:
      if (lookahead == 'd')
        ADVANCE(181);
      END_STATE();
    case 172:
      if (lookahead == 'o')
        ADVANCE(182);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 174:
      if (lookahead == 'd')
        ADVANCE(183);
      END_STATE();
    case 175:
      if (lookahead == 'l')
        ADVANCE(184);
      END_STATE();
    case 176:
      if (lookahead == 'e')
        ADVANCE(185);
      END_STATE();
    case 177:
      if (lookahead == 'i')
        ADVANCE(186);
      END_STATE();
    case 178:
      if (lookahead == 'e')
        ADVANCE(187);
      END_STATE();
    case 179:
      if (lookahead == 'g')
        ADVANCE(188);
      END_STATE();
    case 180:
      if (lookahead == 'k')
        ADVANCE(189);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 182:
      if (lookahead == 'r')
        ADVANCE(190);
      if (lookahead == 'u')
        ADVANCE(191);
      END_STATE();
    case 183:
      if (lookahead == 'e')
        ADVANCE(192);
      END_STATE();
    case 184:
      if (lookahead == 'i')
        ADVANCE(193);
      END_STATE();
    case 185:
      if (lookahead == 'r')
        ADVANCE(194);
      END_STATE();
    case 186:
      if (lookahead == 'k')
        ADVANCE(195);
      END_STATE();
    case 187:
      if (lookahead == 'r')
        ADVANCE(196);
      END_STATE();
    case 188:
      if (lookahead == 'r')
        ADVANCE(197);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_blink);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 191:
      if (lookahead == 'r')
        ADVANCE(198);
      END_STATE();
    case 192:
      if (lookahead == 'n')
        ADVANCE(199);
      END_STATE();
    case 193:
      if (lookahead == 'c')
        ADVANCE(200);
      END_STATE();
    case 194:
      if (lookahead == 's')
        ADVANCE(201);
      END_STATE();
    case 195:
      if (lookahead == 'e')
        ADVANCE(202);
      END_STATE();
    case 196:
      if (lookahead == 'l')
        ADVANCE(203);
      END_STATE();
    case 197:
      if (lookahead == 'o')
        ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 201:
      if (lookahead == 'e')
        ADVANCE(205);
      END_STATE();
    case 202:
      if (lookahead == 't')
        ADVANCE(206);
      END_STATE();
    case 203:
      if (lookahead == 'i')
        ADVANCE(207);
      END_STATE();
    case 204:
      if (lookahead == 'u')
        ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 206:
      if (lookahead == 'h')
        ADVANCE(209);
      END_STATE();
    case 207:
      if (lookahead == 'n')
        ADVANCE(210);
      END_STATE();
    case 208:
      if (lookahead == 'n')
        ADVANCE(211);
      END_STATE();
    case 209:
      if (lookahead == 'r')
        ADVANCE(212);
      END_STATE();
    case 210:
      if (lookahead == 'e')
        ADVANCE(213);
      END_STATE();
    case 211:
      if (lookahead == 'd')
        ADVANCE(214);
      END_STATE();
    case 212:
      if (lookahead == 'o')
        ADVANCE(215);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 214:
      if (lookahead == '-')
        ADVANCE(216);
      END_STATE();
    case 215:
      if (lookahead == 'u')
        ADVANCE(217);
      END_STATE();
    case 216:
      if (lookahead == 'c')
        ADVANCE(218);
      END_STATE();
    case 217:
      if (lookahead == 'g')
        ADVANCE(219);
      END_STATE();
    case 218:
      if (lookahead == 'o')
        ADVANCE(220);
      END_STATE();
    case 219:
      if (lookahead == 'h')
        ADVANCE(221);
      END_STATE();
    case 220:
      if (lookahead == 'l')
        ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      END_STATE();
    case 222:
      if (lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'r')
        ADVANCE(224);
      if (lookahead == 'u')
        ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      END_STATE();
    case 225:
      if (lookahead == 'r')
        ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      END_STATE();
    case 227:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(152);
      if (lookahead == 'd')
        ADVANCE(153);
      if (lookahead == 'h')
        ADVANCE(154);
      if (lookahead == 'i')
        ADVANCE(155);
      if (lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(157);
      if (lookahead == 'u')
        ADVANCE(158);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(227);
      END_STATE();
    case 228:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(228);
      END_STATE();
    case 229:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == '1')
        ADVANCE(230);
      if (lookahead == '2')
        ADVANCE(231);
      if (lookahead == 'b')
        ADVANCE(232);
      if (lookahead == 'c')
        ADVANCE(233);
      if (lookahead == 'f')
        ADVANCE(234);
      if (lookahead == 'g')
        ADVANCE(235);
      if (lookahead == 'p')
        ADVANCE(236);
      if (lookahead == 'r')
        ADVANCE(237);
      if (lookahead == 't')
        ADVANCE(238);
      if (lookahead == 'w')
        ADVANCE(239);
      if (lookahead == 'y')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(229);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(241);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(241);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__rgb_color);
      if (lookahead == '5')
        ADVANCE(242);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(241);
      END_STATE();
    case 232:
      if (lookahead == 'l')
        ADVANCE(244);
      END_STATE();
    case 233:
      if (lookahead == 'y')
        ADVANCE(245);
      END_STATE();
    case 234:
      if (lookahead == 'a')
        ADVANCE(246);
      END_STATE();
    case 235:
      if (lookahead == 'r')
        ADVANCE(247);
      END_STATE();
    case 236:
      if (lookahead == 'u')
        ADVANCE(248);
      END_STATE();
    case 237:
      if (lookahead == 'e')
        ADVANCE(249);
      END_STATE();
    case 238:
      if (lookahead == 'r')
        ADVANCE(250);
      END_STATE();
    case 239:
      if (lookahead == 'h')
        ADVANCE(251);
      END_STATE();
    case 240:
      if (lookahead == 'e')
        ADVANCE(252);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__rgb_color);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__rgb_color);
      END_STATE();
    case 244:
      if (lookahead == 'a')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(254);
      END_STATE();
    case 245:
      if (lookahead == 'a')
        ADVANCE(255);
      END_STATE();
    case 246:
      if (lookahead == 'l')
        ADVANCE(256);
      END_STATE();
    case 247:
      if (lookahead == 'e')
        ADVANCE(257);
      END_STATE();
    case 248:
      if (lookahead == 'r')
        ADVANCE(258);
      END_STATE();
    case 249:
      if (lookahead == 'd')
        ADVANCE(259);
      END_STATE();
    case 250:
      if (lookahead == 'u')
        ADVANCE(260);
      END_STATE();
    case 251:
      if (lookahead == 'i')
        ADVANCE(261);
      END_STATE();
    case 252:
      if (lookahead == 'l')
        ADVANCE(262);
      END_STATE();
    case 253:
      if (lookahead == 'c')
        ADVANCE(263);
      END_STATE();
    case 254:
      if (lookahead == 'e')
        ADVANCE(264);
      END_STATE();
    case 255:
      if (lookahead == 'n')
        ADVANCE(265);
      END_STATE();
    case 256:
      if (lookahead == 's')
        ADVANCE(266);
      END_STATE();
    case 257:
      if (lookahead == 'e')
        ADVANCE(267);
      END_STATE();
    case 258:
      if (lookahead == 'p')
        ADVANCE(268);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 260:
      if (lookahead == 'e')
        ADVANCE(269);
      END_STATE();
    case 261:
      if (lookahead == 't')
        ADVANCE(270);
      END_STATE();
    case 262:
      if (lookahead == 'l')
        ADVANCE(271);
      END_STATE();
    case 263:
      if (lookahead == 'k')
        ADVANCE(272);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 266:
      if (lookahead == 'e')
        ADVANCE(273);
      END_STATE();
    case 267:
      if (lookahead == 'n')
        ADVANCE(274);
      END_STATE();
    case 268:
      if (lookahead == 'l')
        ADVANCE(275);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 270:
      if (lookahead == 'e')
        ADVANCE(276);
      END_STATE();
    case 271:
      if (lookahead == 'o')
        ADVANCE(277);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 275:
      if (lookahead == 'e')
        ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 277:
      if (lookahead == 'w')
        ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_purple);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 280:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(280);
      END_STATE();
    case 281:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(152);
      if (lookahead == 'd')
        ADVANCE(153);
      if (lookahead == 'h')
        ADVANCE(154);
      if (lookahead == 'i')
        ADVANCE(155);
      if (lookahead == 'r')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(157);
      if (lookahead == 'u')
        ADVANCE(158);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(281);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 149},
  [2] = {.lex_state = 149},
  [3] = {.lex_state = 149},
  [4] = {.lex_state = 149},
  [5] = {.lex_state = 149},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 149},
  [8] = {.lex_state = 149},
  [9] = {.lex_state = 149},
  [10] = {.lex_state = 149},
  [11] = {.lex_state = 149},
  [12] = {.lex_state = 150},
  [13] = {.lex_state = 149},
  [14] = {.lex_state = 227},
  [15] = {.lex_state = 149},
  [16] = {.lex_state = 228},
  [17] = {.lex_state = 149},
  [18] = {.lex_state = 228},
  [19] = {.lex_state = 150},
  [20] = {.lex_state = 149},
  [21] = {.lex_state = 149},
  [22] = {.lex_state = 227},
  [23] = {.lex_state = 229},
  [24] = {.lex_state = 149},
  [25] = {.lex_state = 150},
  [26] = {.lex_state = 149},
  [27] = {.lex_state = 227},
  [28] = {.lex_state = 280},
  [29] = {.lex_state = 280},
  [30] = {.lex_state = 281},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_dim] = ACTIONS(1),
    [sym__color_index] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_background_DASHcolor] = ACTIONS(1),
    [sym_node_kind] = ACTIONS(1),
    [anon_sym_PIPE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [anon_sym_blink] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [sym__rgb_color] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [sym_token] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [anon_sym_strikethrough] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_colour] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_background_DASHcolour] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE_PIPE] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_selector] = STATE(7),
    [sym__terminal_selector] = STATE(3),
    [sym_source_file] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym__selector_node] = STATE(5),
    [sym__selector_scope] = STATE(5),
    [sym_rule] = STATE(4),
    [sym__selectors] = STATE(7),
    [sym_direct_child] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_token] = ACTIONS(7),
    [sym_node_kind] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LBRACE_PIPE] = ACTIONS(15),
    [sym_token] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(15),
    [sym_node_kind] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_PIPE] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_selector] = STATE(7),
    [sym__terminal_selector] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym__selector_scope] = STATE(5),
    [sym__selector_node] = STATE(5),
    [sym_rule] = STATE(9),
    [sym__selectors] = STATE(7),
    [sym_direct_child] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_token] = ACTIONS(7),
    [sym_node_kind] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__selector_node] = STATE(10),
    [sym_direct_child] = STATE(10),
    [sym__terminal_selector] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [sym_node_kind] = ACTIONS(9),
    [sym_token] = ACTIONS(25),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_important_styles] = STATE(15),
    [sym__style_block] = STATE(15),
    [sym_styles] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LBRACE_PIPE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_comment] = ACTIONS(3),
    [sym_node_kind] = ACTIONS(35),
    [sym_token] = ACTIONS(35),
  },
  [9] = {
    [sym_selector] = STATE(7),
    [sym__terminal_selector] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym__selector_scope] = STATE(5),
    [sym__selector_node] = STATE(5),
    [sym_rule] = STATE(9),
    [sym__selectors] = STATE(7),
    [sym_direct_child] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_token] = ACTIONS(39),
    [sym_node_kind] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_comment] = ACTIONS(3),
    [sym_node_kind] = ACTIONS(45),
    [sym_token] = ACTIONS(45),
  },
  [11] = {
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_LBRACE_PIPE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_style] = STATE(19),
    [sym_style_name] = STATE(18),
    [aux_sym_styles_repeat1] = STATE(19),
    [anon_sym_dim] = ACTIONS(51),
    [anon_sym_italic] = ACTIONS(51),
    [anon_sym_blink] = ACTIONS(51),
    [anon_sym_underline] = ACTIONS(51),
    [anon_sym_reverse] = ACTIONS(51),
    [anon_sym_colour] = ACTIONS(51),
    [anon_sym_bold] = ACTIONS(51),
    [anon_sym_background_DASHcolour] = ACTIONS(51),
    [anon_sym_strikethrough] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_color] = ACTIONS(51),
    [anon_sym_background_DASHcolor] = ACTIONS(51),
    [anon_sym_hidden] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__selector_node] = STATE(5),
    [sym_selector] = STATE(20),
    [sym__terminal_selector] = STATE(3),
    [sym_direct_child] = STATE(5),
    [sym__selector_scope] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [sym_node_kind] = ACTIONS(9),
    [sym_token] = ACTIONS(7),
  },
  [14] = {
    [sym_style] = STATE(22),
    [sym_style_name] = STATE(18),
    [aux_sym_styles_repeat1] = STATE(22),
    [anon_sym_dim] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [anon_sym_italic] = ACTIONS(51),
    [anon_sym_blink] = ACTIONS(51),
    [anon_sym_underline] = ACTIONS(51),
    [anon_sym_reverse] = ACTIONS(51),
    [anon_sym_colour] = ACTIONS(51),
    [anon_sym_bold] = ACTIONS(51),
    [anon_sym_background_DASHcolour] = ACTIONS(51),
    [anon_sym_strikethrough] = ACTIONS(51),
    [anon_sym_color] = ACTIONS(51),
    [anon_sym_background_DASHcolor] = ACTIONS(51),
    [anon_sym_hidden] = ACTIONS(51),
    [anon_sym_PIPE_RBRACE] = ACTIONS(55),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_token] = ACTIONS(57),
    [sym_node_kind] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [anon_sym_COLON] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_token] = ACTIONS(61),
    [sym_node_kind] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [anon_sym_COLON] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_style] = STATE(25),
    [sym_style_name] = STATE(18),
    [aux_sym_styles_repeat1] = STATE(25),
    [anon_sym_dim] = ACTIONS(51),
    [anon_sym_italic] = ACTIONS(51),
    [anon_sym_blink] = ACTIONS(51),
    [anon_sym_underline] = ACTIONS(51),
    [anon_sym_reverse] = ACTIONS(51),
    [anon_sym_colour] = ACTIONS(51),
    [anon_sym_bold] = ACTIONS(51),
    [anon_sym_background_DASHcolour] = ACTIONS(51),
    [anon_sym_strikethrough] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_color] = ACTIONS(51),
    [anon_sym_background_DASHcolor] = ACTIONS(51),
    [anon_sym_hidden] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_LBRACE_PIPE] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_token] = ACTIONS(71),
    [sym_node_kind] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_style] = STATE(27),
    [sym_style_name] = STATE(18),
    [aux_sym_styles_repeat1] = STATE(27),
    [anon_sym_dim] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [anon_sym_italic] = ACTIONS(51),
    [anon_sym_blink] = ACTIONS(51),
    [anon_sym_underline] = ACTIONS(51),
    [anon_sym_reverse] = ACTIONS(51),
    [anon_sym_colour] = ACTIONS(51),
    [anon_sym_bold] = ACTIONS(51),
    [anon_sym_background_DASHcolour] = ACTIONS(51),
    [anon_sym_strikethrough] = ACTIONS(51),
    [anon_sym_color] = ACTIONS(51),
    [anon_sym_background_DASHcolor] = ACTIONS(51),
    [anon_sym_hidden] = ACTIONS(51),
    [anon_sym_PIPE_RBRACE] = ACTIONS(73),
  },
  [23] = {
    [sym__boolean_value] = STATE(28),
    [sym__color_literal] = STATE(28),
    [sym_style_value] = STATE(29),
    [anon_sym_blue] = ACTIONS(75),
    [anon_sym_white] = ACTIONS(75),
    [sym__color_index] = ACTIONS(75),
    [anon_sym_green] = ACTIONS(75),
    [anon_sym_cyan] = ACTIONS(75),
    [anon_sym_yellow] = ACTIONS(75),
    [sym__rgb_color] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(75),
    [anon_sym_purple] = ACTIONS(75),
    [anon_sym_red] = ACTIONS(75),
    [anon_sym_black] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(75),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_token] = ACTIONS(77),
    [sym_node_kind] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_style] = STATE(25),
    [sym_style_name] = STATE(18),
    [aux_sym_styles_repeat1] = STATE(25),
    [anon_sym_dim] = ACTIONS(79),
    [anon_sym_italic] = ACTIONS(79),
    [anon_sym_blink] = ACTIONS(79),
    [anon_sym_underline] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_colour] = ACTIONS(79),
    [anon_sym_bold] = ACTIONS(79),
    [anon_sym_background_DASHcolour] = ACTIONS(79),
    [anon_sym_strikethrough] = ACTIONS(79),
    [anon_sym_reverse] = ACTIONS(79),
    [anon_sym_color] = ACTIONS(79),
    [anon_sym_background_DASHcolor] = ACTIONS(79),
    [anon_sym_hidden] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_token] = ACTIONS(84),
    [sym_node_kind] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_style] = STATE(27),
    [sym_style_name] = STATE(18),
    [aux_sym_styles_repeat1] = STATE(27),
    [anon_sym_dim] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_italic] = ACTIONS(79),
    [anon_sym_blink] = ACTIONS(79),
    [anon_sym_underline] = ACTIONS(79),
    [anon_sym_reverse] = ACTIONS(79),
    [anon_sym_colour] = ACTIONS(79),
    [anon_sym_bold] = ACTIONS(79),
    [anon_sym_background_DASHcolour] = ACTIONS(79),
    [anon_sym_strikethrough] = ACTIONS(79),
    [anon_sym_color] = ACTIONS(79),
    [anon_sym_background_DASHcolor] = ACTIONS(79),
    [anon_sym_hidden] = ACTIONS(79),
    [anon_sym_PIPE_RBRACE] = ACTIONS(82),
  },
  [28] = {
    [anon_sym_SEMI] = ACTIONS(86),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_SEMI] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_dim] = ACTIONS(90),
    [anon_sym_italic] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_strikethrough] = ACTIONS(90),
    [anon_sym_color] = ACTIONS(90),
    [anon_sym_background_DASHcolor] = ACTIONS(90),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PIPE_RBRACE] = ACTIONS(90),
    [anon_sym_blink] = ACTIONS(90),
    [anon_sym_underline] = ACTIONS(90),
    [anon_sym_reverse] = ACTIONS(90),
    [anon_sym_colour] = ACTIONS(90),
    [anon_sym_bold] = ACTIONS(90),
    [anon_sym_background_DASHcolour] = ACTIONS(90),
    [anon_sym_hidden] = ACTIONS(90),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, REDUCE(sym__terminal_selector, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym__terminal_selector, 1),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym__selector_node, 1),
  [19] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [29] = {.count = 1, .reusable = false}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(13),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_direct_child, 2),
  [37] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym__selector_scope, 2),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [51] = {.count = 1, .reusable = true}, SHIFT(16),
  [53] = {.count = 1, .reusable = true}, SHIFT(17),
  [55] = {.count = 1, .reusable = true}, SHIFT(21),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_style_name, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 2),
  [63] = {.count = 1, .reusable = true}, SHIFT(23),
  [65] = {.count = 1, .reusable = true}, SHIFT(24),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym__selectors, 3),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 3),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_important_styles, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(26),
  [75] = {.count = 1, .reusable = true}, SHIFT(28),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_styles, 3),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_styles_repeat1, 2), SHIFT_REPEAT(16),
  [82] = {.count = 1, .reusable = true}, REDUCE(aux_sym_styles_repeat1, 2),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_important_styles, 3),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_style_value, 1),
  [88] = {.count = 1, .reusable = true}, SHIFT(30),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_style, 4),
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
