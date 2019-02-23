#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 26
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_COLON = 3,
  anon_sym_SEMI = 4,
  sym_node_kind = 5,
  sym_token = 6,
  anon_sym_colour = 7,
  anon_sym_color = 8,
  anon_sym_background_DASHcolour = 9,
  anon_sym_background_DASHcolor = 10,
  anon_sym_italic = 11,
  anon_sym_bold = 12,
  anon_sym_underline = 13,
  anon_sym_strikethrough = 14,
  anon_sym_hidden = 15,
  anon_sym_blink = 16,
  anon_sym_dim = 17,
  anon_sym_reverse = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  anon_sym_red = 21,
  anon_sym_blue = 22,
  anon_sym_green = 23,
  anon_sym_purple = 24,
  anon_sym_yellow = 25,
  anon_sym_black = 26,
  anon_sym_white = 27,
  anon_sym_cyan = 28,
  aux_sym_style_value_token1 = 29,
  aux_sym_style_value_token2 = 30,
  sym_comment = 31,
  sym_source_file = 32,
  sym_rule = 33,
  sym_style = 34,
  sym_style_name = 35,
  sym_style_value = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_rule_repeat1 = 38,
  aux_sym_rule_repeat2 = 39,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_style] = "style",
  [sym_style_name] = "style_name",
  [sym_style_value] = "style_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_rule_repeat2] = "rule_repeat2",
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
  [aux_sym_rule_repeat2] = {
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
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(5);
      if (lookahead == '2')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == 'b')
        ADVANCE(9);
      if (lookahead == 'c')
        ADVANCE(10);
      if (lookahead == 'd')
        ADVANCE(11);
      if (lookahead == 'f')
        ADVANCE(12);
      if (lookahead == 'g')
        ADVANCE(13);
      if (lookahead == 'h')
        ADVANCE(14);
      if (lookahead == 'i')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(16);
      if (lookahead == 'r')
        ADVANCE(17);
      if (lookahead == 's')
        ADVANCE(18);
      if (lookahead == 't')
        ADVANCE(19);
      if (lookahead == 'u')
        ADVANCE(20);
      if (lookahead == 'w')
        ADVANCE(21);
      if (lookahead == 'y')
        ADVANCE(22);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(28);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '*')
        ADVANCE(30);
      if (lookahead == '/')
        ADVANCE(31);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_node_kind);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '5')
        ADVANCE(32);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(25);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(34);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == 'o')
        ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(37);
      if (lookahead == 'y')
        ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'h')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_node_kind);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '"')
        ADVANCE(51);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == '*')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_node_kind);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(33);
      if (lookahead == '-' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(55);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'u')
        ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
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
        ADVANCE(26);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'm')
        ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'a')
        ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == '*')
        ADVANCE(53);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_dim);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 's')
        ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'p')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
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
        ADVANCE(26);
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
        ADVANCE(26);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(94);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'g')
        ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
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
        ADVANCE(26);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'u')
        ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_cyan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
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
        ADVANCE(26);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'k')
        ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_blink);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
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
        ADVANCE(26);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_white);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'w')
        ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_colour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_italic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_purple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 't')
        ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'i')
        ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_style_value_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'h')
        ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'n')
        ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
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
        ADVANCE(26);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'e')
        ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'd')
        ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_underline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == '-')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'u')
        ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'c')
        ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'g')
        ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'h')
        ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'l')
        ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'o')
        ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(141);
      if (lookahead == 'u')
        ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_node_kind);
      if (lookahead == 'r')
        ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 144:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 145:
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == 'b')
        ADVANCE(146);
      if (lookahead == 'c')
        ADVANCE(147);
      if (lookahead == 'd')
        ADVANCE(148);
      if (lookahead == 'h')
        ADVANCE(149);
      if (lookahead == 'i')
        ADVANCE(150);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 's')
        ADVANCE(152);
      if (lookahead == 'u')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(145);
      END_STATE();
    case 146:
      if (lookahead == 'a')
        ADVANCE(154);
      if (lookahead == 'l')
        ADVANCE(155);
      if (lookahead == 'o')
        ADVANCE(156);
      END_STATE();
    case 147:
      if (lookahead == 'o')
        ADVANCE(157);
      END_STATE();
    case 148:
      if (lookahead == 'i')
        ADVANCE(158);
      END_STATE();
    case 149:
      if (lookahead == 'i')
        ADVANCE(159);
      END_STATE();
    case 150:
      if (lookahead == 't')
        ADVANCE(160);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(161);
      END_STATE();
    case 152:
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 153:
      if (lookahead == 'n')
        ADVANCE(163);
      END_STATE();
    case 154:
      if (lookahead == 'c')
        ADVANCE(164);
      END_STATE();
    case 155:
      if (lookahead == 'i')
        ADVANCE(165);
      END_STATE();
    case 156:
      if (lookahead == 'l')
        ADVANCE(166);
      END_STATE();
    case 157:
      if (lookahead == 'l')
        ADVANCE(167);
      END_STATE();
    case 158:
      if (lookahead == 'm')
        ADVANCE(168);
      END_STATE();
    case 159:
      if (lookahead == 'd')
        ADVANCE(169);
      END_STATE();
    case 160:
      if (lookahead == 'a')
        ADVANCE(170);
      END_STATE();
    case 161:
      if (lookahead == 'v')
        ADVANCE(171);
      END_STATE();
    case 162:
      if (lookahead == 'r')
        ADVANCE(172);
      END_STATE();
    case 163:
      if (lookahead == 'd')
        ADVANCE(173);
      END_STATE();
    case 164:
      if (lookahead == 'k')
        ADVANCE(174);
      END_STATE();
    case 165:
      if (lookahead == 'n')
        ADVANCE(175);
      END_STATE();
    case 166:
      if (lookahead == 'd')
        ADVANCE(176);
      END_STATE();
    case 167:
      if (lookahead == 'o')
        ADVANCE(177);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 169:
      if (lookahead == 'd')
        ADVANCE(178);
      END_STATE();
    case 170:
      if (lookahead == 'l')
        ADVANCE(179);
      END_STATE();
    case 171:
      if (lookahead == 'e')
        ADVANCE(180);
      END_STATE();
    case 172:
      if (lookahead == 'i')
        ADVANCE(181);
      END_STATE();
    case 173:
      if (lookahead == 'e')
        ADVANCE(182);
      END_STATE();
    case 174:
      if (lookahead == 'g')
        ADVANCE(183);
      END_STATE();
    case 175:
      if (lookahead == 'k')
        ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 177:
      if (lookahead == 'r')
        ADVANCE(185);
      if (lookahead == 'u')
        ADVANCE(186);
      END_STATE();
    case 178:
      if (lookahead == 'e')
        ADVANCE(187);
      END_STATE();
    case 179:
      if (lookahead == 'i')
        ADVANCE(188);
      END_STATE();
    case 180:
      if (lookahead == 'r')
        ADVANCE(189);
      END_STATE();
    case 181:
      if (lookahead == 'k')
        ADVANCE(190);
      END_STATE();
    case 182:
      if (lookahead == 'r')
        ADVANCE(191);
      END_STATE();
    case 183:
      if (lookahead == 'r')
        ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_blink);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 186:
      if (lookahead == 'r')
        ADVANCE(193);
      END_STATE();
    case 187:
      if (lookahead == 'n')
        ADVANCE(194);
      END_STATE();
    case 188:
      if (lookahead == 'c')
        ADVANCE(195);
      END_STATE();
    case 189:
      if (lookahead == 's')
        ADVANCE(196);
      END_STATE();
    case 190:
      if (lookahead == 'e')
        ADVANCE(197);
      END_STATE();
    case 191:
      if (lookahead == 'l')
        ADVANCE(198);
      END_STATE();
    case 192:
      if (lookahead == 'o')
        ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 196:
      if (lookahead == 'e')
        ADVANCE(200);
      END_STATE();
    case 197:
      if (lookahead == 't')
        ADVANCE(201);
      END_STATE();
    case 198:
      if (lookahead == 'i')
        ADVANCE(202);
      END_STATE();
    case 199:
      if (lookahead == 'u')
        ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 201:
      if (lookahead == 'h')
        ADVANCE(204);
      END_STATE();
    case 202:
      if (lookahead == 'n')
        ADVANCE(205);
      END_STATE();
    case 203:
      if (lookahead == 'n')
        ADVANCE(206);
      END_STATE();
    case 204:
      if (lookahead == 'r')
        ADVANCE(207);
      END_STATE();
    case 205:
      if (lookahead == 'e')
        ADVANCE(208);
      END_STATE();
    case 206:
      if (lookahead == 'd')
        ADVANCE(209);
      END_STATE();
    case 207:
      if (lookahead == 'o')
        ADVANCE(210);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 209:
      if (lookahead == '-')
        ADVANCE(211);
      END_STATE();
    case 210:
      if (lookahead == 'u')
        ADVANCE(212);
      END_STATE();
    case 211:
      if (lookahead == 'c')
        ADVANCE(213);
      END_STATE();
    case 212:
      if (lookahead == 'g')
        ADVANCE(214);
      END_STATE();
    case 213:
      if (lookahead == 'o')
        ADVANCE(215);
      END_STATE();
    case 214:
      if (lookahead == 'h')
        ADVANCE(216);
      END_STATE();
    case 215:
      if (lookahead == 'l')
        ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_strikethrough);
      END_STATE();
    case 217:
      if (lookahead == 'o')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'r')
        ADVANCE(219);
      if (lookahead == 'u')
        ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_background_DASHcolor);
      END_STATE();
    case 220:
      if (lookahead == 'r')
        ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_background_DASHcolour);
      END_STATE();
    case 222:
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      END_STATE();
    case 223:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(224);
      if (lookahead == '2')
        ADVANCE(225);
      if (lookahead == 'b')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(228);
      if (lookahead == 'g')
        ADVANCE(229);
      if (lookahead == 'p')
        ADVANCE(230);
      if (lookahead == 'r')
        ADVANCE(231);
      if (lookahead == 't')
        ADVANCE(232);
      if (lookahead == 'w')
        ADVANCE(233);
      if (lookahead == 'y')
        ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(235);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(235);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      if (lookahead == '5')
        ADVANCE(236);
      if (('6' <= lookahead && lookahead <= '9'))
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '4'))
        ADVANCE(235);
      END_STATE();
    case 226:
      if (lookahead == 'l')
        ADVANCE(238);
      END_STATE();
    case 227:
      if (lookahead == 'y')
        ADVANCE(239);
      END_STATE();
    case 228:
      if (lookahead == 'a')
        ADVANCE(240);
      END_STATE();
    case 229:
      if (lookahead == 'r')
        ADVANCE(241);
      END_STATE();
    case 230:
      if (lookahead == 'u')
        ADVANCE(242);
      END_STATE();
    case 231:
      if (lookahead == 'e')
        ADVANCE(243);
      END_STATE();
    case 232:
      if (lookahead == 'r')
        ADVANCE(244);
      END_STATE();
    case 233:
      if (lookahead == 'h')
        ADVANCE(245);
      END_STATE();
    case 234:
      if (lookahead == 'e')
        ADVANCE(246);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      if (('0' <= lookahead && lookahead <= '5'))
        ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_style_value_token2);
      END_STATE();
    case 238:
      if (lookahead == 'a')
        ADVANCE(247);
      if (lookahead == 'u')
        ADVANCE(248);
      END_STATE();
    case 239:
      if (lookahead == 'a')
        ADVANCE(249);
      END_STATE();
    case 240:
      if (lookahead == 'l')
        ADVANCE(250);
      END_STATE();
    case 241:
      if (lookahead == 'e')
        ADVANCE(251);
      END_STATE();
    case 242:
      if (lookahead == 'r')
        ADVANCE(252);
      END_STATE();
    case 243:
      if (lookahead == 'd')
        ADVANCE(253);
      END_STATE();
    case 244:
      if (lookahead == 'u')
        ADVANCE(254);
      END_STATE();
    case 245:
      if (lookahead == 'i')
        ADVANCE(255);
      END_STATE();
    case 246:
      if (lookahead == 'l')
        ADVANCE(256);
      END_STATE();
    case 247:
      if (lookahead == 'c')
        ADVANCE(257);
      END_STATE();
    case 248:
      if (lookahead == 'e')
        ADVANCE(258);
      END_STATE();
    case 249:
      if (lookahead == 'n')
        ADVANCE(259);
      END_STATE();
    case 250:
      if (lookahead == 's')
        ADVANCE(260);
      END_STATE();
    case 251:
      if (lookahead == 'e')
        ADVANCE(261);
      END_STATE();
    case 252:
      if (lookahead == 'p')
        ADVANCE(262);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 254:
      if (lookahead == 'e')
        ADVANCE(263);
      END_STATE();
    case 255:
      if (lookahead == 't')
        ADVANCE(264);
      END_STATE();
    case 256:
      if (lookahead == 'l')
        ADVANCE(265);
      END_STATE();
    case 257:
      if (lookahead == 'k')
        ADVANCE(266);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 260:
      if (lookahead == 'e')
        ADVANCE(267);
      END_STATE();
    case 261:
      if (lookahead == 'n')
        ADVANCE(268);
      END_STATE();
    case 262:
      if (lookahead == 'l')
        ADVANCE(269);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 264:
      if (lookahead == 'e')
        ADVANCE(270);
      END_STATE();
    case 265:
      if (lookahead == 'o')
        ADVANCE(271);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 269:
      if (lookahead == 'e')
        ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 271:
      if (lookahead == 'w')
        ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_purple);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 274:
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(274);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 144},
  [2] = {.lex_state = 145},
  [3] = {.lex_state = 144},
  [4] = {.lex_state = 144},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 144},
  [7] = {.lex_state = 222},
  [8] = {.lex_state = 144},
  [9] = {.lex_state = 222},
  [10] = {.lex_state = 145},
  [11] = {.lex_state = 145},
  [12] = {.lex_state = 144},
  [13] = {.lex_state = 144},
  [14] = {.lex_state = 144},
  [15] = {.lex_state = 223},
  [16] = {.lex_state = 144},
  [17] = {.lex_state = 145},
  [18] = {.lex_state = 145},
  [19] = {.lex_state = 145},
  [20] = {.lex_state = 274},
  [21] = {.lex_state = 274},
  [22] = {.lex_state = 144},
  [23] = {.lex_state = 145},
  [24] = {.lex_state = 145},
  [25] = {.lex_state = 144},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_background_DASHcolour] = ACTIONS(1),
    [anon_sym_strikethrough] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [sym_node_kind] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_dim] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_background_DASHcolor] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_token] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [aux_sym_style_value_token1] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_blink] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_colour] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [aux_sym_style_value_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_rule_repeat1] = STATE(4),
    [sym_rule] = STATE(6),
    [sym_source_file] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_node_kind] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_token] = ACTIONS(11),
  },
  [2] = {
    [sym_style] = STATE(10),
    [sym_style_name] = STATE(9),
    [aux_sym_rule_repeat2] = STATE(10),
    [anon_sym_background_DASHcolor] = ACTIONS(13),
    [anon_sym_hidden] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_dim] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_blink] = ACTIONS(13),
    [anon_sym_underline] = ACTIONS(13),
    [anon_sym_reverse] = ACTIONS(13),
    [anon_sym_colour] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_background_DASHcolour] = ACTIONS(13),
    [anon_sym_strikethrough] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_color] = ACTIONS(13),
  },
  [3] = {
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [aux_sym_rule_repeat1] = STATE(13),
    [sym_node_kind] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_token] = ACTIONS(21),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [aux_sym_rule_repeat1] = STATE(4),
    [sym_rule] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym_node_kind] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_token] = ACTIONS(11),
  },
  [7] = {
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_node_kind] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_token] = ACTIONS(29),
  },
  [9] = {
    [anon_sym_COLON] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_style] = STATE(17),
    [sym_style_name] = STATE(9),
    [aux_sym_rule_repeat2] = STATE(17),
    [anon_sym_background_DASHcolor] = ACTIONS(13),
    [anon_sym_hidden] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_dim] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_blink] = ACTIONS(13),
    [anon_sym_underline] = ACTIONS(13),
    [anon_sym_reverse] = ACTIONS(13),
    [anon_sym_colour] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_background_DASHcolour] = ACTIONS(13),
    [anon_sym_strikethrough] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_color] = ACTIONS(13),
  },
  [11] = {
    [sym_style] = STATE(18),
    [sym_style_name] = STATE(9),
    [aux_sym_rule_repeat2] = STATE(18),
    [anon_sym_background_DASHcolor] = ACTIONS(13),
    [anon_sym_hidden] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_dim] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_blink] = ACTIONS(13),
    [anon_sym_underline] = ACTIONS(13),
    [anon_sym_reverse] = ACTIONS(13),
    [anon_sym_colour] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_background_DASHcolour] = ACTIONS(13),
    [anon_sym_strikethrough] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_color] = ACTIONS(13),
  },
  [12] = {
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [aux_sym_rule_repeat1] = STATE(13),
    [sym_node_kind] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(40),
    [sym_token] = ACTIONS(40),
  },
  [14] = {
    [aux_sym_rule_repeat1] = STATE(4),
    [sym_rule] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym_node_kind] = ACTIONS(42),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_token] = ACTIONS(50),
  },
  [15] = {
    [sym_style_value] = STATE(21),
    [anon_sym_red] = ACTIONS(53),
    [anon_sym_black] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_blue] = ACTIONS(53),
    [anon_sym_white] = ACTIONS(53),
    [aux_sym_style_value_token1] = ACTIONS(53),
    [anon_sym_green] = ACTIONS(53),
    [anon_sym_cyan] = ACTIONS(53),
    [anon_sym_yellow] = ACTIONS(53),
    [aux_sym_style_value_token2] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_purple] = ACTIONS(53),
  },
  [16] = {
    [sym_node_kind] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_token] = ACTIONS(55),
  },
  [17] = {
    [sym_style] = STATE(17),
    [sym_style_name] = STATE(9),
    [aux_sym_rule_repeat2] = STATE(17),
    [anon_sym_background_DASHcolor] = ACTIONS(57),
    [anon_sym_hidden] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_dim] = ACTIONS(57),
    [anon_sym_italic] = ACTIONS(57),
    [anon_sym_blink] = ACTIONS(57),
    [anon_sym_underline] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(60),
    [anon_sym_colour] = ACTIONS(57),
    [anon_sym_bold] = ACTIONS(57),
    [anon_sym_background_DASHcolour] = ACTIONS(57),
    [anon_sym_strikethrough] = ACTIONS(57),
    [anon_sym_reverse] = ACTIONS(57),
    [anon_sym_color] = ACTIONS(57),
  },
  [18] = {
    [sym_style] = STATE(17),
    [sym_style_name] = STATE(9),
    [aux_sym_rule_repeat2] = STATE(17),
    [anon_sym_background_DASHcolor] = ACTIONS(13),
    [anon_sym_hidden] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_dim] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_blink] = ACTIONS(13),
    [anon_sym_underline] = ACTIONS(13),
    [anon_sym_reverse] = ACTIONS(13),
    [anon_sym_colour] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_background_DASHcolour] = ACTIONS(13),
    [anon_sym_strikethrough] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_color] = ACTIONS(13),
  },
  [19] = {
    [sym_style] = STATE(23),
    [sym_style_name] = STATE(9),
    [aux_sym_rule_repeat2] = STATE(23),
    [anon_sym_background_DASHcolor] = ACTIONS(13),
    [anon_sym_hidden] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_dim] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_blink] = ACTIONS(13),
    [anon_sym_underline] = ACTIONS(13),
    [anon_sym_reverse] = ACTIONS(13),
    [anon_sym_colour] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_background_DASHcolour] = ACTIONS(13),
    [anon_sym_strikethrough] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_color] = ACTIONS(13),
  },
  [20] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(64),
  },
  [21] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(66),
  },
  [22] = {
    [sym_node_kind] = ACTIONS(68),
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_token] = ACTIONS(68),
  },
  [23] = {
    [sym_style] = STATE(17),
    [sym_style_name] = STATE(9),
    [aux_sym_rule_repeat2] = STATE(17),
    [anon_sym_background_DASHcolor] = ACTIONS(13),
    [anon_sym_hidden] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_dim] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_blink] = ACTIONS(13),
    [anon_sym_underline] = ACTIONS(13),
    [anon_sym_reverse] = ACTIONS(13),
    [anon_sym_colour] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_background_DASHcolour] = ACTIONS(13),
    [anon_sym_strikethrough] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_color] = ACTIONS(13),
  },
  [24] = {
    [anon_sym_background_DASHcolor] = ACTIONS(72),
    [anon_sym_hidden] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [anon_sym_dim] = ACTIONS(72),
    [anon_sym_italic] = ACTIONS(72),
    [anon_sym_blink] = ACTIONS(72),
    [anon_sym_underline] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_colour] = ACTIONS(72),
    [anon_sym_bold] = ACTIONS(72),
    [anon_sym_background_DASHcolour] = ACTIONS(72),
    [anon_sym_strikethrough] = ACTIONS(72),
    [anon_sym_reverse] = ACTIONS(72),
    [anon_sym_color] = ACTIONS(72),
  },
  [25] = {
    [sym_node_kind] = ACTIONS(74),
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_token] = ACTIONS(74),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(4),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(11),
  [19] = {.count = 1, .reusable = true}, SHIFT(13),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_style_name, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(13),
  [40] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rule_repeat1, 2),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.count = 1, .reusable = true}, SHIFT(20),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 3),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rule_repeat2, 2), SHIFT_REPEAT(7),
  [60] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rule_repeat2, 2),
  [62] = {.count = 1, .reusable = true}, SHIFT(22),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_style_value, 1),
  [66] = {.count = 1, .reusable = true}, SHIFT(24),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 4),
  [70] = {.count = 1, .reusable = true}, SHIFT(25),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_style, 4),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 5),
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
