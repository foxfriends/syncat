#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 25
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_COMMA = 3,
  anon_sym_GT = 4,
  anon_sym_COLON = 5,
  anon_sym_SEMI = 6,
  sym_node_kind = 7,
  sym_token = 8,
  anon_sym_colour = 9,
  anon_sym_color = 10,
  anon_sym_background_DASHcolour = 11,
  anon_sym_background_DASHcolor = 12,
  anon_sym_italic = 13,
  anon_sym_bold = 14,
  anon_sym_underline = 15,
  anon_sym_strikethrough = 16,
  anon_sym_hidden = 17,
  anon_sym_blink = 18,
  anon_sym_dim = 19,
  anon_sym_reverse = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  anon_sym_red = 23,
  anon_sym_blue = 24,
  anon_sym_green = 25,
  anon_sym_purple = 26,
  anon_sym_yellow = 27,
  anon_sym_black = 28,
  anon_sym_white = 29,
  anon_sym_cyan = 30,
  aux_sym_style_value_token1 = 31,
  aux_sym_style_value_token2 = 32,
  sym_comment = 33,
  sym_source_file = 34,
  sym_rule = 35,
  sym__selectors = 36,
  sym_selector = 37,
  sym__kind_list = 38,
  sym__specified_node = 39,
  sym_direct_child = 40,
  sym_style = 41,
  sym_style_name = 42,
  sym_style_value = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_rule_repeat1 = 45,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_node_kind] = "node_kind",
  [sym_token] = "token",
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
  [aux_sym_style_value_token1] = "style_value_token1",
  [aux_sym_style_value_token2] = "style_value_token2",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_rule] = "rule",
  [sym__selectors] = "_selectors",
  [sym_selector] = "selector",
  [sym__kind_list] = "_kind_list",
  [sym__specified_node] = "_specified_node",
  [sym_direct_child] = "direct_child",
  [sym_style] = "style",
  [sym_style_name] = "style_name",
  [sym_style_value] = "style_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [sym_node_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
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
  [aux_sym_style_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_style_value_token2] = {
    .visible = false,
    .named = false,
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
  [sym__kind_list] = {
    .visible = false,
    .named = true,
  },
  [sym__specified_node] = {
    .visible = false,
    .named = true,
  },
  [sym_direct_child] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat1] = {
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
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(30);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      if (lookahead == '*')
        ADVANCE(32);
      if (lookahead == '/')
        ADVANCE(33);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_node_kind);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '5')
        ADVANCE(34);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(27);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
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
        ADVANCE(36);
      if (lookahead == 'l')
        ADVANCE(37);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(39);
      if (lookahead == 'y')
        ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'h')
        ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_node_kind);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '"')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == '*')
        ADVANCE(55);
      if (lookahead != 0)
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_node_kind);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(35);
      if (lookahead == '-' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(57);
      if (lookahead == 'i')
        ADVANCE(58);
      if (lookahead == 'u')
        ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'm')
        ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(69);
      if (lookahead == 'v')
        ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == '*')
        ADVANCE(55);
      if (lookahead == '/')
        ADVANCE(77);
      if (lookahead != 0)
        ADVANCE(32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_dim);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 's')
        ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'p')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
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
        ADVANCE(28);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(96);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'g')
        ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(100);
      if (lookahead == 'u')
        ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_cyan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(112);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_blink);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 's')
        ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_white);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'w')
        ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_italic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_purple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_style_value_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'h')
        ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_underline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '-')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'g')
        ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'h')
        ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(143);
      if (lookahead == 'u')
        ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 146:
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
        SKIP(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 147:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(148);
      if (lookahead == 'c')
        ADVANCE(149);
      if (lookahead == 'd')
        ADVANCE(150);
      if (lookahead == 'h')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(152);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 's')
        ADVANCE(154);
      if (lookahead == 'u')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(147);
      END_STATE();
    case 148:
      if (lookahead == 'a')
        ADVANCE(156);
      if (lookahead == 'l')
        ADVANCE(157);
      if (lookahead == 'o')
        ADVANCE(158);
      END_STATE();
    case 149:
      if (lookahead == 'o')
        ADVANCE(159);
      END_STATE();
    case 150:
      if (lookahead == 'i')
        ADVANCE(160);
      END_STATE();
    case 151:
      if (lookahead == 'i')
        ADVANCE(161);
      END_STATE();
    case 152:
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 153:
      if (lookahead == 'e')
        ADVANCE(163);
      END_STATE();
    case 154:
      if (lookahead == 't')
        ADVANCE(164);
      END_STATE();
    case 155:
      if (lookahead == 'n')
        ADVANCE(165);
      END_STATE();
    case 156:
      if (lookahead == 'c')
        ADVANCE(166);
      END_STATE();
    case 157:
      if (lookahead == 'i')
        ADVANCE(167);
      END_STATE();
    case 158:
      if (lookahead == 'l')
        ADVANCE(168);
      END_STATE();
    case 159:
      if (lookahead == 'l')
        ADVANCE(169);
      END_STATE();
    case 160:
      if (lookahead == 'm')
        ADVANCE(170);
      END_STATE();
    case 161:
      if (lookahead == 'd')
        ADVANCE(171);
      END_STATE();
    case 162:
      if (lookahead == 'a')
        ADVANCE(172);
      END_STATE();
    case 163:
      if (lookahead == 'v')
        ADVANCE(173);
      END_STATE();
    case 164:
      if (lookahead == 'r')
        ADVANCE(174);
      END_STATE();
    case 165:
      if (lookahead == 'd')
        ADVANCE(175);
      END_STATE();
    case 166:
      if (lookahead == 'k')
        ADVANCE(176);
      END_STATE();
    case 167:
      if (lookahead == 'n')
        ADVANCE(177);
      END_STATE();
    case 168:
      if (lookahead == 'd')
        ADVANCE(178);
      END_STATE();
    case 169:
      if (lookahead == 'o')
        ADVANCE(179);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 171:
      if (lookahead == 'd')
        ADVANCE(180);
      END_STATE();
    case 172:
      if (lookahead == 'l')
        ADVANCE(181);
      END_STATE();
    case 173:
      if (lookahead == 'e')
        ADVANCE(182);
      END_STATE();
    case 174:
      if (lookahead == 'i')
        ADVANCE(183);
      END_STATE();
    case 175:
      if (lookahead == 'e')
        ADVANCE(184);
      END_STATE();
    case 176:
      if (lookahead == 'g')
        ADVANCE(185);
      END_STATE();
    case 177:
      if (lookahead == 'k')
        ADVANCE(186);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 179:
      if (lookahead == 'r')
        ADVANCE(187);
      if (lookahead == 'u')
        ADVANCE(188);
      END_STATE();
    case 180:
      if (lookahead == 'e')
        ADVANCE(189);
      END_STATE();
    case 181:
      if (lookahead == 'i')
        ADVANCE(190);
      END_STATE();
    case 182:
      if (lookahead == 'r')
        ADVANCE(191);
      END_STATE();
    case 183:
      if (lookahead == 'k')
        ADVANCE(192);
      END_STATE();
    case 184:
      if (lookahead == 'r')
        ADVANCE(193);
      END_STATE();
    case 185:
      if (lookahead == 'r')
        ADVANCE(194);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_blink);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 188:
      if (lookahead == 'r')
        ADVANCE(195);
      END_STATE();
    case 189:
      if (lookahead == 'n')
        ADVANCE(196);
      END_STATE();
    case 190:
      if (lookahead == 'c')
        ADVANCE(197);
      END_STATE();
    case 191:
      if (lookahead == 's')
        ADVANCE(198);
      END_STATE();
    case 192:
      if (lookahead == 'e')
        ADVANCE(199);
      END_STATE();
    case 193:
      if (lookahead == 'l')
        ADVANCE(200);
      END_STATE();
    case 194:
      if (lookahead == 'o')
        ADVANCE(201);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 198:
      if (lookahead == 'e')
        ADVANCE(202);
      END_STATE();
    case 199:
      if (lookahead == 't')
        ADVANCE(203);
      END_STATE();
    case 200:
      if (lookahead == 'i')
        ADVANCE(204);
      END_STATE();
    case 201:
      if (lookahead == 'u')
        ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 203:
      if (lookahead == 'h')
        ADVANCE(206);
      END_STATE();
    case 204:
      if (lookahead == 'n')
        ADVANCE(207);
      END_STATE();
    case 205:
      if (lookahead == 'n')
        ADVANCE(208);
      END_STATE();
    case 206:
      if (lookahead == 'r')
        ADVANCE(209);
      END_STATE();
    case 207:
      if (lookahead == 'e')
        ADVANCE(210);
      END_STATE();
    case 208:
      if (lookahead == 'd')
        ADVANCE(211);
      END_STATE();
    case 209:
      if (lookahead == 'o')
        ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 211:
      if (lookahead == '-')
        ADVANCE(213);
      END_STATE();
    case 212:
      if (lookahead == 'u')
        ADVANCE(214);
      END_STATE();
    case 213:
      if (lookahead == 'c')
        ADVANCE(215);
      END_STATE();
    case 214:
      if (lookahead == 'g')
        ADVANCE(216);
      END_STATE();
    case 215:
      if (lookahead == 'o')
        ADVANCE(217);
      END_STATE();
    case 216:
      if (lookahead == 'h')
        ADVANCE(218);
      END_STATE();
    case 217:
      if (lookahead == 'l')
        ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      END_STATE();
    case 219:
      if (lookahead == 'o')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'r')
        ADVANCE(221);
      if (lookahead == 'u')
        ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      END_STATE();
    case 222:
      if (lookahead == 'r')
        ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      END_STATE();
    case 224:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(224);
      END_STATE();
    case 225:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == '1')
        ADVANCE(226);
      if (lookahead == '2')
        ADVANCE(227);
      if (lookahead == 'b')
        ADVANCE(228);
      if (lookahead == 'c')
        ADVANCE(229);
      if (lookahead == 'f')
        ADVANCE(230);
      if (lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'p')
        ADVANCE(232);
      if (lookahead == 'r')
        ADVANCE(233);
      if (lookahead == 't')
        ADVANCE(234);
      if (lookahead == 'w')
        ADVANCE(235);
      if (lookahead == 'y')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(237);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(237);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      if (lookahead == '5')
        ADVANCE(238);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(237);
      END_STATE();
    case 228:
      if (lookahead == 'l')
        ADVANCE(240);
      END_STATE();
    case 229:
      if (lookahead == 'y')
        ADVANCE(241);
      END_STATE();
    case 230:
      if (lookahead == 'a')
        ADVANCE(242);
      END_STATE();
    case 231:
      if (lookahead == 'r')
        ADVANCE(243);
      END_STATE();
    case 232:
      if (lookahead == 'u')
        ADVANCE(244);
      END_STATE();
    case 233:
      if (lookahead == 'e')
        ADVANCE(245);
      END_STATE();
    case 234:
      if (lookahead == 'r')
        ADVANCE(246);
      END_STATE();
    case 235:
      if (lookahead == 'h')
        ADVANCE(247);
      END_STATE();
    case 236:
      if (lookahead == 'e')
        ADVANCE(248);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      END_STATE();
    case 240:
      if (lookahead == 'a')
        ADVANCE(249);
      if (lookahead == 'u')
        ADVANCE(250);
      END_STATE();
    case 241:
      if (lookahead == 'a')
        ADVANCE(251);
      END_STATE();
    case 242:
      if (lookahead == 'l')
        ADVANCE(252);
      END_STATE();
    case 243:
      if (lookahead == 'e')
        ADVANCE(253);
      END_STATE();
    case 244:
      if (lookahead == 'r')
        ADVANCE(254);
      END_STATE();
    case 245:
      if (lookahead == 'd')
        ADVANCE(255);
      END_STATE();
    case 246:
      if (lookahead == 'u')
        ADVANCE(256);
      END_STATE();
    case 247:
      if (lookahead == 'i')
        ADVANCE(257);
      END_STATE();
    case 248:
      if (lookahead == 'l')
        ADVANCE(258);
      END_STATE();
    case 249:
      if (lookahead == 'c')
        ADVANCE(259);
      END_STATE();
    case 250:
      if (lookahead == 'e')
        ADVANCE(260);
      END_STATE();
    case 251:
      if (lookahead == 'n')
        ADVANCE(261);
      END_STATE();
    case 252:
      if (lookahead == 's')
        ADVANCE(262);
      END_STATE();
    case 253:
      if (lookahead == 'e')
        ADVANCE(263);
      END_STATE();
    case 254:
      if (lookahead == 'p')
        ADVANCE(264);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 256:
      if (lookahead == 'e')
        ADVANCE(265);
      END_STATE();
    case 257:
      if (lookahead == 't')
        ADVANCE(266);
      END_STATE();
    case 258:
      if (lookahead == 'l')
        ADVANCE(267);
      END_STATE();
    case 259:
      if (lookahead == 'k')
        ADVANCE(268);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 262:
      if (lookahead == 'e')
        ADVANCE(269);
      END_STATE();
    case 263:
      if (lookahead == 'n')
        ADVANCE(270);
      END_STATE();
    case 264:
      if (lookahead == 'l')
        ADVANCE(271);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 266:
      if (lookahead == 'e')
        ADVANCE(272);
      END_STATE();
    case 267:
      if (lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 271:
      if (lookahead == 'e')
        ADVANCE(274);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 273:
      if (lookahead == 'w')
        ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_purple);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 276:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(276);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 146},
  [2] = {.lex_state = 146},
  [3] = {.lex_state = 146},
  [4] = {.lex_state = 146},
  [5] = {.lex_state = 146},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 146},
  [8] = {.lex_state = 146},
  [9] = {.lex_state = 146},
  [10] = {.lex_state = 146},
  [11] = {.lex_state = 147},
  [12] = {.lex_state = 146},
  [13] = {.lex_state = 146},
  [14] = {.lex_state = 224},
  [15] = {.lex_state = 146},
  [16] = {.lex_state = 224},
  [17] = {.lex_state = 147},
  [18] = {.lex_state = 146},
  [19] = {.lex_state = 225},
  [20] = {.lex_state = 146},
  [21] = {.lex_state = 147},
  [22] = {.lex_state = 276},
  [23] = {.lex_state = 276},
  [24] = {.lex_state = 147},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_true] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_background_DASHcolor] = ACTIONS(1),
    [anon_sym_colour] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_token] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [aux_sym_style_value_token1] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [aux_sym_style_value_token2] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [anon_sym_blink] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_background_DASHcolour] = ACTIONS(1),
    [anon_sym_strikethrough] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_node_kind] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
    [anon_sym_dim] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
  },
  [1] = {
    [sym_selector] = STATE(5),
    [sym__kind_list] = STATE(3),
    [sym_rule] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym__selectors] = STATE(5),
    [sym_source_file] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_node_kind] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_token] = ACTIONS(9),
  },
  [2] = {
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(11),
  },
  [3] = {
    [sym_direct_child] = STATE(9),
    [sym__specified_node] = STATE(9),
    [sym_node_kind] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(11),
    [sym_token] = ACTIONS(17),
  },
  [4] = {
    [sym_selector] = STATE(5),
    [sym__kind_list] = STATE(3),
    [sym_rule] = STATE(10),
    [sym__selectors] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_node_kind] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_token] = ACTIONS(9),
  },
  [5] = {
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [6] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [7] = {
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(27),
  },
  [8] = {
    [sym_comment] = ACTIONS(3),
    [sym_node_kind] = ACTIONS(29),
  },
  [9] = {
    [sym_node_kind] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(31),
    [sym_token] = ACTIONS(31),
  },
  [10] = {
    [sym_selector] = STATE(5),
    [sym__kind_list] = STATE(3),
    [sym_rule] = STATE(10),
    [sym__selectors] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_node_kind] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_token] = ACTIONS(38),
  },
  [11] = {
    [sym_style] = STATE(17),
    [sym_style_name] = STATE(16),
    [aux_sym_rule_repeat1] = STATE(17),
    [anon_sym_color] = ACTIONS(41),
    [anon_sym_underline] = ACTIONS(41),
    [anon_sym_reverse] = ACTIONS(41),
    [anon_sym_hidden] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_background_DASHcolour] = ACTIONS(41),
    [anon_sym_strikethrough] = ACTIONS(41),
    [anon_sym_italic] = ACTIONS(41),
    [anon_sym_blink] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_background_DASHcolor] = ACTIONS(41),
    [anon_sym_colour] = ACTIONS(41),
    [anon_sym_bold] = ACTIONS(41),
    [anon_sym_dim] = ACTIONS(41),
  },
  [12] = {
    [sym_selector] = STATE(18),
    [sym__kind_list] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [sym_node_kind] = ACTIONS(7),
    [sym_token] = ACTIONS(9),
  },
  [13] = {
    [sym_node_kind] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(45),
    [sym_token] = ACTIONS(45),
  },
  [14] = {
    [anon_sym_COLON] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_node_kind] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [sym_token] = ACTIONS(49),
  },
  [16] = {
    [anon_sym_COLON] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_style] = STATE(21),
    [sym_style_name] = STATE(16),
    [aux_sym_rule_repeat1] = STATE(21),
    [anon_sym_color] = ACTIONS(41),
    [anon_sym_underline] = ACTIONS(41),
    [anon_sym_reverse] = ACTIONS(41),
    [anon_sym_hidden] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_background_DASHcolour] = ACTIONS(41),
    [anon_sym_strikethrough] = ACTIONS(41),
    [anon_sym_italic] = ACTIONS(41),
    [anon_sym_blink] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_background_DASHcolor] = ACTIONS(41),
    [anon_sym_colour] = ACTIONS(41),
    [anon_sym_bold] = ACTIONS(41),
    [anon_sym_dim] = ACTIONS(41),
  },
  [18] = {
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(55),
  },
  [19] = {
    [sym_style_value] = STATE(23),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_purple] = ACTIONS(57),
    [aux_sym_style_value_token1] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_yellow] = ACTIONS(57),
    [aux_sym_style_value_token2] = ACTIONS(57),
    [anon_sym_white] = ACTIONS(57),
    [anon_sym_red] = ACTIONS(57),
    [anon_sym_black] = ACTIONS(57),
    [anon_sym_green] = ACTIONS(57),
    [anon_sym_cyan] = ACTIONS(57),
    [anon_sym_blue] = ACTIONS(57),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_node_kind] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [sym_token] = ACTIONS(59),
  },
  [21] = {
    [sym_style] = STATE(21),
    [sym_style_name] = STATE(16),
    [aux_sym_rule_repeat1] = STATE(21),
    [anon_sym_color] = ACTIONS(61),
    [anon_sym_underline] = ACTIONS(61),
    [anon_sym_reverse] = ACTIONS(61),
    [anon_sym_hidden] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [anon_sym_background_DASHcolour] = ACTIONS(61),
    [anon_sym_strikethrough] = ACTIONS(61),
    [anon_sym_italic] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(64),
    [anon_sym_blink] = ACTIONS(61),
    [anon_sym_background_DASHcolor] = ACTIONS(61),
    [anon_sym_colour] = ACTIONS(61),
    [anon_sym_bold] = ACTIONS(61),
    [anon_sym_dim] = ACTIONS(61),
  },
  [22] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(66),
  },
  [23] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(68),
  },
  [24] = {
    [anon_sym_color] = ACTIONS(70),
    [anon_sym_underline] = ACTIONS(70),
    [anon_sym_reverse] = ACTIONS(70),
    [anon_sym_hidden] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
    [anon_sym_background_DASHcolour] = ACTIONS(70),
    [anon_sym_strikethrough] = ACTIONS(70),
    [anon_sym_italic] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_blink] = ACTIONS(70),
    [anon_sym_background_DASHcolor] = ACTIONS(70),
    [anon_sym_colour] = ACTIONS(70),
    [anon_sym_bold] = ACTIONS(70),
    [anon_sym_dim] = ACTIONS(70),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym__kind_list, 2),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.count = 1, .reusable = true}, SHIFT(14),
  [43] = {.count = 1, .reusable = true}, SHIFT(15),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_direct_child, 2),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_style_name, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 3),
  [51] = {.count = 1, .reusable = true}, SHIFT(19),
  [53] = {.count = 1, .reusable = true}, SHIFT(20),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 3),
  [57] = {.count = 1, .reusable = true}, SHIFT(22),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 4),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(14),
  [64] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rule_repeat1, 2),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_style_value, 1),
  [68] = {.count = 1, .reusable = true}, SHIFT(24),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_style, 4),
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
