#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 23
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_COMMA = 3,
  anon_sym_COLON = 4,
  anon_sym_SEMI = 5,
  sym_node_kind = 6,
  sym_token = 7,
  anon_sym_colour = 8,
  anon_sym_color = 9,
  anon_sym_background_DASHcolour = 10,
  anon_sym_background_DASHcolor = 11,
  anon_sym_italic = 12,
  anon_sym_bold = 13,
  anon_sym_underline = 14,
  anon_sym_strikethrough = 15,
  anon_sym_hidden = 16,
  anon_sym_blink = 17,
  anon_sym_dim = 18,
  anon_sym_reverse = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  anon_sym_red = 22,
  anon_sym_blue = 23,
  anon_sym_green = 24,
  anon_sym_purple = 25,
  anon_sym_yellow = 26,
  anon_sym_black = 27,
  anon_sym_white = 28,
  anon_sym_cyan = 29,
  aux_sym_style_value_token1 = 30,
  aux_sym_style_value_token2 = 31,
  sym_comment = 32,
  sym_source_file = 33,
  sym_rule = 34,
  sym__selectors = 35,
  sym_selector = 36,
  sym_style = 37,
  sym_style_name = 38,
  sym_style_value = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_rule_repeat1 = 41,
  aux_sym_selector_repeat1 = 42,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
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
  [sym_style] = "style",
  [sym_style_name] = "style_name",
  [sym_style_value] = "style_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_selector_repeat1] = "selector_repeat1",
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
  [aux_sym_selector_repeat1] = {
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
      if (lookahead == 'b')
        ADVANCE(10);
      if (lookahead == 'c')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(12);
      if (lookahead == 'f')
        ADVANCE(13);
      if (lookahead == 'g')
        ADVANCE(14);
      if (lookahead == 'h')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(16);
      if (lookahead == 'p')
        ADVANCE(17);
      if (lookahead == 'r')
        ADVANCE(18);
      if (lookahead == 's')
        ADVANCE(19);
      if (lookahead == 't')
        ADVANCE(20);
      if (lookahead == 'u')
        ADVANCE(21);
      if (lookahead == 'w')
        ADVANCE(22);
      if (lookahead == 'y')
        ADVANCE(23);
      if (lookahead == '{')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(29);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(30);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      if (lookahead == '*')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(32);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_node_kind);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '5')
        ADVANCE(33);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(26);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(35);
      if (lookahead == 'l')
        ADVANCE(36);
      if (lookahead == 'o')
        ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'y')
        ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'h')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_node_kind);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '"')
        ADVANCE(52);
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == '*')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_node_kind);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(34);
      if (lookahead == '-' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(56);
      if (lookahead == 'i')
        ADVANCE(57);
      if (lookahead == 'u')
        ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
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
        ADVANCE(27);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'm')
        ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == '*')
        ADVANCE(54);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead != 0)
        ADVANCE(31);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
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
        ADVANCE(27);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_dim);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 's')
        ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'p')
        ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
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
        ADVANCE(27);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(95);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'g')
        ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
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
        ADVANCE(27);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(99);
      if (lookahead == 'u')
        ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_cyan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(111);
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
        ADVANCE(27);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_blink);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 's')
        ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_white);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_italic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_purple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_style_value_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'h')
        ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
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
        ADVANCE(27);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_underline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '-')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'g')
        ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'h')
        ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(142);
      if (lookahead == 'u')
        ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 145:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == '{')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 146:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(147);
      if (lookahead == 'c')
        ADVANCE(148);
      if (lookahead == 'd')
        ADVANCE(149);
      if (lookahead == 'h')
        ADVANCE(150);
      if (lookahead == 'i')
        ADVANCE(151);
      if (lookahead == 'r')
        ADVANCE(152);
      if (lookahead == 's')
        ADVANCE(153);
      if (lookahead == 'u')
        ADVANCE(154);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
      END_STATE();
    case 147:
      if (lookahead == 'a')
        ADVANCE(155);
      if (lookahead == 'l')
        ADVANCE(156);
      if (lookahead == 'o')
        ADVANCE(157);
      END_STATE();
    case 148:
      if (lookahead == 'o')
        ADVANCE(158);
      END_STATE();
    case 149:
      if (lookahead == 'i')
        ADVANCE(159);
      END_STATE();
    case 150:
      if (lookahead == 'i')
        ADVANCE(160);
      END_STATE();
    case 151:
      if (lookahead == 't')
        ADVANCE(161);
      END_STATE();
    case 152:
      if (lookahead == 'e')
        ADVANCE(162);
      END_STATE();
    case 153:
      if (lookahead == 't')
        ADVANCE(163);
      END_STATE();
    case 154:
      if (lookahead == 'n')
        ADVANCE(164);
      END_STATE();
    case 155:
      if (lookahead == 'c')
        ADVANCE(165);
      END_STATE();
    case 156:
      if (lookahead == 'i')
        ADVANCE(166);
      END_STATE();
    case 157:
      if (lookahead == 'l')
        ADVANCE(167);
      END_STATE();
    case 158:
      if (lookahead == 'l')
        ADVANCE(168);
      END_STATE();
    case 159:
      if (lookahead == 'm')
        ADVANCE(169);
      END_STATE();
    case 160:
      if (lookahead == 'd')
        ADVANCE(170);
      END_STATE();
    case 161:
      if (lookahead == 'a')
        ADVANCE(171);
      END_STATE();
    case 162:
      if (lookahead == 'v')
        ADVANCE(172);
      END_STATE();
    case 163:
      if (lookahead == 'r')
        ADVANCE(173);
      END_STATE();
    case 164:
      if (lookahead == 'd')
        ADVANCE(174);
      END_STATE();
    case 165:
      if (lookahead == 'k')
        ADVANCE(175);
      END_STATE();
    case 166:
      if (lookahead == 'n')
        ADVANCE(176);
      END_STATE();
    case 167:
      if (lookahead == 'd')
        ADVANCE(177);
      END_STATE();
    case 168:
      if (lookahead == 'o')
        ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 170:
      if (lookahead == 'd')
        ADVANCE(179);
      END_STATE();
    case 171:
      if (lookahead == 'l')
        ADVANCE(180);
      END_STATE();
    case 172:
      if (lookahead == 'e')
        ADVANCE(181);
      END_STATE();
    case 173:
      if (lookahead == 'i')
        ADVANCE(182);
      END_STATE();
    case 174:
      if (lookahead == 'e')
        ADVANCE(183);
      END_STATE();
    case 175:
      if (lookahead == 'g')
        ADVANCE(184);
      END_STATE();
    case 176:
      if (lookahead == 'k')
        ADVANCE(185);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 178:
      if (lookahead == 'r')
        ADVANCE(186);
      if (lookahead == 'u')
        ADVANCE(187);
      END_STATE();
    case 179:
      if (lookahead == 'e')
        ADVANCE(188);
      END_STATE();
    case 180:
      if (lookahead == 'i')
        ADVANCE(189);
      END_STATE();
    case 181:
      if (lookahead == 'r')
        ADVANCE(190);
      END_STATE();
    case 182:
      if (lookahead == 'k')
        ADVANCE(191);
      END_STATE();
    case 183:
      if (lookahead == 'r')
        ADVANCE(192);
      END_STATE();
    case 184:
      if (lookahead == 'r')
        ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_blink);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 187:
      if (lookahead == 'r')
        ADVANCE(194);
      END_STATE();
    case 188:
      if (lookahead == 'n')
        ADVANCE(195);
      END_STATE();
    case 189:
      if (lookahead == 'c')
        ADVANCE(196);
      END_STATE();
    case 190:
      if (lookahead == 's')
        ADVANCE(197);
      END_STATE();
    case 191:
      if (lookahead == 'e')
        ADVANCE(198);
      END_STATE();
    case 192:
      if (lookahead == 'l')
        ADVANCE(199);
      END_STATE();
    case 193:
      if (lookahead == 'o')
        ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 197:
      if (lookahead == 'e')
        ADVANCE(201);
      END_STATE();
    case 198:
      if (lookahead == 't')
        ADVANCE(202);
      END_STATE();
    case 199:
      if (lookahead == 'i')
        ADVANCE(203);
      END_STATE();
    case 200:
      if (lookahead == 'u')
        ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 202:
      if (lookahead == 'h')
        ADVANCE(205);
      END_STATE();
    case 203:
      if (lookahead == 'n')
        ADVANCE(206);
      END_STATE();
    case 204:
      if (lookahead == 'n')
        ADVANCE(207);
      END_STATE();
    case 205:
      if (lookahead == 'r')
        ADVANCE(208);
      END_STATE();
    case 206:
      if (lookahead == 'e')
        ADVANCE(209);
      END_STATE();
    case 207:
      if (lookahead == 'd')
        ADVANCE(210);
      END_STATE();
    case 208:
      if (lookahead == 'o')
        ADVANCE(211);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 210:
      if (lookahead == '-')
        ADVANCE(212);
      END_STATE();
    case 211:
      if (lookahead == 'u')
        ADVANCE(213);
      END_STATE();
    case 212:
      if (lookahead == 'c')
        ADVANCE(214);
      END_STATE();
    case 213:
      if (lookahead == 'g')
        ADVANCE(215);
      END_STATE();
    case 214:
      if (lookahead == 'o')
        ADVANCE(216);
      END_STATE();
    case 215:
      if (lookahead == 'h')
        ADVANCE(217);
      END_STATE();
    case 216:
      if (lookahead == 'l')
        ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      END_STATE();
    case 218:
      if (lookahead == 'o')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'r')
        ADVANCE(220);
      if (lookahead == 'u')
        ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      END_STATE();
    case 221:
      if (lookahead == 'r')
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      END_STATE();
    case 223:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      END_STATE();
    case 224:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == '1')
        ADVANCE(225);
      if (lookahead == '2')
        ADVANCE(226);
      if (lookahead == 'b')
        ADVANCE(227);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'f')
        ADVANCE(229);
      if (lookahead == 'g')
        ADVANCE(230);
      if (lookahead == 'p')
        ADVANCE(231);
      if (lookahead == 'r')
        ADVANCE(232);
      if (lookahead == 't')
        ADVANCE(233);
      if (lookahead == 'w')
        ADVANCE(234);
      if (lookahead == 'y')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(224);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      if (lookahead == '5')
        ADVANCE(237);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(236);
      END_STATE();
    case 227:
      if (lookahead == 'l')
        ADVANCE(239);
      END_STATE();
    case 228:
      if (lookahead == 'y')
        ADVANCE(240);
      END_STATE();
    case 229:
      if (lookahead == 'a')
        ADVANCE(241);
      END_STATE();
    case 230:
      if (lookahead == 'r')
        ADVANCE(242);
      END_STATE();
    case 231:
      if (lookahead == 'u')
        ADVANCE(243);
      END_STATE();
    case 232:
      if (lookahead == 'e')
        ADVANCE(244);
      END_STATE();
    case 233:
      if (lookahead == 'r')
        ADVANCE(245);
      END_STATE();
    case 234:
      if (lookahead == 'h')
        ADVANCE(246);
      END_STATE();
    case 235:
      if (lookahead == 'e')
        ADVANCE(247);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      END_STATE();
    case 239:
      if (lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'u')
        ADVANCE(249);
      END_STATE();
    case 240:
      if (lookahead == 'a')
        ADVANCE(250);
      END_STATE();
    case 241:
      if (lookahead == 'l')
        ADVANCE(251);
      END_STATE();
    case 242:
      if (lookahead == 'e')
        ADVANCE(252);
      END_STATE();
    case 243:
      if (lookahead == 'r')
        ADVANCE(253);
      END_STATE();
    case 244:
      if (lookahead == 'd')
        ADVANCE(254);
      END_STATE();
    case 245:
      if (lookahead == 'u')
        ADVANCE(255);
      END_STATE();
    case 246:
      if (lookahead == 'i')
        ADVANCE(256);
      END_STATE();
    case 247:
      if (lookahead == 'l')
        ADVANCE(257);
      END_STATE();
    case 248:
      if (lookahead == 'c')
        ADVANCE(258);
      END_STATE();
    case 249:
      if (lookahead == 'e')
        ADVANCE(259);
      END_STATE();
    case 250:
      if (lookahead == 'n')
        ADVANCE(260);
      END_STATE();
    case 251:
      if (lookahead == 's')
        ADVANCE(261);
      END_STATE();
    case 252:
      if (lookahead == 'e')
        ADVANCE(262);
      END_STATE();
    case 253:
      if (lookahead == 'p')
        ADVANCE(263);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 255:
      if (lookahead == 'e')
        ADVANCE(264);
      END_STATE();
    case 256:
      if (lookahead == 't')
        ADVANCE(265);
      END_STATE();
    case 257:
      if (lookahead == 'l')
        ADVANCE(266);
      END_STATE();
    case 258:
      if (lookahead == 'k')
        ADVANCE(267);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 261:
      if (lookahead == 'e')
        ADVANCE(268);
      END_STATE();
    case 262:
      if (lookahead == 'n')
        ADVANCE(269);
      END_STATE();
    case 263:
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 265:
      if (lookahead == 'e')
        ADVANCE(271);
      END_STATE();
    case 266:
      if (lookahead == 'o')
        ADVANCE(272);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 270:
      if (lookahead == 'e')
        ADVANCE(273);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 272:
      if (lookahead == 'w')
        ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_purple);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 275:
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(275);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 145},
  [2] = {.lex_state = 145},
  [3] = {.lex_state = 145},
  [4] = {.lex_state = 145},
  [5] = {.lex_state = 145},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 145},
  [8] = {.lex_state = 145},
  [9] = {.lex_state = 146},
  [10] = {.lex_state = 145},
  [11] = {.lex_state = 145},
  [12] = {.lex_state = 223},
  [13] = {.lex_state = 145},
  [14] = {.lex_state = 146},
  [15] = {.lex_state = 223},
  [16] = {.lex_state = 145},
  [17] = {.lex_state = 145},
  [18] = {.lex_state = 146},
  [19] = {.lex_state = 224},
  [20] = {.lex_state = 275},
  [21] = {.lex_state = 275},
  [22] = {.lex_state = 146},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_colour] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [aux_sym_style_value_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_blink] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_background_DASHcolour] = ACTIONS(1),
    [anon_sym_strikethrough] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_node_kind] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_cyan] = ACTIONS(1),
    [anon_sym_dim] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_background_DASHcolor] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_token] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [aux_sym_style_value_token1] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
  },
  [1] = {
    [sym_selector] = STATE(4),
    [aux_sym_selector_repeat1] = STATE(3),
    [sym__selectors] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_rule] = STATE(5),
    [sym_source_file] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_token] = ACTIONS(7),
    [sym_node_kind] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [aux_sym_selector_repeat1] = STATE(8),
    [sym_token] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_node_kind] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_selector] = STATE(4),
    [aux_sym_selector_repeat1] = STATE(3),
    [sym__selectors] = STATE(4),
    [sym_rule] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_token] = ACTIONS(7),
    [sym_node_kind] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [aux_sym_selector_repeat1] = STATE(8),
    [sym_token] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_node_kind] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_style_name] = STATE(15),
    [aux_sym_rule_repeat1] = STATE(14),
    [sym_style] = STATE(14),
    [sym_comment] = ACTIONS(3),
    [anon_sym_background_DASHcolour] = ACTIONS(32),
    [anon_sym_strikethrough] = ACTIONS(32),
    [anon_sym_blink] = ACTIONS(32),
    [anon_sym_background_DASHcolor] = ACTIONS(32),
    [anon_sym_hidden] = ACTIONS(32),
    [anon_sym_bold] = ACTIONS(32),
    [anon_sym_dim] = ACTIONS(32),
    [anon_sym_RBRACE] = ACTIONS(34),
    [anon_sym_italic] = ACTIONS(32),
    [anon_sym_color] = ACTIONS(32),
    [anon_sym_underline] = ACTIONS(32),
    [anon_sym_reverse] = ACTIONS(32),
    [anon_sym_colour] = ACTIONS(32),
  },
  [10] = {
    [sym_selector] = STATE(16),
    [aux_sym_selector_repeat1] = STATE(3),
    [sym_node_kind] = ACTIONS(9),
    [sym_token] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_selector] = STATE(4),
    [aux_sym_selector_repeat1] = STATE(3),
    [sym__selectors] = STATE(4),
    [sym_rule] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_token] = ACTIONS(36),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_node_kind] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(44),
  },
  [13] = {
    [sym_token] = ACTIONS(46),
    [ts_builtin_sym_end] = ACTIONS(46),
    [sym_node_kind] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_style_name] = STATE(15),
    [aux_sym_rule_repeat1] = STATE(18),
    [sym_style] = STATE(18),
    [sym_comment] = ACTIONS(3),
    [anon_sym_background_DASHcolour] = ACTIONS(32),
    [anon_sym_strikethrough] = ACTIONS(32),
    [anon_sym_blink] = ACTIONS(32),
    [anon_sym_background_DASHcolor] = ACTIONS(32),
    [anon_sym_hidden] = ACTIONS(32),
    [anon_sym_bold] = ACTIONS(32),
    [anon_sym_dim] = ACTIONS(32),
    [anon_sym_RBRACE] = ACTIONS(48),
    [anon_sym_italic] = ACTIONS(32),
    [anon_sym_color] = ACTIONS(32),
    [anon_sym_underline] = ACTIONS(32),
    [anon_sym_reverse] = ACTIONS(32),
    [anon_sym_colour] = ACTIONS(32),
  },
  [15] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(50),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(52),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_token] = ACTIONS(54),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_node_kind] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_style_name] = STATE(15),
    [aux_sym_rule_repeat1] = STATE(18),
    [sym_style] = STATE(18),
    [sym_comment] = ACTIONS(3),
    [anon_sym_background_DASHcolour] = ACTIONS(56),
    [anon_sym_strikethrough] = ACTIONS(56),
    [anon_sym_blink] = ACTIONS(56),
    [anon_sym_background_DASHcolor] = ACTIONS(56),
    [anon_sym_hidden] = ACTIONS(56),
    [anon_sym_bold] = ACTIONS(56),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_dim] = ACTIONS(56),
    [anon_sym_italic] = ACTIONS(56),
    [anon_sym_color] = ACTIONS(56),
    [anon_sym_underline] = ACTIONS(56),
    [anon_sym_reverse] = ACTIONS(56),
    [anon_sym_colour] = ACTIONS(56),
  },
  [19] = {
    [sym_style_value] = STATE(21),
    [anon_sym_false] = ACTIONS(61),
    [anon_sym_yellow] = ACTIONS(61),
    [aux_sym_style_value_token2] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_red] = ACTIONS(61),
    [anon_sym_black] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [anon_sym_cyan] = ACTIONS(61),
    [anon_sym_blue] = ACTIONS(61),
    [anon_sym_white] = ACTIONS(61),
    [anon_sym_purple] = ACTIONS(61),
    [aux_sym_style_value_token1] = ACTIONS(61),
    [anon_sym_green] = ACTIONS(61),
  },
  [20] = {
    [anon_sym_SEMI] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_background_DASHcolour] = ACTIONS(67),
    [anon_sym_strikethrough] = ACTIONS(67),
    [anon_sym_blink] = ACTIONS(67),
    [anon_sym_background_DASHcolor] = ACTIONS(67),
    [anon_sym_hidden] = ACTIONS(67),
    [anon_sym_bold] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_dim] = ACTIONS(67),
    [anon_sym_italic] = ACTIONS(67),
    [anon_sym_color] = ACTIONS(67),
    [anon_sym_underline] = ACTIONS(67),
    [anon_sym_reverse] = ACTIONS(67),
    [anon_sym_colour] = ACTIONS(67),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [23] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(8),
  [32] = {.count = 1, .reusable = true}, SHIFT(12),
  [34] = {.count = 1, .reusable = true}, SHIFT(13),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_style_name, 1),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 3),
  [48] = {.count = 1, .reusable = true}, SHIFT(17),
  [50] = {.count = 1, .reusable = true}, SHIFT(19),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym__selectors, 3),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 4),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(12),
  [59] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rule_repeat1, 2),
  [61] = {.count = 1, .reusable = true}, SHIFT(20),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_style_value, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(22),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_style, 4),
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
