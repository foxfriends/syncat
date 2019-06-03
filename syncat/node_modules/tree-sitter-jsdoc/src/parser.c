#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 48
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  sym_tag_name_with_argument = 3,
  sym_tag_name_with_type = 4,
  sym_tag_name = 5,
  anon_sym_COLON = 6,
  anon_sym_SLASH = 7,
  anon_sym_DOT = 8,
  anon_sym_POUND = 9,
  anon_sym_TILDE = 10,
  sym_identifier = 11,
  sym_type = 12,
  sym__text = 13,
  sym__begin = 14,
  sym__end = 15,
  sym_document = 16,
  sym_description = 17,
  sym_tag = 18,
  sym_inline_tag = 19,
  sym__expression = 20,
  sym_qualified_expression = 21,
  sym_path_expression = 22,
  sym_member_expression = 23,
  aux_sym_document_repeat1 = 24,
  aux_sym_description_repeat1 = 25,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_tag_name_with_argument] = "tag_name",
  [sym_tag_name_with_type] = "tag_name",
  [sym_tag_name] = "tag_name",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [sym_identifier] = "identifier",
  [sym_type] = "type",
  [sym__text] = "_text",
  [sym__begin] = "_begin",
  [sym__end] = "_end",
  [sym_document] = "document",
  [sym_description] = "description",
  [sym_tag] = "tag",
  [sym_inline_tag] = "inline_tag",
  [sym__expression] = "_expression",
  [sym_qualified_expression] = "qualified_expression",
  [sym_path_expression] = "path_expression",
  [sym_member_expression] = "member_expression",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
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
  [sym_tag_name_with_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_path_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
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
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(107);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '}')
        ADVANCE(99);
      if (lookahead == '~')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(3);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(101);
      if (lookahead != '*')
        ADVANCE(102);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '\r')
        SKIP(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '*')
        SKIP(106);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '}')
        ADVANCE(99);
      if (lookahead == '~')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(2);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(101);
      ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '}')
        ADVANCE(99);
      if (lookahead == '~')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(3);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(101);
      if (lookahead != '*')
        ADVANCE(102);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      if (lookahead == 'a')
        ADVANCE(10);
      if (lookahead == 'b')
        ADVANCE(25);
      if (lookahead == 'c')
        ADVANCE(30);
      if (lookahead == 'e')
        ADVANCE(46);
      if (lookahead == 'f')
        ADVANCE(58);
      if (lookahead == 'm')
        ADVANCE(67);
      if (lookahead == 'n')
        ADVANCE(69);
      if (lookahead == 'p')
        ADVANCE(77);
      if (lookahead == 'r')
        ADVANCE(87);
      if (lookahead == 't')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(17);
      if (lookahead == 'p')
        ADVANCE(19);
      if (lookahead == 'u')
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g')
        ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm')
        ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w')
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'o')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b')
        ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's')
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u')
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v')
        ADVANCE(47);
      if (lookahead == 'x')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p')
        ADVANCE(51);
      if (lookahead == 't')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(59);
      if (lookahead == 'u')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (lookahead == 's')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'r')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (lookahead == 's')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/')
        ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(104);
      if (lookahead == '/')
        ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*')
        ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == '*')
        ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(2);
      if (lookahead == '\r')
        SKIP(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '*')
        SKIP(106);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '}')
        ADVANCE(99);
      if (lookahead == '~')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(106);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(101);
      ADVANCE(102);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(7);
      END_STATE();
    case 108:
      if (lookahead == '\n')
        SKIP(109);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      END_STATE();
    case 109:
      if (lookahead == '\n')
        SKIP(109);
      if (lookahead == '\r')
        SKIP(108);
      if (lookahead == '*')
        SKIP(110);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(109);
      END_STATE();
    case 110:
      if (lookahead == '\n')
        SKIP(109);
      if (lookahead == '\r')
        SKIP(108);
      if (lookahead == '*')
        SKIP(110);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(110);
      END_STATE();
    case 111:
      if (lookahead == '\n')
        SKIP(112);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}')
        ADVANCE(102);
      END_STATE();
    case 112:
      if (lookahead == '\n')
        SKIP(112);
      if (lookahead == '\r')
        SKIP(111);
      if (lookahead == '*')
        SKIP(113);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(112);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(102);
      END_STATE();
    case 113:
      if (lookahead == '\n')
        SKIP(112);
      if (lookahead == '\r')
        SKIP(111);
      if (lookahead == '*')
        SKIP(113);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(113);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(102);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 115:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      END_STATE();
    case 116:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(116);
      if (lookahead == '\r')
        SKIP(115);
      if (lookahead == '*')
        SKIP(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(116);
      END_STATE();
    case 117:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(116);
      if (lookahead == '\r')
        SKIP(115);
      if (lookahead == '*')
        SKIP(117);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(117);
      END_STATE();
    case 118:
      if (lookahead == '\n')
        SKIP(119);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}')
        ADVANCE(102);
      END_STATE();
    case 119:
      if (lookahead == '\n')
        SKIP(119);
      if (lookahead == '\r')
        SKIP(118);
      if (lookahead == '*')
        SKIP(120);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(119);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(102);
      END_STATE();
    case 120:
      if (lookahead == '\n')
        SKIP(119);
      if (lookahead == '\r')
        SKIP(118);
      if (lookahead == '*')
        SKIP(120);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(120);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(102);
      END_STATE();
    case 121:
      if (lookahead == '\n')
        SKIP(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(124);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        SKIP(122);
      if (lookahead == '\r')
        ADVANCE(123);
      if (lookahead == '*')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_type);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\r')
        ADVANCE(123);
      if (lookahead == '*')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\r')
        ADVANCE(123);
      if (lookahead == '*')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}')
        ADVANCE(124);
      END_STATE();
    case 127:
      if (lookahead == '\n')
        SKIP(128);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == '\n')
        SKIP(128);
      if (lookahead == '\r')
        SKIP(129);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '*')
        SKIP(130);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(102);
      END_STATE();
    case 129:
      if (lookahead == '\n')
        SKIP(128);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(102);
      END_STATE();
    case 130:
      if (lookahead == '\n')
        SKIP(128);
      if (lookahead == '\r')
        SKIP(129);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '*')
        SKIP(130);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(130);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(102);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 132:
      if (lookahead == '\n')
        SKIP(133);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(132);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(102);
      END_STATE();
    case 133:
      if (lookahead == '\n')
        SKIP(133);
      if (lookahead == '\r')
        SKIP(132);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '*')
        SKIP(134);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(133);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(102);
      END_STATE();
    case 134:
      if (lookahead == '\n')
        SKIP(133);
      if (lookahead == '\r')
        SKIP(132);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '*')
        SKIP(134);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(134);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(102);
      END_STATE();
    case 135:
      if (lookahead == '\n')
        SKIP(136);
      if (lookahead == '@')
        ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(135);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(102);
      END_STATE();
    case 136:
      if (lookahead == '\n')
        SKIP(136);
      if (lookahead == '\r')
        SKIP(135);
      if (lookahead == '*')
        SKIP(137);
      if (lookahead == '@')
        ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(136);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(102);
      END_STATE();
    case 137:
      if (lookahead == '\n')
        SKIP(136);
      if (lookahead == '\r')
        SKIP(135);
      if (lookahead == '*')
        SKIP(137);
      if (lookahead == '@')
        ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(137);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(102);
      END_STATE();
    case 138:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 139:
      if (lookahead == '\n')
        SKIP(140);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '}')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@')
        ADVANCE(102);
      END_STATE();
    case 140:
      if (lookahead == '\n')
        SKIP(140);
      if (lookahead == '\r')
        SKIP(139);
      if (lookahead == '*')
        SKIP(141);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '}')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(140);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(102);
      END_STATE();
    case 141:
      if (lookahead == '\n')
        SKIP(140);
      if (lookahead == '\r')
        SKIP(139);
      if (lookahead == '*')
        SKIP(141);
      if (lookahead == '{')
        ADVANCE(98);
      if (lookahead == '}')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(141);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(102);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 108},
  [2] = {.lex_state = 111},
  [3] = {.lex_state = 115},
  [4] = {.lex_state = 118},
  [5] = {.lex_state = 111},
  [6] = {.lex_state = 111},
  [7] = {.lex_state = 111},
  [8] = {.lex_state = 115},
  [9] = {.lex_state = 111},
  [10] = {.lex_state = 111},
  [11] = {.lex_state = 121},
  [12] = {.lex_state = 127},
  [13] = {.lex_state = 111},
  [14] = {.lex_state = 132},
  [15] = {.lex_state = 121},
  [16] = {.lex_state = 135},
  [17] = {.lex_state = 111},
  [18] = {.lex_state = 115},
  [19] = {.lex_state = 111},
  [20] = {.lex_state = 111},
  [21] = {.lex_state = 139},
  [22] = {.lex_state = 118},
  [23] = {.lex_state = 118},
  [24] = {.lex_state = 118},
  [25] = {.lex_state = 111},
  [26] = {.lex_state = 139},
  [27] = {.lex_state = 135},
  [28] = {.lex_state = 111},
  [29] = {.lex_state = 115},
  [30] = {.lex_state = 118},
  [31] = {.lex_state = 132},
  [32] = {.lex_state = 132},
  [33] = {.lex_state = 129},
  [34] = {.lex_state = 132},
  [35] = {.lex_state = 111},
  [36] = {.lex_state = 139},
  [37] = {.lex_state = 139},
  [38] = {.lex_state = 111},
  [39] = {.lex_state = 132},
  [40] = {.lex_state = 135},
  [41] = {.lex_state = 139},
  [42] = {.lex_state = 111},
  [43] = {.lex_state = 111},
  [44] = {.lex_state = 135},
  [45] = {.lex_state = 139},
  [46] = {.lex_state = 139},
  [47] = {.lex_state = 139},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag_name_with_argument] = ACTIONS(3),
    [sym_tag_name_with_type] = ACTIONS(3),
    [sym_tag_name] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__text] = ACTIONS(3),
    [sym__begin] = ACTIONS(3),
    [sym__end] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(3),
    [sym__begin] = ACTIONS(5),
  },
  [2] = {
    [sym_description] = STATE(9),
    [sym_tag] = STATE(10),
    [aux_sym_document_repeat1] = STATE(10),
    [sym_tag_name_with_argument] = ACTIONS(7),
    [sym_tag_name_with_type] = ACTIONS(9),
    [sym_tag_name] = ACTIONS(11),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(15),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [4] = {
    [sym_description] = STATE(13),
    [sym__expression] = STATE(14),
    [sym_qualified_expression] = STATE(14),
    [sym_path_expression] = STATE(14),
    [sym_member_expression] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_tag_name_with_argument] = ACTIONS(21),
    [sym_tag_name_with_type] = ACTIONS(21),
    [sym_tag_name] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(25),
  },
  [5] = {
    [sym_description] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_tag_name_with_argument] = ACTIONS(21),
    [sym_tag_name_with_type] = ACTIONS(21),
    [sym_tag_name] = ACTIONS(21),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(25),
  },
  [6] = {
    [sym_description] = STATE(13),
    [sym_tag_name_with_argument] = ACTIONS(21),
    [sym_tag_name_with_type] = ACTIONS(21),
    [sym_tag_name] = ACTIONS(21),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(25),
  },
  [7] = {
    [sym_inline_tag] = STATE(17),
    [aux_sym_description_repeat1] = STATE(17),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_tag_name_with_argument] = ACTIONS(31),
    [sym_tag_name_with_type] = ACTIONS(31),
    [sym_tag_name] = ACTIONS(31),
    [sym__text] = ACTIONS(33),
    [sym__end] = ACTIONS(35),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(37),
  },
  [9] = {
    [sym_tag] = STATE(19),
    [aux_sym_document_repeat1] = STATE(19),
    [sym_tag_name_with_argument] = ACTIONS(7),
    [sym_tag_name_with_type] = ACTIONS(9),
    [sym_tag_name] = ACTIONS(11),
    [sym__end] = ACTIONS(39),
  },
  [10] = {
    [sym_tag] = STATE(20),
    [aux_sym_document_repeat1] = STATE(20),
    [sym_tag_name_with_argument] = ACTIONS(7),
    [sym_tag_name_with_type] = ACTIONS(9),
    [sym_tag_name] = ACTIONS(11),
    [sym__end] = ACTIONS(39),
  },
  [11] = {
    [sym_type] = ACTIONS(41),
  },
  [12] = {
    [sym_tag_name_with_argument] = ACTIONS(43),
    [sym_tag_name_with_type] = ACTIONS(43),
    [sym_tag_name] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym__text] = ACTIONS(43),
    [sym__end] = ACTIONS(43),
  },
  [13] = {
    [sym_tag_name_with_argument] = ACTIONS(51),
    [sym_tag_name_with_type] = ACTIONS(51),
    [sym_tag_name] = ACTIONS(51),
    [sym__end] = ACTIONS(53),
  },
  [14] = {
    [sym_description] = STATE(25),
    [sym_tag_name_with_argument] = ACTIONS(51),
    [sym_tag_name_with_type] = ACTIONS(51),
    [sym_tag_name] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(53),
  },
  [15] = {
    [sym_type] = ACTIONS(57),
  },
  [16] = {
    [sym_tag_name] = ACTIONS(59),
  },
  [17] = {
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_tag_name_with_argument] = ACTIONS(61),
    [sym_tag_name_with_type] = ACTIONS(61),
    [sym_tag_name] = ACTIONS(61),
    [sym__text] = ACTIONS(63),
    [sym__end] = ACTIONS(65),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(67),
  },
  [19] = {
    [sym_tag] = STATE(20),
    [aux_sym_document_repeat1] = STATE(20),
    [sym_tag_name_with_argument] = ACTIONS(7),
    [sym_tag_name_with_type] = ACTIONS(9),
    [sym_tag_name] = ACTIONS(11),
    [sym__end] = ACTIONS(69),
  },
  [20] = {
    [sym_tag] = STATE(20),
    [aux_sym_document_repeat1] = STATE(20),
    [sym_tag_name_with_argument] = ACTIONS(71),
    [sym_tag_name_with_type] = ACTIONS(74),
    [sym_tag_name] = ACTIONS(77),
    [sym__end] = ACTIONS(80),
  },
  [21] = {
    [anon_sym_RBRACE] = ACTIONS(82),
  },
  [22] = {
    [sym__expression] = STATE(31),
    [sym_qualified_expression] = STATE(31),
    [sym_path_expression] = STATE(31),
    [sym_member_expression] = STATE(31),
    [sym_identifier] = ACTIONS(23),
  },
  [23] = {
    [sym_identifier] = ACTIONS(84),
  },
  [24] = {
    [sym_qualified_expression] = STATE(34),
    [sym_identifier] = ACTIONS(86),
  },
  [25] = {
    [sym_tag_name_with_argument] = ACTIONS(88),
    [sym_tag_name_with_type] = ACTIONS(88),
    [sym_tag_name] = ACTIONS(88),
    [sym__end] = ACTIONS(90),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(92),
  },
  [27] = {
    [sym_description] = STATE(37),
    [sym__text] = ACTIONS(94),
  },
  [28] = {
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(96),
    [sym_tag_name_with_argument] = ACTIONS(99),
    [sym_tag_name_with_type] = ACTIONS(99),
    [sym_tag_name] = ACTIONS(99),
    [sym__text] = ACTIONS(101),
    [sym__end] = ACTIONS(104),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(106),
  },
  [30] = {
    [sym_description] = STATE(38),
    [sym__expression] = STATE(39),
    [sym_qualified_expression] = STATE(39),
    [sym_path_expression] = STATE(39),
    [sym_member_expression] = STATE(39),
    [sym_tag_name_with_argument] = ACTIONS(108),
    [sym_tag_name_with_type] = ACTIONS(108),
    [sym_tag_name] = ACTIONS(108),
    [sym_identifier] = ACTIONS(23),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(110),
  },
  [31] = {
    [sym_tag_name_with_argument] = ACTIONS(112),
    [sym_tag_name_with_type] = ACTIONS(112),
    [sym_tag_name] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(114),
    [anon_sym_TILDE] = ACTIONS(114),
    [sym__text] = ACTIONS(112),
    [sym__end] = ACTIONS(114),
  },
  [32] = {
    [sym_tag_name_with_argument] = ACTIONS(116),
    [sym_tag_name_with_type] = ACTIONS(116),
    [sym_tag_name] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_POUND] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(118),
    [sym__text] = ACTIONS(116),
    [sym__end] = ACTIONS(118),
  },
  [33] = {
    [sym_tag_name_with_argument] = ACTIONS(120),
    [sym_tag_name_with_type] = ACTIONS(120),
    [sym_tag_name] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [sym__text] = ACTIONS(120),
    [sym__end] = ACTIONS(122),
  },
  [34] = {
    [sym_tag_name_with_argument] = ACTIONS(120),
    [sym_tag_name_with_type] = ACTIONS(120),
    [sym_tag_name] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [sym__text] = ACTIONS(120),
    [sym__end] = ACTIONS(122),
  },
  [35] = {
    [sym_description] = STATE(38),
    [sym_tag_name_with_argument] = ACTIONS(108),
    [sym_tag_name_with_type] = ACTIONS(108),
    [sym_tag_name] = ACTIONS(108),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(110),
  },
  [36] = {
    [sym_inline_tag] = STATE(41),
    [aux_sym_description_repeat1] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(35),
    [sym__text] = ACTIONS(126),
  },
  [37] = {
    [anon_sym_RBRACE] = ACTIONS(128),
  },
  [38] = {
    [sym_tag_name_with_argument] = ACTIONS(130),
    [sym_tag_name_with_type] = ACTIONS(130),
    [sym_tag_name] = ACTIONS(130),
    [sym__end] = ACTIONS(132),
  },
  [39] = {
    [sym_description] = STATE(43),
    [sym_tag_name_with_argument] = ACTIONS(130),
    [sym_tag_name_with_type] = ACTIONS(130),
    [sym_tag_name] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [sym__text] = ACTIONS(13),
    [sym__end] = ACTIONS(132),
  },
  [40] = {
    [sym_tag_name] = ACTIONS(134),
  },
  [41] = {
    [sym_inline_tag] = STATE(45),
    [aux_sym_description_repeat1] = STATE(45),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(65),
    [sym__text] = ACTIONS(136),
  },
  [42] = {
    [anon_sym_LBRACE] = ACTIONS(138),
    [sym_tag_name_with_argument] = ACTIONS(140),
    [sym_tag_name_with_type] = ACTIONS(140),
    [sym_tag_name] = ACTIONS(140),
    [sym__text] = ACTIONS(140),
    [sym__end] = ACTIONS(138),
  },
  [43] = {
    [sym_tag_name_with_argument] = ACTIONS(142),
    [sym_tag_name_with_type] = ACTIONS(142),
    [sym_tag_name] = ACTIONS(142),
    [sym__end] = ACTIONS(144),
  },
  [44] = {
    [sym_description] = STATE(46),
    [sym__text] = ACTIONS(94),
  },
  [45] = {
    [sym_inline_tag] = STATE(45),
    [aux_sym_description_repeat1] = STATE(45),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(104),
    [sym__text] = ACTIONS(149),
  },
  [46] = {
    [anon_sym_RBRACE] = ACTIONS(152),
  },
  [47] = {
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_RBRACE] = ACTIONS(138),
    [sym__text] = ACTIONS(138),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(4),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = false}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, SHIFT(23),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 1, .reusable = true}, SHIFT(26),
  [59] = {.count = 1, .reusable = true}, SHIFT(27),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_description, 2),
  [63] = {.count = 1, .reusable = false}, SHIFT(28),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_description, 2),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [69] = {.count = 1, .reusable = true}, SHIFT(29),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [80] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [82] = {.count = 1, .reusable = true}, SHIFT(30),
  [84] = {.count = 1, .reusable = true}, SHIFT(32),
  [86] = {.count = 1, .reusable = true}, SHIFT(33),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [92] = {.count = 1, .reusable = true}, SHIFT(35),
  [94] = {.count = 1, .reusable = true}, SHIFT(36),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(16),
  [99] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(28),
  [104] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_expression, 3),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_expression, 3),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_path_expression, 3),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_path_expression, 3),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_member_expression, 3),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_member_expression, 3),
  [124] = {.count = 1, .reusable = true}, SHIFT(40),
  [126] = {.count = 1, .reusable = true}, SHIFT(41),
  [128] = {.count = 1, .reusable = true}, SHIFT(42),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [134] = {.count = 1, .reusable = true}, SHIFT(44),
  [136] = {.count = 1, .reusable = true}, SHIFT(45),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_inline_tag, 4),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 4),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 6),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 6),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(40),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(45),
  [152] = {.count = 1, .reusable = true}, SHIFT(47),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jsdoc() {
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
