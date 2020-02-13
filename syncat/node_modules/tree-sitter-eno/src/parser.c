#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 205
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 2
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym__emptyLine = 1,
  sym_key = 2,
  sym_sectionKey = 3,
  sym_token = 4,
  sym_directContinuationOperator = 5,
  sym_spacedContinuationOperator = 6,
  sym_commentOperator = 7,
  sym_copyOperator = 8,
  sym_deepCopyOperator = 9,
  sym_entryOperator = 10,
  sym_itemOperator = 11,
  sym_elementOperator = 12,
  sym_sectionOperator = 13,
  sym__endOfLine = 14,
  sym__multilineFieldEnd = 15,
  sym__multilineFieldLine = 16,
  sym__sectionAscend = 17,
  sym__sectionDescend = 18,
  sym_escapedKey = 19,
  sym_escapeOperator = 20,
  sym_multilineFieldKey = 21,
  sym_multilineFieldOperator = 22,
  sym_document = 23,
  sym__escapedOrUnescapedKey = 24,
  sym__escapedOrUnescapedSectionKey = 25,
  sym_comment = 26,
  sym_continuation = 27,
  sym_element = 28,
  sym_empty = 29,
  sym_entry = 30,
  sym_field = 31,
  sym_fieldset = 32,
  sym_item = 33,
  sym_list = 34,
  sym_multilineField = 35,
  sym_multilineFieldValue = 36,
  sym_section = 37,
  aux_sym_document_repeat1 = 38,
  aux_sym_comment_repeat1 = 39,
  aux_sym_entry_repeat1 = 40,
  aux_sym_entry_repeat2 = 41,
  aux_sym_fieldset_repeat1 = 42,
  aux_sym_list_repeat1 = 43,
  aux_sym_multilineFieldValue_repeat1 = 44,
  alias_sym_template = 45,
  alias_sym_value = 46,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__emptyLine] = "_emptyLine",
  [sym_key] = "key",
  [sym_sectionKey] = "key",
  [sym_token] = "token",
  [sym_directContinuationOperator] = "directContinuationOperator",
  [sym_spacedContinuationOperator] = "spacedContinuationOperator",
  [sym_commentOperator] = "commentOperator",
  [sym_copyOperator] = "copyOperator",
  [sym_deepCopyOperator] = "deepCopyOperator",
  [sym_entryOperator] = "entryOperator",
  [sym_itemOperator] = "itemOperator",
  [sym_elementOperator] = "elementOperator",
  [sym_sectionOperator] = "sectionOperator",
  [sym__endOfLine] = "_endOfLine",
  [sym__multilineFieldEnd] = "_multilineFieldEnd",
  [sym__multilineFieldLine] = "_multilineFieldLine",
  [sym__sectionAscend] = "_sectionAscend",
  [sym__sectionDescend] = "_sectionDescend",
  [sym_escapedKey] = "key",
  [sym_escapeOperator] = "escapeOperator",
  [sym_multilineFieldKey] = "key",
  [sym_multilineFieldOperator] = "multilineFieldOperator",
  [sym_document] = "document",
  [sym__escapedOrUnescapedKey] = "_escapedOrUnescapedKey",
  [sym__escapedOrUnescapedSectionKey] = "_escapedOrUnescapedSectionKey",
  [sym_comment] = "comment",
  [sym_continuation] = "continuation",
  [sym_element] = "element",
  [sym_empty] = "empty",
  [sym_entry] = "entry",
  [sym_field] = "field",
  [sym_fieldset] = "fieldset",
  [sym_item] = "item",
  [sym_list] = "list",
  [sym_multilineField] = "field",
  [sym_multilineFieldValue] = "value",
  [sym_section] = "section",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_entry_repeat2] = "entry_repeat2",
  [aux_sym_fieldset_repeat1] = "fieldset_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_multilineFieldValue_repeat1] = "multilineFieldValue_repeat1",
  [alias_sym_template] = "template",
  [alias_sym_value] = "value",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__emptyLine] = {
    .visible = false,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_sectionKey] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_directContinuationOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_spacedContinuationOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_commentOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_copyOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_deepCopyOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_entryOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_itemOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_elementOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_sectionOperator] = {
    .visible = true,
    .named = true,
  },
  [sym__endOfLine] = {
    .visible = false,
    .named = true,
  },
  [sym__multilineFieldEnd] = {
    .visible = false,
    .named = true,
  },
  [sym__multilineFieldLine] = {
    .visible = false,
    .named = true,
  },
  [sym__sectionAscend] = {
    .visible = false,
    .named = true,
  },
  [sym__sectionDescend] = {
    .visible = false,
    .named = true,
  },
  [sym_escapedKey] = {
    .visible = true,
    .named = true,
  },
  [sym_escapeOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_multilineFieldKey] = {
    .visible = true,
    .named = true,
  },
  [sym_multilineFieldOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__escapedOrUnescapedKey] = {
    .visible = false,
    .named = true,
  },
  [sym__escapedOrUnescapedSectionKey] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_empty] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldset] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_multilineField] = {
    .visible = true,
    .named = true,
  },
  [sym_multilineFieldValue] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldset_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multilineFieldValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_template] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = sym_comment,
  },
  [2] = {
    [2] = alias_sym_template,
  },
  [3] = {
    [2] = alias_sym_value,
  },
  [4] = {
    [1] = alias_sym_value,
  },
  [5] = {
    [4] = alias_sym_template,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(27);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(24);
      if (lookahead == '#' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '`') ADVANCE(27);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(26);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '`') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '`') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__emptyLine);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(27);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(24);
      if (lookahead == '#' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '`') ADVANCE(27);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(26);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_sectionKey);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '`') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_sectionKey);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_directContinuationOperator);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_directContinuationOperator);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_spacedContinuationOperator);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_spacedContinuationOperator);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_commentOperator);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_commentOperator);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_copyOperator);
      if (lookahead == '<') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_deepCopyOperator);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_entryOperator);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_itemOperator);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_itemOperator);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_elementOperator);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_sectionOperator);
      if (lookahead == '#') ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 4, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 16, .external_lex_state = 4},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0, .external_lex_state = 5},
  [6] = {.lex_state = 4, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 4},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 4, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 4},
  [11] = {.lex_state = 4, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 4},
  [13] = {.lex_state = 17, .external_lex_state = 6},
  [14] = {.lex_state = 0, .external_lex_state = 6},
  [15] = {.lex_state = 4, .external_lex_state = 2},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 4, .external_lex_state = 2},
  [18] = {.lex_state = 16, .external_lex_state = 4},
  [19] = {.lex_state = 4, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 7},
  [21] = {.lex_state = 4, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 5},
  [23] = {.lex_state = 0, .external_lex_state = 4},
  [24] = {.lex_state = 0, .external_lex_state = 4},
  [25] = {.lex_state = 0, .external_lex_state = 4},
  [26] = {.lex_state = 1, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 4},
  [28] = {.lex_state = 0, .external_lex_state = 8},
  [29] = {.lex_state = 0, .external_lex_state = 4},
  [30] = {.lex_state = 0, .external_lex_state = 7},
  [31] = {.lex_state = 0, .external_lex_state = 9},
  [32] = {.lex_state = 0, .external_lex_state = 6},
  [33] = {.lex_state = 4, .external_lex_state = 10},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 2, .external_lex_state = 2},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16, .external_lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1, .external_lex_state = 6},
  [40] = {.lex_state = 3, .external_lex_state = 2},
  [41] = {.lex_state = 4, .external_lex_state = 2},
  [42] = {.lex_state = 2, .external_lex_state = 2},
  [43] = {.lex_state = 3, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 7},
  [46] = {.lex_state = 0, .external_lex_state = 7},
  [47] = {.lex_state = 0, .external_lex_state = 8},
  [48] = {.lex_state = 0, .external_lex_state = 4},
  [49] = {.lex_state = 4, .external_lex_state = 2},
  [50] = {.lex_state = 4, .external_lex_state = 10},
  [51] = {.lex_state = 0, .external_lex_state = 4},
  [52] = {.lex_state = 2, .external_lex_state = 6},
  [53] = {.lex_state = 4, .external_lex_state = 2},
  [54] = {.lex_state = 2, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 4},
  [56] = {.lex_state = 1, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 4},
  [58] = {.lex_state = 16, .external_lex_state = 4},
  [59] = {.lex_state = 1, .external_lex_state = 6},
  [60] = {.lex_state = 4, .external_lex_state = 2},
  [61] = {.lex_state = 3, .external_lex_state = 2},
  [62] = {.lex_state = 2, .external_lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3, .external_lex_state = 2},
  [65] = {.lex_state = 4, .external_lex_state = 6},
  [66] = {.lex_state = 4, .external_lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2, .external_lex_state = 2},
  [69] = {.lex_state = 3, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 4},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 4, .external_lex_state = 2},
  [73] = {.lex_state = 4, .external_lex_state = 10},
  [74] = {.lex_state = 3, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 3, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 4},
  [79] = {.lex_state = 4, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 4},
  [81] = {.lex_state = 4, .external_lex_state = 2},
  [82] = {.lex_state = 4, .external_lex_state = 10},
  [83] = {.lex_state = 1, .external_lex_state = 2},
  [84] = {.lex_state = 3, .external_lex_state = 2},
  [85] = {.lex_state = 3, .external_lex_state = 2},
  [86] = {.lex_state = 4, .external_lex_state = 2},
  [87] = {.lex_state = 4, .external_lex_state = 2},
  [88] = {.lex_state = 3, .external_lex_state = 2},
  [89] = {.lex_state = 1, .external_lex_state = 6},
  [90] = {.lex_state = 1, .external_lex_state = 6},
  [91] = {.lex_state = 1, .external_lex_state = 6},
  [92] = {.lex_state = 4, .external_lex_state = 10},
  [93] = {.lex_state = 4, .external_lex_state = 10},
  [94] = {.lex_state = 1, .external_lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1, .external_lex_state = 10},
  [97] = {.lex_state = 2, .external_lex_state = 10},
  [98] = {.lex_state = 3, .external_lex_state = 10},
  [99] = {.lex_state = 4, .external_lex_state = 10},
  [100] = {.lex_state = 2, .external_lex_state = 10},
  [101] = {.lex_state = 3, .external_lex_state = 10},
  [102] = {.lex_state = 4, .external_lex_state = 10},
  [103] = {.lex_state = 4, .external_lex_state = 10},
  [104] = {.lex_state = 2, .external_lex_state = 10},
  [105] = {.lex_state = 1, .external_lex_state = 10},
  [106] = {.lex_state = 2, .external_lex_state = 6},
  [107] = {.lex_state = 4, .external_lex_state = 10},
  [108] = {.lex_state = 1, .external_lex_state = 2},
  [109] = {.lex_state = 2, .external_lex_state = 10},
  [110] = {.lex_state = 1, .external_lex_state = 2},
  [111] = {.lex_state = 4, .external_lex_state = 10},
  [112] = {.lex_state = 2, .external_lex_state = 10},
  [113] = {.lex_state = 3, .external_lex_state = 10},
  [114] = {.lex_state = 4, .external_lex_state = 10},
  [115] = {.lex_state = 1, .external_lex_state = 2},
  [116] = {.lex_state = 1, .external_lex_state = 10},
  [117] = {.lex_state = 1, .external_lex_state = 10},
  [118] = {.lex_state = 3, .external_lex_state = 10},
  [119] = {.lex_state = 4, .external_lex_state = 10},
  [120] = {.lex_state = 4, .external_lex_state = 10},
  [121] = {.lex_state = 1, .external_lex_state = 10},
  [122] = {.lex_state = 3, .external_lex_state = 10},
  [123] = {.lex_state = 3, .external_lex_state = 10},
  [124] = {.lex_state = 4, .external_lex_state = 10},
  [125] = {.lex_state = 4, .external_lex_state = 10},
  [126] = {.lex_state = 3, .external_lex_state = 10},
  [127] = {.lex_state = 4, .external_lex_state = 10},
  [128] = {.lex_state = 4, .external_lex_state = 10},
  [129] = {.lex_state = 4, .external_lex_state = 10},
  [130] = {.lex_state = 4, .external_lex_state = 10},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 3, .external_lex_state = 10},
  [133] = {.lex_state = 3, .external_lex_state = 10},
  [134] = {.lex_state = 3, .external_lex_state = 10},
  [135] = {.lex_state = 2, .external_lex_state = 6},
  [136] = {.lex_state = 2, .external_lex_state = 6},
  [137] = {.lex_state = 2, .external_lex_state = 6},
  [138] = {.lex_state = 2, .external_lex_state = 6},
  [139] = {.lex_state = 4, .external_lex_state = 6},
  [140] = {.lex_state = 1, .external_lex_state = 10},
  [141] = {.lex_state = 1, .external_lex_state = 10},
  [142] = {.lex_state = 1, .external_lex_state = 10},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 4, .external_lex_state = 6},
  [148] = {.lex_state = 4, .external_lex_state = 6},
  [149] = {.lex_state = 4, .external_lex_state = 6},
  [150] = {.lex_state = 4, .external_lex_state = 6},
  [151] = {.lex_state = 16, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 6},
  [155] = {.lex_state = 16, .external_lex_state = 4},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 4, .external_lex_state = 10},
  [159] = {.lex_state = 16, .external_lex_state = 4},
  [160] = {.lex_state = 1, .external_lex_state = 6},
  [161] = {.lex_state = 4, .external_lex_state = 10},
  [162] = {.lex_state = 2, .external_lex_state = 6},
  [163] = {.lex_state = 0, .external_lex_state = 4},
  [164] = {.lex_state = 0, .external_lex_state = 4},
  [165] = {.lex_state = 16, .external_lex_state = 4},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 4, .external_lex_state = 6},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0, .external_lex_state = 4},
  [170] = {.lex_state = 4, .external_lex_state = 10},
  [171] = {.lex_state = 0, .external_lex_state = 4},
  [172] = {.lex_state = 0, .external_lex_state = 4},
  [173] = {.lex_state = 4, .external_lex_state = 10},
  [174] = {.lex_state = 16, .external_lex_state = 4},
  [175] = {.lex_state = 0, .external_lex_state = 4},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 16, .external_lex_state = 4},
  [179] = {.lex_state = 0, .external_lex_state = 4},
  [180] = {.lex_state = 0, .external_lex_state = 4},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 16, .external_lex_state = 4},
  [183] = {.lex_state = 0, .external_lex_state = 4},
  [184] = {.lex_state = 16, .external_lex_state = 4},
  [185] = {.lex_state = 0, .external_lex_state = 4},
  [186] = {.lex_state = 0, .external_lex_state = 5},
  [187] = {.lex_state = 16},
  [188] = {.lex_state = 0, .external_lex_state = 4},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0, .external_lex_state = 3},
  [192] = {.lex_state = 0, .external_lex_state = 4},
  [193] = {.lex_state = 0, .external_lex_state = 3},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 17, .external_lex_state = 6},
  [197] = {.lex_state = 0, .external_lex_state = 8},
  [198] = {.lex_state = 16},
  [199] = {.lex_state = 0, .external_lex_state = 8},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0, .external_lex_state = 7},
  [202] = {.lex_state = 0, .external_lex_state = 9},
  [203] = {.lex_state = 0, .external_lex_state = 4},
  [204] = {.lex_state = 0, .external_lex_state = 3},
};

enum {
  ts_external_token__endOfLine = 0,
  ts_external_token__multilineFieldEnd = 1,
  ts_external_token__multilineFieldLine = 2,
  ts_external_token__sectionAscend = 3,
  ts_external_token__sectionDescend = 4,
  ts_external_token_escapedKey = 5,
  ts_external_token_escapeOperator = 6,
  ts_external_token_multilineFieldKey = 7,
  ts_external_token_multilineFieldOperator = 8,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__endOfLine] = sym__endOfLine,
  [ts_external_token__multilineFieldEnd] = sym__multilineFieldEnd,
  [ts_external_token__multilineFieldLine] = sym__multilineFieldLine,
  [ts_external_token__sectionAscend] = sym__sectionAscend,
  [ts_external_token__sectionDescend] = sym__sectionDescend,
  [ts_external_token_escapedKey] = sym_escapedKey,
  [ts_external_token_escapeOperator] = sym_escapeOperator,
  [ts_external_token_multilineFieldKey] = sym_multilineFieldKey,
  [ts_external_token_multilineFieldOperator] = sym_multilineFieldOperator,
};

static bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__endOfLine] = true,
    [ts_external_token_multilineFieldKey] = true,
    [ts_external_token__sectionDescend] = true,
    [ts_external_token__multilineFieldEnd] = true,
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token_escapedKey] = true,
    [ts_external_token__multilineFieldLine] = true,
    [ts_external_token_escapeOperator] = true,
    [ts_external_token__sectionAscend] = true,
  },
  [2] = {
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token__sectionDescend] = true,
    [ts_external_token_escapeOperator] = true,
  },
  [3] = {
    [ts_external_token_multilineFieldKey] = true,
  },
  [4] = {
    [ts_external_token__endOfLine] = true,
  },
  [5] = {
    [ts_external_token_escapedKey] = true,
  },
  [6] = {
    [ts_external_token_escapeOperator] = true,
  },
  [7] = {
    [ts_external_token__multilineFieldEnd] = true,
    [ts_external_token__multilineFieldLine] = true,
  },
  [8] = {
    [ts_external_token_multilineFieldOperator] = true,
  },
  [9] = {
    [ts_external_token__multilineFieldEnd] = true,
  },
  [10] = {
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token__sectionDescend] = true,
    [ts_external_token_escapeOperator] = true,
    [ts_external_token__sectionAscend] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__endOfLine] = ACTIONS(1),
    [sym_entryOperator] = ACTIONS(1),
    [sym__emptyLine] = ACTIONS(1),
    [sym_spacedContinuationOperator] = ACTIONS(1),
    [sym_multilineFieldOperator] = ACTIONS(1),
    [sym_escapedKey] = ACTIONS(1),
    [sym__multilineFieldLine] = ACTIONS(1),
    [sym_elementOperator] = ACTIONS(1),
    [sym_deepCopyOperator] = ACTIONS(1),
    [sym_copyOperator] = ACTIONS(1),
    [sym_directContinuationOperator] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_multilineFieldKey] = ACTIONS(1),
    [sym__sectionDescend] = ACTIONS(1),
    [sym__multilineFieldEnd] = ACTIONS(1),
    [sym_itemOperator] = ACTIONS(1),
    [sym_sectionOperator] = ACTIONS(1),
    [sym_commentOperator] = ACTIONS(1),
    [sym_escapeOperator] = ACTIONS(1),
    [sym__sectionAscend] = ACTIONS(1),
  },
  [1] = {
    [sym_list] = STATE(9),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym__escapedOrUnescapedKey] = STATE(7),
    [sym_empty] = STATE(9),
    [sym_multilineField] = STATE(9),
    [sym_document] = STATE(8),
    [sym_comment] = STATE(9),
    [sym_field] = STATE(9),
    [sym_fieldset] = STATE(9),
    [sym_section] = STATE(9),
    [aux_sym_document_repeat1] = STATE(9),
    [sym_element] = STATE(9),
    [sym_multilineFieldOperator] = ACTIONS(3),
    [sym_key] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_commentOperator] = ACTIONS(9),
    [sym__sectionDescend] = ACTIONS(11),
    [sym__emptyLine] = ACTIONS(13),
    [sym_escapeOperator] = ACTIONS(15),
  },
  [2] = {
    [sym_multilineFieldKey] = ACTIONS(17),
  },
  [3] = {
    [sym__endOfLine] = ACTIONS(19),
    [sym_token] = ACTIONS(21),
  },
  [4] = {
    [sym_sectionOperator] = ACTIONS(23),
  },
  [5] = {
    [sym_escapedKey] = ACTIONS(25),
  },
  [6] = {
    [aux_sym_comment_repeat1] = STATE(15),
    [sym_multilineFieldOperator] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__emptyLine] = ACTIONS(29),
    [sym__sectionDescend] = ACTIONS(27),
    [sym_escapeOperator] = ACTIONS(27),
  },
  [7] = {
    [sym__endOfLine] = ACTIONS(31),
    [sym_elementOperator] = ACTIONS(33),
    [sym_copyOperator] = ACTIONS(35),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(37),
  },
  [9] = {
    [sym_list] = STATE(19),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym__escapedOrUnescapedKey] = STATE(7),
    [sym_empty] = STATE(19),
    [sym_multilineField] = STATE(19),
    [sym_comment] = STATE(19),
    [sym_field] = STATE(19),
    [sym_fieldset] = STATE(19),
    [sym_section] = STATE(19),
    [aux_sym_document_repeat1] = STATE(19),
    [sym_element] = STATE(19),
    [sym_multilineFieldOperator] = ACTIONS(3),
    [sym_key] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_commentOperator] = ACTIONS(9),
    [sym__sectionDescend] = ACTIONS(11),
    [sym__emptyLine] = ACTIONS(41),
    [sym_escapeOperator] = ACTIONS(15),
  },
  [10] = {
    [sym__endOfLine] = ACTIONS(43),
  },
  [11] = {
    [sym_multilineFieldOperator] = ACTIONS(45),
    [sym_key] = ACTIONS(47),
    [sym_commentOperator] = ACTIONS(47),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym__emptyLine] = ACTIONS(47),
    [sym__sectionDescend] = ACTIONS(45),
    [sym_escapeOperator] = ACTIONS(45),
  },
  [12] = {
    [sym__endOfLine] = ACTIONS(49),
  },
  [13] = {
    [sym__escapedOrUnescapedSectionKey] = STATE(23),
    [sym_sectionKey] = ACTIONS(51),
    [sym_escapeOperator] = ACTIONS(53),
  },
  [14] = {
    [sym_escapeOperator] = ACTIONS(55),
  },
  [15] = {
    [aux_sym_comment_repeat1] = STATE(15),
    [sym_multilineFieldOperator] = ACTIONS(45),
    [sym_key] = ACTIONS(47),
    [sym_commentOperator] = ACTIONS(57),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym__emptyLine] = ACTIONS(47),
    [sym__sectionDescend] = ACTIONS(45),
    [sym_escapeOperator] = ACTIONS(45),
  },
  [16] = {
    [sym_token] = ACTIONS(60),
  },
  [17] = {
    [sym_multilineFieldOperator] = ACTIONS(62),
    [sym_key] = ACTIONS(64),
    [sym_commentOperator] = ACTIONS(64),
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym__emptyLine] = ACTIONS(64),
    [sym__sectionDescend] = ACTIONS(62),
    [sym_escapeOperator] = ACTIONS(62),
  },
  [18] = {
    [sym__endOfLine] = ACTIONS(66),
    [sym_token] = ACTIONS(68),
  },
  [19] = {
    [sym_list] = STATE(19),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym__escapedOrUnescapedKey] = STATE(7),
    [sym_empty] = STATE(19),
    [sym_multilineField] = STATE(19),
    [sym_comment] = STATE(19),
    [sym_field] = STATE(19),
    [sym_fieldset] = STATE(19),
    [sym_section] = STATE(19),
    [aux_sym_document_repeat1] = STATE(19),
    [sym_element] = STATE(19),
    [sym_multilineFieldOperator] = ACTIONS(70),
    [sym_key] = ACTIONS(73),
    [sym_commentOperator] = ACTIONS(76),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(81),
    [sym__sectionDescend] = ACTIONS(84),
    [sym_escapeOperator] = ACTIONS(87),
  },
  [20] = {
    [aux_sym_multilineFieldValue_repeat1] = STATE(30),
    [sym_multilineFieldValue] = STATE(31),
    [sym__multilineFieldEnd] = ACTIONS(90),
    [sym__multilineFieldLine] = ACTIONS(92),
  },
  [21] = {
    [sym_multilineFieldOperator] = ACTIONS(94),
    [sym_key] = ACTIONS(96),
    [sym_commentOperator] = ACTIONS(96),
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(96),
    [sym__sectionDescend] = ACTIONS(94),
    [sym_escapeOperator] = ACTIONS(94),
  },
  [22] = {
    [sym_escapedKey] = ACTIONS(98),
  },
  [23] = {
    [sym__endOfLine] = ACTIONS(100),
    [sym_deepCopyOperator] = ACTIONS(102),
    [sym_copyOperator] = ACTIONS(104),
  },
  [24] = {
    [sym_elementOperator] = ACTIONS(106),
    [sym__endOfLine] = ACTIONS(106),
    [sym_copyOperator] = ACTIONS(106),
  },
  [25] = {
    [sym__endOfLine] = ACTIONS(108),
  },
  [26] = {
    [aux_sym_comment_repeat1] = STATE(89),
    [sym__escapedOrUnescapedKey] = STATE(38),
    [aux_sym_entry_repeat1] = STATE(39),
    [sym_entry] = STATE(41),
    [aux_sym_entry_repeat2] = STATE(40),
    [sym_comment] = STATE(39),
    [aux_sym_fieldset_repeat1] = STATE(41),
    [sym_continuation] = STATE(40),
    [aux_sym_list_repeat1] = STATE(42),
    [sym_item] = STATE(42),
    [sym_directContinuationOperator] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym__emptyLine] = ACTIONS(114),
    [sym__sectionDescend] = ACTIONS(112),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_itemOperator] = ACTIONS(117),
    [sym_multilineFieldOperator] = ACTIONS(112),
    [sym_key] = ACTIONS(119),
    [sym_commentOperator] = ACTIONS(122),
    [sym_escapeOperator] = ACTIONS(125),
  },
  [27] = {
    [sym__endOfLine] = ACTIONS(128),
  },
  [28] = {
    [sym_multilineFieldOperator] = ACTIONS(130),
  },
  [29] = {
    [sym__endOfLine] = ACTIONS(132),
  },
  [30] = {
    [aux_sym_multilineFieldValue_repeat1] = STATE(46),
    [sym__multilineFieldEnd] = ACTIONS(134),
    [sym__multilineFieldLine] = ACTIONS(92),
  },
  [31] = {
    [sym__multilineFieldEnd] = ACTIONS(136),
  },
  [32] = {
    [sym_escapeOperator] = ACTIONS(138),
  },
  [33] = {
    [sym_list] = STATE(50),
    [aux_sym_comment_repeat1] = STATE(127),
    [sym__escapedOrUnescapedKey] = STATE(152),
    [sym_empty] = STATE(50),
    [sym_multilineField] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_field] = STATE(50),
    [sym_fieldset] = STATE(50),
    [sym_section] = STATE(50),
    [aux_sym_document_repeat1] = STATE(50),
    [sym_element] = STATE(50),
    [sym_multilineFieldOperator] = ACTIONS(140),
    [sym_key] = ACTIONS(142),
    [sym_commentOperator] = ACTIONS(144),
    [sym__sectionDescend] = ACTIONS(146),
    [sym__emptyLine] = ACTIONS(148),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(150),
  },
  [34] = {
    [sym_token] = ACTIONS(152),
  },
  [35] = {
    [aux_sym_comment_repeat1] = STATE(135),
    [sym__escapedOrUnescapedKey] = STATE(38),
    [aux_sym_entry_repeat1] = STATE(52),
    [sym_entry] = STATE(53),
    [sym_comment] = STATE(52),
    [aux_sym_fieldset_repeat1] = STATE(53),
    [aux_sym_list_repeat1] = STATE(54),
    [sym_item] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(154),
    [sym__emptyLine] = ACTIONS(156),
    [sym__sectionDescend] = ACTIONS(154),
    [sym_itemOperator] = ACTIONS(117),
    [sym_multilineFieldOperator] = ACTIONS(154),
    [sym_key] = ACTIONS(159),
    [sym_commentOperator] = ACTIONS(162),
    [sym_escapeOperator] = ACTIONS(165),
  },
  [36] = {
    [sym_token] = ACTIONS(168),
  },
  [37] = {
    [sym__endOfLine] = ACTIONS(170),
    [sym_token] = ACTIONS(172),
  },
  [38] = {
    [sym_entryOperator] = ACTIONS(174),
  },
  [39] = {
    [sym_comment] = STATE(59),
    [aux_sym_comment_repeat1] = STATE(89),
    [sym__escapedOrUnescapedKey] = STATE(38),
    [aux_sym_entry_repeat1] = STATE(59),
    [sym_entry] = STATE(60),
    [sym_continuation] = STATE(61),
    [sym_item] = STATE(62),
    [sym_directContinuationOperator] = ACTIONS(110),
    [sym_key] = ACTIONS(176),
    [sym_commentOperator] = ACTIONS(178),
    [sym__emptyLine] = ACTIONS(180),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_escapeOperator] = ACTIONS(182),
    [sym_itemOperator] = ACTIONS(117),
  },
  [40] = {
    [sym_comment] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(63),
    [sym_continuation] = STATE(64),
    [aux_sym_entry_repeat2] = STATE(64),
    [sym_directContinuationOperator] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym__emptyLine] = ACTIONS(186),
    [sym__sectionDescend] = ACTIONS(184),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_multilineFieldOperator] = ACTIONS(184),
    [sym_key] = ACTIONS(189),
    [sym_commentOperator] = ACTIONS(191),
    [sym_escapeOperator] = ACTIONS(184),
  },
  [41] = {
    [sym_comment] = STATE(65),
    [aux_sym_comment_repeat1] = STATE(147),
    [sym__escapedOrUnescapedKey] = STATE(38),
    [aux_sym_entry_repeat1] = STATE(65),
    [sym_entry] = STATE(66),
    [aux_sym_fieldset_repeat1] = STATE(66),
    [sym_multilineFieldOperator] = ACTIONS(194),
    [sym_key] = ACTIONS(196),
    [sym_commentOperator] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym__emptyLine] = ACTIONS(202),
    [sym__sectionDescend] = ACTIONS(194),
    [sym_escapeOperator] = ACTIONS(205),
  },
  [42] = {
    [sym_comment] = STATE(67),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(67),
    [aux_sym_list_repeat1] = STATE(68),
    [sym_item] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym__emptyLine] = ACTIONS(210),
    [sym__sectionDescend] = ACTIONS(208),
    [sym_itemOperator] = ACTIONS(117),
    [sym_multilineFieldOperator] = ACTIONS(208),
    [sym_key] = ACTIONS(213),
    [sym_commentOperator] = ACTIONS(215),
    [sym_escapeOperator] = ACTIONS(208),
  },
  [43] = {
    [sym_comment] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(63),
    [sym_continuation] = STATE(69),
    [aux_sym_entry_repeat2] = STATE(69),
    [sym_directContinuationOperator] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym__emptyLine] = ACTIONS(220),
    [sym__sectionDescend] = ACTIONS(218),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_multilineFieldOperator] = ACTIONS(218),
    [sym_key] = ACTIONS(223),
    [sym_commentOperator] = ACTIONS(225),
    [sym_escapeOperator] = ACTIONS(218),
  },
  [44] = {
    [sym_multilineFieldKey] = ACTIONS(228),
  },
  [45] = {
    [sym__multilineFieldEnd] = ACTIONS(230),
    [sym__multilineFieldLine] = ACTIONS(230),
  },
  [46] = {
    [aux_sym_multilineFieldValue_repeat1] = STATE(46),
    [sym__multilineFieldEnd] = ACTIONS(230),
    [sym__multilineFieldLine] = ACTIONS(232),
  },
  [47] = {
    [sym_multilineFieldOperator] = ACTIONS(235),
  },
  [48] = {
    [sym_deepCopyOperator] = ACTIONS(237),
    [sym__endOfLine] = ACTIONS(237),
    [sym_copyOperator] = ACTIONS(239),
  },
  [49] = {
    [sym_multilineFieldOperator] = ACTIONS(241),
    [sym_key] = ACTIONS(243),
    [sym_commentOperator] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym__emptyLine] = ACTIONS(243),
    [sym__sectionDescend] = ACTIONS(241),
    [sym_escapeOperator] = ACTIONS(241),
  },
  [50] = {
    [sym_list] = STATE(93),
    [aux_sym_comment_repeat1] = STATE(127),
    [sym__escapedOrUnescapedKey] = STATE(152),
    [sym_empty] = STATE(93),
    [sym_multilineField] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_field] = STATE(93),
    [sym_fieldset] = STATE(93),
    [sym_section] = STATE(93),
    [aux_sym_document_repeat1] = STATE(93),
    [sym_element] = STATE(93),
    [sym_multilineFieldOperator] = ACTIONS(140),
    [sym_key] = ACTIONS(142),
    [sym_commentOperator] = ACTIONS(144),
    [sym__sectionDescend] = ACTIONS(146),
    [sym__emptyLine] = ACTIONS(245),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(247),
  },
  [51] = {
    [sym__endOfLine] = ACTIONS(249),
  },
  [52] = {
    [sym_comment] = STATE(106),
    [aux_sym_comment_repeat1] = STATE(135),
    [sym__escapedOrUnescapedKey] = STATE(38),
    [aux_sym_entry_repeat1] = STATE(106),
    [sym_entry] = STATE(60),
    [sym_item] = STATE(62),
    [sym_key] = ACTIONS(176),
    [sym_commentOperator] = ACTIONS(251),
    [sym__emptyLine] = ACTIONS(253),
    [sym_escapeOperator] = ACTIONS(182),
    [sym_itemOperator] = ACTIONS(117),
  },
  [53] = {
    [sym_comment] = STATE(65),
    [aux_sym_comment_repeat1] = STATE(147),
    [sym__escapedOrUnescapedKey] = STATE(38),
    [aux_sym_entry_repeat1] = STATE(65),
    [sym_entry] = STATE(66),
    [aux_sym_fieldset_repeat1] = STATE(66),
    [sym_multilineFieldOperator] = ACTIONS(255),
    [sym_key] = ACTIONS(257),
    [sym_commentOperator] = ACTIONS(260),
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym__emptyLine] = ACTIONS(263),
    [sym__sectionDescend] = ACTIONS(255),
    [sym_escapeOperator] = ACTIONS(266),
  },
  [54] = {
    [sym_comment] = STATE(67),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(67),
    [aux_sym_list_repeat1] = STATE(68),
    [sym_item] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym__emptyLine] = ACTIONS(271),
    [sym__sectionDescend] = ACTIONS(269),
    [sym_itemOperator] = ACTIONS(117),
    [sym_multilineFieldOperator] = ACTIONS(269),
    [sym_key] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(276),
    [sym_escapeOperator] = ACTIONS(269),
  },
  [55] = {
    [sym__endOfLine] = ACTIONS(279),
  },
  [56] = {
    [sym_comment] = STATE(166),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(166),
    [sym_continuation] = STATE(75),
    [aux_sym_entry_repeat2] = STATE(75),
    [sym_directContinuationOperator] = ACTIONS(281),
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym__emptyLine] = ACTIONS(285),
    [sym__sectionDescend] = ACTIONS(283),
    [sym_itemOperator] = ACTIONS(288),
    [sym_spacedContinuationOperator] = ACTIONS(281),
    [sym_multilineFieldOperator] = ACTIONS(283),
    [sym_key] = ACTIONS(288),
    [sym_commentOperator] = ACTIONS(290),
    [sym_escapeOperator] = ACTIONS(283),
  },
  [57] = {
    [sym__endOfLine] = ACTIONS(293),
  },
  [58] = {
    [sym__endOfLine] = ACTIONS(295),
    [sym_token] = ACTIONS(297),
  },
  [59] = {
    [sym_comment] = STATE(59),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(59),
    [sym_directContinuationOperator] = ACTIONS(299),
    [sym_key] = ACTIONS(299),
    [sym_commentOperator] = ACTIONS(301),
    [sym__emptyLine] = ACTIONS(304),
    [sym_spacedContinuationOperator] = ACTIONS(299),
    [sym_itemOperator] = ACTIONS(299),
    [sym_escapeOperator] = ACTIONS(307),
  },
  [60] = {
    [sym_multilineFieldOperator] = ACTIONS(309),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(311),
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym__emptyLine] = ACTIONS(311),
    [sym__sectionDescend] = ACTIONS(309),
    [sym_escapeOperator] = ACTIONS(309),
  },
  [61] = {
    [sym_directContinuationOperator] = ACTIONS(313),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym__emptyLine] = ACTIONS(313),
    [sym_spacedContinuationOperator] = ACTIONS(313),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_multilineFieldOperator] = ACTIONS(315),
    [sym_key] = ACTIONS(313),
    [sym_commentOperator] = ACTIONS(313),
    [sym_escapeOperator] = ACTIONS(315),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym__emptyLine] = ACTIONS(319),
    [sym__sectionDescend] = ACTIONS(317),
    [sym_itemOperator] = ACTIONS(319),
    [sym_multilineFieldOperator] = ACTIONS(317),
    [sym_key] = ACTIONS(319),
    [sym_commentOperator] = ACTIONS(319),
    [sym_escapeOperator] = ACTIONS(317),
  },
  [63] = {
    [sym_comment] = STATE(131),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(131),
    [sym_continuation] = STATE(61),
    [sym_directContinuationOperator] = ACTIONS(321),
    [sym_commentOperator] = ACTIONS(323),
    [sym__emptyLine] = ACTIONS(325),
    [sym_spacedContinuationOperator] = ACTIONS(321),
  },
  [64] = {
    [sym_comment] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(63),
    [sym_continuation] = STATE(64),
    [aux_sym_entry_repeat2] = STATE(64),
    [sym_directContinuationOperator] = ACTIONS(327),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym__emptyLine] = ACTIONS(330),
    [sym_spacedContinuationOperator] = ACTIONS(327),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_multilineFieldOperator] = ACTIONS(315),
    [sym_key] = ACTIONS(313),
    [sym_commentOperator] = ACTIONS(333),
    [sym_escapeOperator] = ACTIONS(315),
  },
  [65] = {
    [sym_comment] = STATE(139),
    [aux_sym_comment_repeat1] = STATE(147),
    [sym__escapedOrUnescapedKey] = STATE(38),
    [aux_sym_entry_repeat1] = STATE(139),
    [sym_entry] = STATE(60),
    [sym_key] = ACTIONS(176),
    [sym_commentOperator] = ACTIONS(336),
    [sym__emptyLine] = ACTIONS(338),
    [sym_escapeOperator] = ACTIONS(182),
  },
  [66] = {
    [sym_comment] = STATE(65),
    [aux_sym_comment_repeat1] = STATE(147),
    [sym__escapedOrUnescapedKey] = STATE(38),
    [aux_sym_entry_repeat1] = STATE(65),
    [sym_entry] = STATE(66),
    [aux_sym_fieldset_repeat1] = STATE(66),
    [sym_multilineFieldOperator] = ACTIONS(309),
    [sym_key] = ACTIONS(340),
    [sym_commentOperator] = ACTIONS(343),
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym__emptyLine] = ACTIONS(346),
    [sym__sectionDescend] = ACTIONS(309),
    [sym_escapeOperator] = ACTIONS(349),
  },
  [67] = {
    [sym_comment] = STATE(131),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(131),
    [sym_item] = STATE(62),
    [sym__emptyLine] = ACTIONS(325),
    [sym_itemOperator] = ACTIONS(352),
    [sym_commentOperator] = ACTIONS(323),
  },
  [68] = {
    [sym_comment] = STATE(67),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(67),
    [aux_sym_list_repeat1] = STATE(68),
    [sym_item] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym__emptyLine] = ACTIONS(354),
    [sym__sectionDescend] = ACTIONS(317),
    [sym_itemOperator] = ACTIONS(357),
    [sym_multilineFieldOperator] = ACTIONS(317),
    [sym_key] = ACTIONS(319),
    [sym_commentOperator] = ACTIONS(360),
    [sym_escapeOperator] = ACTIONS(317),
  },
  [69] = {
    [sym_comment] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(63),
    [sym_continuation] = STATE(64),
    [aux_sym_entry_repeat2] = STATE(64),
    [sym_directContinuationOperator] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(363),
    [sym__emptyLine] = ACTIONS(365),
    [sym__sectionDescend] = ACTIONS(363),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_multilineFieldOperator] = ACTIONS(363),
    [sym_key] = ACTIONS(368),
    [sym_commentOperator] = ACTIONS(370),
    [sym_escapeOperator] = ACTIONS(363),
  },
  [70] = {
    [sym__endOfLine] = ACTIONS(373),
  },
  [71] = {
    [sym_multilineFieldKey] = ACTIONS(375),
  },
  [72] = {
    [sym_multilineFieldOperator] = ACTIONS(377),
    [sym_key] = ACTIONS(379),
    [sym_commentOperator] = ACTIONS(379),
    [ts_builtin_sym_end] = ACTIONS(377),
    [sym__emptyLine] = ACTIONS(379),
    [sym__sectionDescend] = ACTIONS(377),
    [sym_escapeOperator] = ACTIONS(377),
  },
  [73] = {
    [sym_list] = STATE(82),
    [aux_sym_comment_repeat1] = STATE(127),
    [sym__escapedOrUnescapedKey] = STATE(152),
    [sym_empty] = STATE(82),
    [sym_multilineField] = STATE(82),
    [sym_comment] = STATE(82),
    [sym_field] = STATE(82),
    [sym_fieldset] = STATE(82),
    [sym_section] = STATE(82),
    [aux_sym_document_repeat1] = STATE(82),
    [sym_element] = STATE(82),
    [sym_multilineFieldOperator] = ACTIONS(140),
    [sym_key] = ACTIONS(142),
    [sym_commentOperator] = ACTIONS(144),
    [sym__sectionDescend] = ACTIONS(146),
    [sym__emptyLine] = ACTIONS(381),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(383),
  },
  [74] = {
    [sym_directContinuationOperator] = ACTIONS(385),
    [ts_builtin_sym_end] = ACTIONS(387),
    [sym__emptyLine] = ACTIONS(385),
    [sym_spacedContinuationOperator] = ACTIONS(385),
    [sym__sectionDescend] = ACTIONS(387),
    [sym_multilineFieldOperator] = ACTIONS(387),
    [sym_key] = ACTIONS(385),
    [sym_commentOperator] = ACTIONS(385),
    [sym_escapeOperator] = ACTIONS(387),
  },
  [75] = {
    [sym_comment] = STATE(166),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(166),
    [sym_continuation] = STATE(110),
    [aux_sym_entry_repeat2] = STATE(110),
    [sym_directContinuationOperator] = ACTIONS(281),
    [ts_builtin_sym_end] = ACTIONS(389),
    [sym__emptyLine] = ACTIONS(391),
    [sym__sectionDescend] = ACTIONS(389),
    [sym_itemOperator] = ACTIONS(394),
    [sym_spacedContinuationOperator] = ACTIONS(281),
    [sym_multilineFieldOperator] = ACTIONS(389),
    [sym_key] = ACTIONS(394),
    [sym_commentOperator] = ACTIONS(396),
    [sym_escapeOperator] = ACTIONS(389),
  },
  [76] = {
    [sym_comment] = STATE(166),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(166),
    [sym_continuation] = STATE(83),
    [aux_sym_entry_repeat2] = STATE(83),
    [sym_directContinuationOperator] = ACTIONS(281),
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym__emptyLine] = ACTIONS(401),
    [sym__sectionDescend] = ACTIONS(399),
    [sym_itemOperator] = ACTIONS(404),
    [sym_spacedContinuationOperator] = ACTIONS(281),
    [sym_multilineFieldOperator] = ACTIONS(399),
    [sym_key] = ACTIONS(404),
    [sym_commentOperator] = ACTIONS(406),
    [sym_escapeOperator] = ACTIONS(399),
  },
  [77] = {
    [sym_comment] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(63),
    [sym_continuation] = STATE(84),
    [aux_sym_entry_repeat2] = STATE(84),
    [sym_directContinuationOperator] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(409),
    [sym__emptyLine] = ACTIONS(411),
    [sym__sectionDescend] = ACTIONS(409),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_multilineFieldOperator] = ACTIONS(409),
    [sym_key] = ACTIONS(414),
    [sym_commentOperator] = ACTIONS(416),
    [sym_escapeOperator] = ACTIONS(409),
  },
  [78] = {
    [sym__endOfLine] = ACTIONS(419),
  },
  [79] = {
    [sym_multilineFieldOperator] = ACTIONS(421),
    [sym_key] = ACTIONS(423),
    [sym_commentOperator] = ACTIONS(423),
    [ts_builtin_sym_end] = ACTIONS(421),
    [sym__emptyLine] = ACTIONS(423),
    [sym__sectionDescend] = ACTIONS(421),
    [sym_escapeOperator] = ACTIONS(421),
  },
  [80] = {
    [sym__endOfLine] = ACTIONS(425),
  },
  [81] = {
    [sym_multilineFieldOperator] = ACTIONS(427),
    [sym_key] = ACTIONS(429),
    [sym_commentOperator] = ACTIONS(429),
    [ts_builtin_sym_end] = ACTIONS(427),
    [sym__emptyLine] = ACTIONS(429),
    [sym__sectionDescend] = ACTIONS(427),
    [sym_escapeOperator] = ACTIONS(427),
  },
  [82] = {
    [sym_list] = STATE(93),
    [aux_sym_comment_repeat1] = STATE(127),
    [sym__escapedOrUnescapedKey] = STATE(152),
    [sym_empty] = STATE(93),
    [sym_multilineField] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_field] = STATE(93),
    [sym_fieldset] = STATE(93),
    [sym_section] = STATE(93),
    [aux_sym_document_repeat1] = STATE(93),
    [sym_element] = STATE(93),
    [sym_multilineFieldOperator] = ACTIONS(140),
    [sym_key] = ACTIONS(142),
    [sym_commentOperator] = ACTIONS(144),
    [sym__sectionDescend] = ACTIONS(146),
    [sym__emptyLine] = ACTIONS(245),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(431),
  },
  [83] = {
    [sym_comment] = STATE(166),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(166),
    [sym_continuation] = STATE(110),
    [aux_sym_entry_repeat2] = STATE(110),
    [sym_directContinuationOperator] = ACTIONS(281),
    [ts_builtin_sym_end] = ACTIONS(433),
    [sym__emptyLine] = ACTIONS(435),
    [sym__sectionDescend] = ACTIONS(433),
    [sym_itemOperator] = ACTIONS(438),
    [sym_spacedContinuationOperator] = ACTIONS(281),
    [sym_multilineFieldOperator] = ACTIONS(433),
    [sym_key] = ACTIONS(438),
    [sym_commentOperator] = ACTIONS(440),
    [sym_escapeOperator] = ACTIONS(433),
  },
  [84] = {
    [sym_comment] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(63),
    [sym_continuation] = STATE(64),
    [aux_sym_entry_repeat2] = STATE(64),
    [sym_directContinuationOperator] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(443),
    [sym__emptyLine] = ACTIONS(445),
    [sym__sectionDescend] = ACTIONS(443),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_multilineFieldOperator] = ACTIONS(443),
    [sym_key] = ACTIONS(448),
    [sym_commentOperator] = ACTIONS(450),
    [sym_escapeOperator] = ACTIONS(443),
  },
  [85] = {
    [sym_comment] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(63),
    [sym_continuation] = STATE(88),
    [aux_sym_entry_repeat2] = STATE(88),
    [sym_directContinuationOperator] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(453),
    [sym__emptyLine] = ACTIONS(455),
    [sym__sectionDescend] = ACTIONS(453),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_multilineFieldOperator] = ACTIONS(453),
    [sym_key] = ACTIONS(458),
    [sym_commentOperator] = ACTIONS(460),
    [sym_escapeOperator] = ACTIONS(453),
  },
  [86] = {
    [sym_multilineFieldOperator] = ACTIONS(463),
    [sym_key] = ACTIONS(465),
    [sym_commentOperator] = ACTIONS(465),
    [ts_builtin_sym_end] = ACTIONS(463),
    [sym__emptyLine] = ACTIONS(465),
    [sym__sectionDescend] = ACTIONS(463),
    [sym_escapeOperator] = ACTIONS(463),
  },
  [87] = {
    [sym_multilineFieldOperator] = ACTIONS(467),
    [sym_key] = ACTIONS(469),
    [sym_commentOperator] = ACTIONS(469),
    [ts_builtin_sym_end] = ACTIONS(467),
    [sym__emptyLine] = ACTIONS(469),
    [sym__sectionDescend] = ACTIONS(467),
    [sym_escapeOperator] = ACTIONS(467),
  },
  [88] = {
    [sym_comment] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(63),
    [sym_continuation] = STATE(64),
    [aux_sym_entry_repeat2] = STATE(64),
    [sym_directContinuationOperator] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(471),
    [sym__emptyLine] = ACTIONS(473),
    [sym__sectionDescend] = ACTIONS(471),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_multilineFieldOperator] = ACTIONS(471),
    [sym_key] = ACTIONS(476),
    [sym_commentOperator] = ACTIONS(478),
    [sym_escapeOperator] = ACTIONS(471),
  },
  [89] = {
    [aux_sym_comment_repeat1] = STATE(91),
    [sym_directContinuationOperator] = ACTIONS(29),
    [sym_key] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(178),
    [sym__emptyLine] = ACTIONS(29),
    [sym_spacedContinuationOperator] = ACTIONS(29),
    [sym_itemOperator] = ACTIONS(29),
    [sym_escapeOperator] = ACTIONS(27),
  },
  [90] = {
    [sym_directContinuationOperator] = ACTIONS(47),
    [sym_key] = ACTIONS(47),
    [sym_commentOperator] = ACTIONS(47),
    [sym__emptyLine] = ACTIONS(47),
    [sym_spacedContinuationOperator] = ACTIONS(47),
    [sym_itemOperator] = ACTIONS(47),
    [sym_escapeOperator] = ACTIONS(45),
  },
  [91] = {
    [aux_sym_comment_repeat1] = STATE(91),
    [sym_directContinuationOperator] = ACTIONS(47),
    [sym_key] = ACTIONS(47),
    [sym_commentOperator] = ACTIONS(481),
    [sym__emptyLine] = ACTIONS(47),
    [sym_spacedContinuationOperator] = ACTIONS(47),
    [sym_itemOperator] = ACTIONS(47),
    [sym_escapeOperator] = ACTIONS(45),
  },
  [92] = {
    [sym_multilineFieldOperator] = ACTIONS(62),
    [sym_key] = ACTIONS(64),
    [sym_commentOperator] = ACTIONS(64),
    [sym__emptyLine] = ACTIONS(64),
    [sym__sectionDescend] = ACTIONS(62),
    [sym_escapeOperator] = ACTIONS(62),
    [sym__sectionAscend] = ACTIONS(62),
  },
  [93] = {
    [sym_list] = STATE(93),
    [aux_sym_comment_repeat1] = STATE(127),
    [sym__escapedOrUnescapedKey] = STATE(152),
    [sym_empty] = STATE(93),
    [sym_multilineField] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_field] = STATE(93),
    [sym_fieldset] = STATE(93),
    [sym_section] = STATE(93),
    [aux_sym_document_repeat1] = STATE(93),
    [sym_element] = STATE(93),
    [sym_multilineFieldOperator] = ACTIONS(484),
    [sym_key] = ACTIONS(487),
    [sym_commentOperator] = ACTIONS(490),
    [sym__emptyLine] = ACTIONS(493),
    [sym__sectionDescend] = ACTIONS(496),
    [sym_escapeOperator] = ACTIONS(87),
    [sym__sectionAscend] = ACTIONS(79),
  },
  [94] = {
    [sym_directContinuationOperator] = ACTIONS(96),
    [sym_key] = ACTIONS(96),
    [sym_commentOperator] = ACTIONS(96),
    [sym__emptyLine] = ACTIONS(96),
    [sym_spacedContinuationOperator] = ACTIONS(96),
    [sym_itemOperator] = ACTIONS(96),
    [sym_escapeOperator] = ACTIONS(94),
  },
  [95] = {
    [sym_entryOperator] = ACTIONS(106),
  },
  [96] = {
    [aux_sym_comment_repeat1] = STATE(89),
    [sym__escapedOrUnescapedKey] = STATE(190),
    [aux_sym_entry_repeat1] = STATE(160),
    [sym_entry] = STATE(99),
    [aux_sym_entry_repeat2] = STATE(98),
    [sym_comment] = STATE(160),
    [aux_sym_fieldset_repeat1] = STATE(99),
    [sym_continuation] = STATE(98),
    [aux_sym_list_repeat1] = STATE(100),
    [sym_item] = STATE(100),
    [sym_directContinuationOperator] = ACTIONS(499),
    [sym__emptyLine] = ACTIONS(501),
    [sym__sectionDescend] = ACTIONS(112),
    [sym_spacedContinuationOperator] = ACTIONS(499),
    [sym_itemOperator] = ACTIONS(504),
    [sym_multilineFieldOperator] = ACTIONS(112),
    [sym_key] = ACTIONS(506),
    [sym_commentOperator] = ACTIONS(122),
    [sym_escapeOperator] = ACTIONS(125),
    [sym__sectionAscend] = ACTIONS(112),
  },
  [97] = {
    [aux_sym_comment_repeat1] = STATE(135),
    [sym__escapedOrUnescapedKey] = STATE(190),
    [aux_sym_entry_repeat1] = STATE(162),
    [sym_entry] = STATE(103),
    [sym_comment] = STATE(162),
    [aux_sym_fieldset_repeat1] = STATE(103),
    [aux_sym_list_repeat1] = STATE(104),
    [sym_item] = STATE(104),
    [sym__emptyLine] = ACTIONS(509),
    [sym__sectionDescend] = ACTIONS(154),
    [sym_itemOperator] = ACTIONS(504),
    [sym_multilineFieldOperator] = ACTIONS(154),
    [sym_key] = ACTIONS(512),
    [sym_commentOperator] = ACTIONS(162),
    [sym_escapeOperator] = ACTIONS(165),
    [sym__sectionAscend] = ACTIONS(154),
  },
  [98] = {
    [sym_comment] = STATE(177),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(177),
    [sym_continuation] = STATE(133),
    [aux_sym_entry_repeat2] = STATE(133),
    [sym_directContinuationOperator] = ACTIONS(499),
    [sym__emptyLine] = ACTIONS(515),
    [sym__sectionDescend] = ACTIONS(184),
    [sym_spacedContinuationOperator] = ACTIONS(499),
    [sym_multilineFieldOperator] = ACTIONS(184),
    [sym_key] = ACTIONS(189),
    [sym_commentOperator] = ACTIONS(191),
    [sym_escapeOperator] = ACTIONS(184),
    [sym__sectionAscend] = ACTIONS(184),
  },
  [99] = {
    [sym_comment] = STATE(167),
    [aux_sym_comment_repeat1] = STATE(147),
    [sym__escapedOrUnescapedKey] = STATE(190),
    [aux_sym_entry_repeat1] = STATE(167),
    [sym_entry] = STATE(111),
    [aux_sym_fieldset_repeat1] = STATE(111),
    [sym_multilineFieldOperator] = ACTIONS(194),
    [sym_key] = ACTIONS(518),
    [sym_commentOperator] = ACTIONS(199),
    [sym__emptyLine] = ACTIONS(521),
    [sym__sectionDescend] = ACTIONS(194),
    [sym_escapeOperator] = ACTIONS(205),
    [sym__sectionAscend] = ACTIONS(194),
  },
  [100] = {
    [sym_comment] = STATE(168),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(168),
    [aux_sym_list_repeat1] = STATE(112),
    [sym_item] = STATE(112),
    [sym__emptyLine] = ACTIONS(524),
    [sym__sectionDescend] = ACTIONS(208),
    [sym_itemOperator] = ACTIONS(504),
    [sym_multilineFieldOperator] = ACTIONS(208),
    [sym_key] = ACTIONS(213),
    [sym_commentOperator] = ACTIONS(215),
    [sym_escapeOperator] = ACTIONS(208),
    [sym__sectionAscend] = ACTIONS(208),
  },
  [101] = {
    [sym_comment] = STATE(177),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(177),
    [sym_continuation] = STATE(113),
    [aux_sym_entry_repeat2] = STATE(113),
    [sym_directContinuationOperator] = ACTIONS(499),
    [sym__emptyLine] = ACTIONS(527),
    [sym__sectionDescend] = ACTIONS(218),
    [sym_spacedContinuationOperator] = ACTIONS(499),
    [sym_multilineFieldOperator] = ACTIONS(218),
    [sym_key] = ACTIONS(223),
    [sym_commentOperator] = ACTIONS(225),
    [sym_escapeOperator] = ACTIONS(218),
    [sym__sectionAscend] = ACTIONS(218),
  },
  [102] = {
    [sym_multilineFieldOperator] = ACTIONS(241),
    [sym_key] = ACTIONS(243),
    [sym_commentOperator] = ACTIONS(243),
    [sym__emptyLine] = ACTIONS(243),
    [sym__sectionDescend] = ACTIONS(241),
    [sym_escapeOperator] = ACTIONS(241),
    [sym__sectionAscend] = ACTIONS(241),
  },
  [103] = {
    [sym_comment] = STATE(167),
    [aux_sym_comment_repeat1] = STATE(147),
    [sym__escapedOrUnescapedKey] = STATE(190),
    [aux_sym_entry_repeat1] = STATE(167),
    [sym_entry] = STATE(111),
    [aux_sym_fieldset_repeat1] = STATE(111),
    [sym_multilineFieldOperator] = ACTIONS(255),
    [sym_key] = ACTIONS(530),
    [sym_commentOperator] = ACTIONS(260),
    [sym__emptyLine] = ACTIONS(533),
    [sym__sectionDescend] = ACTIONS(255),
    [sym_escapeOperator] = ACTIONS(266),
    [sym__sectionAscend] = ACTIONS(255),
  },
  [104] = {
    [sym_comment] = STATE(168),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(168),
    [aux_sym_list_repeat1] = STATE(112),
    [sym_item] = STATE(112),
    [sym__emptyLine] = ACTIONS(536),
    [sym__sectionDescend] = ACTIONS(269),
    [sym_itemOperator] = ACTIONS(504),
    [sym_multilineFieldOperator] = ACTIONS(269),
    [sym_key] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(276),
    [sym_escapeOperator] = ACTIONS(269),
    [sym__sectionAscend] = ACTIONS(269),
  },
  [105] = {
    [sym_comment] = STATE(181),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(181),
    [sym_continuation] = STATE(116),
    [aux_sym_entry_repeat2] = STATE(116),
    [sym_directContinuationOperator] = ACTIONS(539),
    [sym__emptyLine] = ACTIONS(541),
    [sym__sectionDescend] = ACTIONS(283),
    [sym_itemOperator] = ACTIONS(288),
    [sym_spacedContinuationOperator] = ACTIONS(539),
    [sym_multilineFieldOperator] = ACTIONS(283),
    [sym_key] = ACTIONS(288),
    [sym_commentOperator] = ACTIONS(290),
    [sym_escapeOperator] = ACTIONS(283),
    [sym__sectionAscend] = ACTIONS(283),
  },
  [106] = {
    [sym_comment] = STATE(106),
    [aux_sym_comment_repeat1] = STATE(135),
    [aux_sym_entry_repeat1] = STATE(106),
    [sym_key] = ACTIONS(299),
    [sym_commentOperator] = ACTIONS(544),
    [sym__emptyLine] = ACTIONS(547),
    [sym_itemOperator] = ACTIONS(299),
    [sym_escapeOperator] = ACTIONS(307),
  },
  [107] = {
    [sym_multilineFieldOperator] = ACTIONS(309),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(311),
    [sym__emptyLine] = ACTIONS(311),
    [sym__sectionDescend] = ACTIONS(309),
    [sym_escapeOperator] = ACTIONS(309),
    [sym__sectionAscend] = ACTIONS(309),
  },
  [108] = {
    [sym_directContinuationOperator] = ACTIONS(313),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym__emptyLine] = ACTIONS(313),
    [sym_spacedContinuationOperator] = ACTIONS(313),
    [sym_itemOperator] = ACTIONS(313),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_multilineFieldOperator] = ACTIONS(315),
    [sym_key] = ACTIONS(313),
    [sym_commentOperator] = ACTIONS(313),
    [sym_escapeOperator] = ACTIONS(315),
  },
  [109] = {
    [sym__emptyLine] = ACTIONS(319),
    [sym__sectionDescend] = ACTIONS(317),
    [sym_itemOperator] = ACTIONS(319),
    [sym_multilineFieldOperator] = ACTIONS(317),
    [sym_key] = ACTIONS(319),
    [sym_commentOperator] = ACTIONS(319),
    [sym_escapeOperator] = ACTIONS(317),
    [sym__sectionAscend] = ACTIONS(317),
  },
  [110] = {
    [sym_comment] = STATE(166),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(166),
    [sym_continuation] = STATE(110),
    [aux_sym_entry_repeat2] = STATE(110),
    [sym_directContinuationOperator] = ACTIONS(550),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym__emptyLine] = ACTIONS(553),
    [sym_spacedContinuationOperator] = ACTIONS(550),
    [sym_itemOperator] = ACTIONS(313),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_multilineFieldOperator] = ACTIONS(315),
    [sym_key] = ACTIONS(313),
    [sym_commentOperator] = ACTIONS(333),
    [sym_escapeOperator] = ACTIONS(315),
  },
  [111] = {
    [sym_comment] = STATE(167),
    [aux_sym_comment_repeat1] = STATE(147),
    [sym__escapedOrUnescapedKey] = STATE(190),
    [aux_sym_entry_repeat1] = STATE(167),
    [sym_entry] = STATE(111),
    [aux_sym_fieldset_repeat1] = STATE(111),
    [sym_multilineFieldOperator] = ACTIONS(309),
    [sym_key] = ACTIONS(556),
    [sym_commentOperator] = ACTIONS(343),
    [sym__emptyLine] = ACTIONS(559),
    [sym__sectionDescend] = ACTIONS(309),
    [sym_escapeOperator] = ACTIONS(349),
    [sym__sectionAscend] = ACTIONS(309),
  },
  [112] = {
    [sym_comment] = STATE(168),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(168),
    [aux_sym_list_repeat1] = STATE(112),
    [sym_item] = STATE(112),
    [sym__emptyLine] = ACTIONS(562),
    [sym__sectionDescend] = ACTIONS(317),
    [sym_itemOperator] = ACTIONS(565),
    [sym_multilineFieldOperator] = ACTIONS(317),
    [sym_key] = ACTIONS(319),
    [sym_commentOperator] = ACTIONS(360),
    [sym_escapeOperator] = ACTIONS(317),
    [sym__sectionAscend] = ACTIONS(317),
  },
  [113] = {
    [sym_comment] = STATE(177),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(177),
    [sym_continuation] = STATE(133),
    [aux_sym_entry_repeat2] = STATE(133),
    [sym_directContinuationOperator] = ACTIONS(499),
    [sym__emptyLine] = ACTIONS(568),
    [sym__sectionDescend] = ACTIONS(363),
    [sym_spacedContinuationOperator] = ACTIONS(499),
    [sym_multilineFieldOperator] = ACTIONS(363),
    [sym_key] = ACTIONS(368),
    [sym_commentOperator] = ACTIONS(370),
    [sym_escapeOperator] = ACTIONS(363),
    [sym__sectionAscend] = ACTIONS(363),
  },
  [114] = {
    [sym_multilineFieldOperator] = ACTIONS(377),
    [sym_key] = ACTIONS(379),
    [sym_commentOperator] = ACTIONS(379),
    [sym__emptyLine] = ACTIONS(379),
    [sym__sectionDescend] = ACTIONS(377),
    [sym_escapeOperator] = ACTIONS(377),
    [sym__sectionAscend] = ACTIONS(377),
  },
  [115] = {
    [sym_directContinuationOperator] = ACTIONS(385),
    [ts_builtin_sym_end] = ACTIONS(387),
    [sym__emptyLine] = ACTIONS(385),
    [sym_spacedContinuationOperator] = ACTIONS(385),
    [sym_itemOperator] = ACTIONS(385),
    [sym__sectionDescend] = ACTIONS(387),
    [sym_multilineFieldOperator] = ACTIONS(387),
    [sym_key] = ACTIONS(385),
    [sym_commentOperator] = ACTIONS(385),
    [sym_escapeOperator] = ACTIONS(387),
  },
  [116] = {
    [sym_comment] = STATE(181),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(181),
    [sym_continuation] = STATE(141),
    [aux_sym_entry_repeat2] = STATE(141),
    [sym_directContinuationOperator] = ACTIONS(539),
    [sym__emptyLine] = ACTIONS(571),
    [sym__sectionDescend] = ACTIONS(389),
    [sym_itemOperator] = ACTIONS(394),
    [sym_spacedContinuationOperator] = ACTIONS(539),
    [sym_multilineFieldOperator] = ACTIONS(389),
    [sym_key] = ACTIONS(394),
    [sym_commentOperator] = ACTIONS(396),
    [sym_escapeOperator] = ACTIONS(389),
    [sym__sectionAscend] = ACTIONS(389),
  },
  [117] = {
    [sym_comment] = STATE(181),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(181),
    [sym_continuation] = STATE(121),
    [aux_sym_entry_repeat2] = STATE(121),
    [sym_directContinuationOperator] = ACTIONS(539),
    [sym__emptyLine] = ACTIONS(574),
    [sym__sectionDescend] = ACTIONS(399),
    [sym_itemOperator] = ACTIONS(404),
    [sym_spacedContinuationOperator] = ACTIONS(539),
    [sym_multilineFieldOperator] = ACTIONS(399),
    [sym_key] = ACTIONS(404),
    [sym_commentOperator] = ACTIONS(406),
    [sym_escapeOperator] = ACTIONS(399),
    [sym__sectionAscend] = ACTIONS(399),
  },
  [118] = {
    [sym_comment] = STATE(177),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(177),
    [sym_continuation] = STATE(122),
    [aux_sym_entry_repeat2] = STATE(122),
    [sym_directContinuationOperator] = ACTIONS(499),
    [sym__emptyLine] = ACTIONS(577),
    [sym__sectionDescend] = ACTIONS(409),
    [sym_spacedContinuationOperator] = ACTIONS(499),
    [sym_multilineFieldOperator] = ACTIONS(409),
    [sym_key] = ACTIONS(414),
    [sym_commentOperator] = ACTIONS(416),
    [sym_escapeOperator] = ACTIONS(409),
    [sym__sectionAscend] = ACTIONS(409),
  },
  [119] = {
    [sym_multilineFieldOperator] = ACTIONS(421),
    [sym_key] = ACTIONS(423),
    [sym_commentOperator] = ACTIONS(423),
    [sym__emptyLine] = ACTIONS(423),
    [sym__sectionDescend] = ACTIONS(421),
    [sym_escapeOperator] = ACTIONS(421),
    [sym__sectionAscend] = ACTIONS(421),
  },
  [120] = {
    [sym_multilineFieldOperator] = ACTIONS(427),
    [sym_key] = ACTIONS(429),
    [sym_commentOperator] = ACTIONS(429),
    [sym__emptyLine] = ACTIONS(429),
    [sym__sectionDescend] = ACTIONS(427),
    [sym_escapeOperator] = ACTIONS(427),
    [sym__sectionAscend] = ACTIONS(427),
  },
  [121] = {
    [sym_comment] = STATE(181),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(181),
    [sym_continuation] = STATE(141),
    [aux_sym_entry_repeat2] = STATE(141),
    [sym_directContinuationOperator] = ACTIONS(539),
    [sym__emptyLine] = ACTIONS(580),
    [sym__sectionDescend] = ACTIONS(433),
    [sym_itemOperator] = ACTIONS(438),
    [sym_spacedContinuationOperator] = ACTIONS(539),
    [sym_multilineFieldOperator] = ACTIONS(433),
    [sym_key] = ACTIONS(438),
    [sym_commentOperator] = ACTIONS(440),
    [sym_escapeOperator] = ACTIONS(433),
    [sym__sectionAscend] = ACTIONS(433),
  },
  [122] = {
    [sym_comment] = STATE(177),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(177),
    [sym_continuation] = STATE(133),
    [aux_sym_entry_repeat2] = STATE(133),
    [sym_directContinuationOperator] = ACTIONS(499),
    [sym__emptyLine] = ACTIONS(583),
    [sym__sectionDescend] = ACTIONS(443),
    [sym_spacedContinuationOperator] = ACTIONS(499),
    [sym_multilineFieldOperator] = ACTIONS(443),
    [sym_key] = ACTIONS(448),
    [sym_commentOperator] = ACTIONS(450),
    [sym_escapeOperator] = ACTIONS(443),
    [sym__sectionAscend] = ACTIONS(443),
  },
  [123] = {
    [sym_comment] = STATE(177),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(177),
    [sym_continuation] = STATE(126),
    [aux_sym_entry_repeat2] = STATE(126),
    [sym_directContinuationOperator] = ACTIONS(499),
    [sym__emptyLine] = ACTIONS(586),
    [sym__sectionDescend] = ACTIONS(453),
    [sym_spacedContinuationOperator] = ACTIONS(499),
    [sym_multilineFieldOperator] = ACTIONS(453),
    [sym_key] = ACTIONS(458),
    [sym_commentOperator] = ACTIONS(460),
    [sym_escapeOperator] = ACTIONS(453),
    [sym__sectionAscend] = ACTIONS(453),
  },
  [124] = {
    [sym_multilineFieldOperator] = ACTIONS(463),
    [sym_key] = ACTIONS(465),
    [sym_commentOperator] = ACTIONS(465),
    [sym__emptyLine] = ACTIONS(465),
    [sym__sectionDescend] = ACTIONS(463),
    [sym_escapeOperator] = ACTIONS(463),
    [sym__sectionAscend] = ACTIONS(463),
  },
  [125] = {
    [sym_multilineFieldOperator] = ACTIONS(467),
    [sym_key] = ACTIONS(469),
    [sym_commentOperator] = ACTIONS(469),
    [sym__emptyLine] = ACTIONS(469),
    [sym__sectionDescend] = ACTIONS(467),
    [sym_escapeOperator] = ACTIONS(467),
    [sym__sectionAscend] = ACTIONS(467),
  },
  [126] = {
    [sym_comment] = STATE(177),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(177),
    [sym_continuation] = STATE(133),
    [aux_sym_entry_repeat2] = STATE(133),
    [sym_directContinuationOperator] = ACTIONS(499),
    [sym__emptyLine] = ACTIONS(589),
    [sym__sectionDescend] = ACTIONS(471),
    [sym_spacedContinuationOperator] = ACTIONS(499),
    [sym_multilineFieldOperator] = ACTIONS(471),
    [sym_key] = ACTIONS(476),
    [sym_commentOperator] = ACTIONS(478),
    [sym_escapeOperator] = ACTIONS(471),
    [sym__sectionAscend] = ACTIONS(471),
  },
  [127] = {
    [aux_sym_comment_repeat1] = STATE(129),
    [sym_multilineFieldOperator] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(29),
    [sym__sectionDescend] = ACTIONS(27),
    [sym_escapeOperator] = ACTIONS(27),
    [sym__sectionAscend] = ACTIONS(27),
  },
  [128] = {
    [sym_multilineFieldOperator] = ACTIONS(45),
    [sym_key] = ACTIONS(47),
    [sym_commentOperator] = ACTIONS(47),
    [sym__emptyLine] = ACTIONS(47),
    [sym__sectionDescend] = ACTIONS(45),
    [sym_escapeOperator] = ACTIONS(45),
    [sym__sectionAscend] = ACTIONS(45),
  },
  [129] = {
    [aux_sym_comment_repeat1] = STATE(129),
    [sym_multilineFieldOperator] = ACTIONS(45),
    [sym_key] = ACTIONS(47),
    [sym_commentOperator] = ACTIONS(592),
    [sym__emptyLine] = ACTIONS(47),
    [sym__sectionDescend] = ACTIONS(45),
    [sym_escapeOperator] = ACTIONS(45),
    [sym__sectionAscend] = ACTIONS(45),
  },
  [130] = {
    [sym_multilineFieldOperator] = ACTIONS(94),
    [sym_key] = ACTIONS(96),
    [sym_commentOperator] = ACTIONS(96),
    [sym__emptyLine] = ACTIONS(96),
    [sym__sectionDescend] = ACTIONS(94),
    [sym_escapeOperator] = ACTIONS(94),
    [sym__sectionAscend] = ACTIONS(94),
  },
  [131] = {
    [sym_comment] = STATE(131),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(131),
    [sym_directContinuationOperator] = ACTIONS(307),
    [sym_commentOperator] = ACTIONS(595),
    [sym__emptyLine] = ACTIONS(598),
    [sym_spacedContinuationOperator] = ACTIONS(307),
    [sym_itemOperator] = ACTIONS(307),
  },
  [132] = {
    [sym_directContinuationOperator] = ACTIONS(313),
    [sym__emptyLine] = ACTIONS(313),
    [sym_spacedContinuationOperator] = ACTIONS(313),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_multilineFieldOperator] = ACTIONS(315),
    [sym_key] = ACTIONS(313),
    [sym_commentOperator] = ACTIONS(313),
    [sym_escapeOperator] = ACTIONS(315),
    [sym__sectionAscend] = ACTIONS(315),
  },
  [133] = {
    [sym_comment] = STATE(177),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(177),
    [sym_continuation] = STATE(133),
    [aux_sym_entry_repeat2] = STATE(133),
    [sym_directContinuationOperator] = ACTIONS(601),
    [sym__emptyLine] = ACTIONS(604),
    [sym_spacedContinuationOperator] = ACTIONS(601),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_multilineFieldOperator] = ACTIONS(315),
    [sym_key] = ACTIONS(313),
    [sym_commentOperator] = ACTIONS(333),
    [sym_escapeOperator] = ACTIONS(315),
    [sym__sectionAscend] = ACTIONS(315),
  },
  [134] = {
    [sym_directContinuationOperator] = ACTIONS(385),
    [sym__emptyLine] = ACTIONS(385),
    [sym_spacedContinuationOperator] = ACTIONS(385),
    [sym__sectionDescend] = ACTIONS(387),
    [sym_multilineFieldOperator] = ACTIONS(387),
    [sym_key] = ACTIONS(385),
    [sym_commentOperator] = ACTIONS(385),
    [sym_escapeOperator] = ACTIONS(387),
    [sym__sectionAscend] = ACTIONS(387),
  },
  [135] = {
    [aux_sym_comment_repeat1] = STATE(137),
    [sym_key] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(251),
    [sym__emptyLine] = ACTIONS(29),
    [sym_itemOperator] = ACTIONS(29),
    [sym_escapeOperator] = ACTIONS(27),
  },
  [136] = {
    [sym_key] = ACTIONS(47),
    [sym_commentOperator] = ACTIONS(47),
    [sym__emptyLine] = ACTIONS(47),
    [sym_itemOperator] = ACTIONS(47),
    [sym_escapeOperator] = ACTIONS(45),
  },
  [137] = {
    [aux_sym_comment_repeat1] = STATE(137),
    [sym_key] = ACTIONS(47),
    [sym_commentOperator] = ACTIONS(607),
    [sym__emptyLine] = ACTIONS(47),
    [sym_itemOperator] = ACTIONS(47),
    [sym_escapeOperator] = ACTIONS(45),
  },
  [138] = {
    [sym_key] = ACTIONS(96),
    [sym_commentOperator] = ACTIONS(96),
    [sym__emptyLine] = ACTIONS(96),
    [sym_itemOperator] = ACTIONS(96),
    [sym_escapeOperator] = ACTIONS(94),
  },
  [139] = {
    [sym_comment] = STATE(139),
    [aux_sym_comment_repeat1] = STATE(147),
    [aux_sym_entry_repeat1] = STATE(139),
    [sym_key] = ACTIONS(299),
    [sym_commentOperator] = ACTIONS(610),
    [sym__emptyLine] = ACTIONS(613),
    [sym_escapeOperator] = ACTIONS(307),
  },
  [140] = {
    [sym_directContinuationOperator] = ACTIONS(313),
    [sym__emptyLine] = ACTIONS(313),
    [sym_spacedContinuationOperator] = ACTIONS(313),
    [sym_itemOperator] = ACTIONS(313),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_multilineFieldOperator] = ACTIONS(315),
    [sym_key] = ACTIONS(313),
    [sym_commentOperator] = ACTIONS(313),
    [sym_escapeOperator] = ACTIONS(315),
    [sym__sectionAscend] = ACTIONS(315),
  },
  [141] = {
    [sym_comment] = STATE(181),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(181),
    [sym_continuation] = STATE(141),
    [aux_sym_entry_repeat2] = STATE(141),
    [sym_directContinuationOperator] = ACTIONS(616),
    [sym__emptyLine] = ACTIONS(619),
    [sym_spacedContinuationOperator] = ACTIONS(616),
    [sym_itemOperator] = ACTIONS(313),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_multilineFieldOperator] = ACTIONS(315),
    [sym_key] = ACTIONS(313),
    [sym_commentOperator] = ACTIONS(333),
    [sym_escapeOperator] = ACTIONS(315),
    [sym__sectionAscend] = ACTIONS(315),
  },
  [142] = {
    [sym_directContinuationOperator] = ACTIONS(385),
    [sym__emptyLine] = ACTIONS(385),
    [sym_spacedContinuationOperator] = ACTIONS(385),
    [sym_itemOperator] = ACTIONS(385),
    [sym__sectionDescend] = ACTIONS(387),
    [sym_multilineFieldOperator] = ACTIONS(387),
    [sym_key] = ACTIONS(385),
    [sym_commentOperator] = ACTIONS(385),
    [sym_escapeOperator] = ACTIONS(387),
    [sym__sectionAscend] = ACTIONS(387),
  },
  [143] = {
    [aux_sym_comment_repeat1] = STATE(145),
    [sym_directContinuationOperator] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(323),
    [sym__emptyLine] = ACTIONS(27),
    [sym_spacedContinuationOperator] = ACTIONS(27),
    [sym_itemOperator] = ACTIONS(27),
  },
  [144] = {
    [sym_directContinuationOperator] = ACTIONS(45),
    [sym_commentOperator] = ACTIONS(45),
    [sym__emptyLine] = ACTIONS(45),
    [sym_spacedContinuationOperator] = ACTIONS(45),
    [sym_itemOperator] = ACTIONS(45),
  },
  [145] = {
    [aux_sym_comment_repeat1] = STATE(145),
    [sym_directContinuationOperator] = ACTIONS(45),
    [sym_commentOperator] = ACTIONS(622),
    [sym__emptyLine] = ACTIONS(45),
    [sym_spacedContinuationOperator] = ACTIONS(45),
    [sym_itemOperator] = ACTIONS(45),
  },
  [146] = {
    [sym_directContinuationOperator] = ACTIONS(94),
    [sym_commentOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(94),
    [sym_spacedContinuationOperator] = ACTIONS(94),
    [sym_itemOperator] = ACTIONS(94),
  },
  [147] = {
    [aux_sym_comment_repeat1] = STATE(149),
    [sym_key] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(336),
    [sym__emptyLine] = ACTIONS(29),
    [sym_escapeOperator] = ACTIONS(27),
  },
  [148] = {
    [sym_key] = ACTIONS(47),
    [sym_commentOperator] = ACTIONS(47),
    [sym__emptyLine] = ACTIONS(47),
    [sym_escapeOperator] = ACTIONS(45),
  },
  [149] = {
    [aux_sym_comment_repeat1] = STATE(149),
    [sym_key] = ACTIONS(47),
    [sym_commentOperator] = ACTIONS(625),
    [sym__emptyLine] = ACTIONS(47),
    [sym_escapeOperator] = ACTIONS(45),
  },
  [150] = {
    [sym_key] = ACTIONS(96),
    [sym_commentOperator] = ACTIONS(96),
    [sym__emptyLine] = ACTIONS(96),
    [sym_escapeOperator] = ACTIONS(94),
  },
  [151] = {
    [sym__endOfLine] = ACTIONS(628),
    [sym_token] = ACTIONS(630),
  },
  [152] = {
    [sym__endOfLine] = ACTIONS(632),
    [sym_elementOperator] = ACTIONS(634),
    [sym_copyOperator] = ACTIONS(636),
  },
  [153] = {
    [sym__endOfLine] = ACTIONS(638),
  },
  [154] = {
    [sym_escapeOperator] = ACTIONS(640),
  },
  [155] = {
    [sym__endOfLine] = ACTIONS(642),
    [sym_token] = ACTIONS(644),
  },
  [156] = {
    [sym__endOfLine] = ACTIONS(646),
  },
  [157] = {
    [sym__endOfLine] = ACTIONS(648),
  },
  [158] = {
    [sym_list] = STATE(161),
    [aux_sym_comment_repeat1] = STATE(127),
    [sym__escapedOrUnescapedKey] = STATE(152),
    [sym_empty] = STATE(161),
    [sym_multilineField] = STATE(161),
    [sym_comment] = STATE(161),
    [sym_field] = STATE(161),
    [sym_fieldset] = STATE(161),
    [sym_section] = STATE(161),
    [aux_sym_document_repeat1] = STATE(161),
    [sym_element] = STATE(161),
    [sym_multilineFieldOperator] = ACTIONS(140),
    [sym_key] = ACTIONS(142),
    [sym_commentOperator] = ACTIONS(144),
    [sym__sectionDescend] = ACTIONS(146),
    [sym__emptyLine] = ACTIONS(650),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(652),
  },
  [159] = {
    [sym__endOfLine] = ACTIONS(654),
    [sym_token] = ACTIONS(656),
  },
  [160] = {
    [sym_comment] = STATE(59),
    [aux_sym_comment_repeat1] = STATE(89),
    [sym__escapedOrUnescapedKey] = STATE(190),
    [aux_sym_entry_repeat1] = STATE(59),
    [sym_entry] = STATE(107),
    [sym_continuation] = STATE(132),
    [sym_item] = STATE(109),
    [sym_directContinuationOperator] = ACTIONS(499),
    [sym_key] = ACTIONS(658),
    [sym_commentOperator] = ACTIONS(178),
    [sym__emptyLine] = ACTIONS(180),
    [sym_spacedContinuationOperator] = ACTIONS(499),
    [sym_escapeOperator] = ACTIONS(182),
    [sym_itemOperator] = ACTIONS(504),
  },
  [161] = {
    [sym_list] = STATE(93),
    [aux_sym_comment_repeat1] = STATE(127),
    [sym__escapedOrUnescapedKey] = STATE(152),
    [sym_empty] = STATE(93),
    [sym_multilineField] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_field] = STATE(93),
    [sym_fieldset] = STATE(93),
    [sym_section] = STATE(93),
    [aux_sym_document_repeat1] = STATE(93),
    [sym_element] = STATE(93),
    [sym_multilineFieldOperator] = ACTIONS(140),
    [sym_key] = ACTIONS(142),
    [sym_commentOperator] = ACTIONS(144),
    [sym__sectionDescend] = ACTIONS(146),
    [sym__emptyLine] = ACTIONS(245),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(660),
  },
  [162] = {
    [sym_comment] = STATE(106),
    [aux_sym_comment_repeat1] = STATE(135),
    [sym__escapedOrUnescapedKey] = STATE(190),
    [aux_sym_entry_repeat1] = STATE(106),
    [sym_entry] = STATE(107),
    [sym_item] = STATE(109),
    [sym_key] = ACTIONS(658),
    [sym_commentOperator] = ACTIONS(251),
    [sym__emptyLine] = ACTIONS(253),
    [sym_escapeOperator] = ACTIONS(182),
    [sym_itemOperator] = ACTIONS(504),
  },
  [163] = {
    [sym__endOfLine] = ACTIONS(662),
  },
  [164] = {
    [sym__endOfLine] = ACTIONS(664),
  },
  [165] = {
    [sym__endOfLine] = ACTIONS(666),
    [sym_token] = ACTIONS(668),
  },
  [166] = {
    [sym_comment] = STATE(131),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(131),
    [sym_continuation] = STATE(108),
    [sym_directContinuationOperator] = ACTIONS(670),
    [sym_commentOperator] = ACTIONS(323),
    [sym__emptyLine] = ACTIONS(325),
    [sym_spacedContinuationOperator] = ACTIONS(670),
  },
  [167] = {
    [sym_comment] = STATE(139),
    [aux_sym_comment_repeat1] = STATE(147),
    [sym__escapedOrUnescapedKey] = STATE(190),
    [aux_sym_entry_repeat1] = STATE(139),
    [sym_entry] = STATE(107),
    [sym_key] = ACTIONS(658),
    [sym_commentOperator] = ACTIONS(336),
    [sym__emptyLine] = ACTIONS(338),
    [sym_escapeOperator] = ACTIONS(182),
  },
  [168] = {
    [sym_comment] = STATE(131),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(131),
    [sym_item] = STATE(109),
    [sym__emptyLine] = ACTIONS(325),
    [sym_itemOperator] = ACTIONS(672),
    [sym_commentOperator] = ACTIONS(323),
  },
  [169] = {
    [sym__endOfLine] = ACTIONS(674),
  },
  [170] = {
    [sym_list] = STATE(173),
    [aux_sym_comment_repeat1] = STATE(127),
    [sym__escapedOrUnescapedKey] = STATE(152),
    [sym_empty] = STATE(173),
    [sym_multilineField] = STATE(173),
    [sym_comment] = STATE(173),
    [sym_field] = STATE(173),
    [sym_fieldset] = STATE(173),
    [sym_section] = STATE(173),
    [aux_sym_document_repeat1] = STATE(173),
    [sym_element] = STATE(173),
    [sym_multilineFieldOperator] = ACTIONS(140),
    [sym_key] = ACTIONS(142),
    [sym_commentOperator] = ACTIONS(144),
    [sym__sectionDescend] = ACTIONS(146),
    [sym__emptyLine] = ACTIONS(676),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(678),
  },
  [171] = {
    [sym__endOfLine] = ACTIONS(680),
  },
  [172] = {
    [sym__endOfLine] = ACTIONS(682),
  },
  [173] = {
    [sym_list] = STATE(93),
    [aux_sym_comment_repeat1] = STATE(127),
    [sym__escapedOrUnescapedKey] = STATE(152),
    [sym_empty] = STATE(93),
    [sym_multilineField] = STATE(93),
    [sym_comment] = STATE(93),
    [sym_field] = STATE(93),
    [sym_fieldset] = STATE(93),
    [sym_section] = STATE(93),
    [aux_sym_document_repeat1] = STATE(93),
    [sym_element] = STATE(93),
    [sym_multilineFieldOperator] = ACTIONS(140),
    [sym_key] = ACTIONS(142),
    [sym_commentOperator] = ACTIONS(144),
    [sym__sectionDescend] = ACTIONS(146),
    [sym__emptyLine] = ACTIONS(245),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(684),
  },
  [174] = {
    [sym__endOfLine] = ACTIONS(686),
    [sym_token] = ACTIONS(688),
  },
  [175] = {
    [sym__endOfLine] = ACTIONS(690),
  },
  [176] = {
    [sym__endOfLine] = ACTIONS(692),
  },
  [177] = {
    [sym_comment] = STATE(131),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(131),
    [sym_continuation] = STATE(132),
    [sym_directContinuationOperator] = ACTIONS(694),
    [sym_commentOperator] = ACTIONS(323),
    [sym__emptyLine] = ACTIONS(325),
    [sym_spacedContinuationOperator] = ACTIONS(694),
  },
  [178] = {
    [sym__endOfLine] = ACTIONS(696),
    [sym_token] = ACTIONS(698),
  },
  [179] = {
    [sym__endOfLine] = ACTIONS(700),
  },
  [180] = {
    [sym__endOfLine] = ACTIONS(702),
  },
  [181] = {
    [sym_comment] = STATE(131),
    [aux_sym_comment_repeat1] = STATE(143),
    [aux_sym_entry_repeat1] = STATE(131),
    [sym_continuation] = STATE(140),
    [sym_directContinuationOperator] = ACTIONS(704),
    [sym_commentOperator] = ACTIONS(323),
    [sym__emptyLine] = ACTIONS(325),
    [sym_spacedContinuationOperator] = ACTIONS(704),
  },
  [182] = {
    [sym__endOfLine] = ACTIONS(706),
    [sym_token] = ACTIONS(708),
  },
  [183] = {
    [sym__endOfLine] = ACTIONS(710),
  },
  [184] = {
    [sym__endOfLine] = ACTIONS(712),
    [sym_token] = ACTIONS(714),
  },
  [185] = {
    [sym__endOfLine] = ACTIONS(716),
  },
  [186] = {
    [sym_escapedKey] = ACTIONS(718),
  },
  [187] = {
    [sym_token] = ACTIONS(720),
  },
  [188] = {
    [sym__endOfLine] = ACTIONS(722),
    [sym_deepCopyOperator] = ACTIONS(724),
    [sym_copyOperator] = ACTIONS(726),
  },
  [189] = {
    [sym_token] = ACTIONS(728),
  },
  [190] = {
    [sym_entryOperator] = ACTIONS(730),
  },
  [191] = {
    [sym_multilineFieldKey] = ACTIONS(732),
  },
  [192] = {
    [sym__endOfLine] = ACTIONS(734),
  },
  [193] = {
    [sym_multilineFieldKey] = ACTIONS(736),
  },
  [194] = {
    [sym_token] = ACTIONS(738),
  },
  [195] = {
    [sym_token] = ACTIONS(740),
  },
  [196] = {
    [sym__escapedOrUnescapedSectionKey] = STATE(188),
    [sym_sectionKey] = ACTIONS(742),
    [sym_escapeOperator] = ACTIONS(53),
  },
  [197] = {
    [sym_multilineFieldOperator] = ACTIONS(744),
  },
  [198] = {
    [sym_token] = ACTIONS(746),
  },
  [199] = {
    [sym_multilineFieldOperator] = ACTIONS(748),
  },
  [200] = {
    [sym_sectionOperator] = ACTIONS(750),
  },
  [201] = {
    [aux_sym_multilineFieldValue_repeat1] = STATE(30),
    [sym_multilineFieldValue] = STATE(202),
    [sym__multilineFieldEnd] = ACTIONS(752),
    [sym__multilineFieldLine] = ACTIONS(92),
  },
  [202] = {
    [sym__multilineFieldEnd] = ACTIONS(754),
  },
  [203] = {
    [sym__endOfLine] = ACTIONS(756),
  },
  [204] = {
    [sym_multilineFieldKey] = ACTIONS(758),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = false}, SHIFT(7),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(17),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [41] = {.count = 1, .reusable = false}, SHIFT(19),
  [43] = {.count = 1, .reusable = true}, SHIFT(20),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [47] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, SHIFT(22),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.count = 1, .reusable = true}, SHIFT(25),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_empty, 2),
  [64] = {.count = 1, .reusable = false}, REDUCE(sym_empty, 2),
  [66] = {.count = 1, .reusable = true}, SHIFT(26),
  [68] = {.count = 1, .reusable = true}, SHIFT(27),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [73] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [76] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [81] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [90] = {.count = 1, .reusable = true}, SHIFT(28),
  [92] = {.count = 1, .reusable = true}, SHIFT(29),
  [94] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [96] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [98] = {.count = 1, .reusable = true}, SHIFT(32),
  [100] = {.count = 1, .reusable = true}, SHIFT(33),
  [102] = {.count = 1, .reusable = true}, SHIFT(34),
  [104] = {.count = 1, .reusable = false}, SHIFT(34),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym__escapedOrUnescapedKey, 3),
  [108] = {.count = 1, .reusable = true}, SHIFT(35),
  [110] = {.count = 1, .reusable = false}, SHIFT(36),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [114] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(39),
  [117] = {.count = 1, .reusable = false}, SHIFT(37),
  [119] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(38),
  [122] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(151),
  [125] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(186),
  [128] = {.count = 1, .reusable = true}, SHIFT(43),
  [130] = {.count = 1, .reusable = true}, SHIFT(44),
  [132] = {.count = 1, .reusable = true}, SHIFT(45),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_multilineFieldValue, 1),
  [136] = {.count = 1, .reusable = true}, SHIFT(47),
  [138] = {.count = 1, .reusable = true}, SHIFT(48),
  [140] = {.count = 1, .reusable = true}, SHIFT(204),
  [142] = {.count = 1, .reusable = false}, SHIFT(152),
  [144] = {.count = 1, .reusable = false}, SHIFT(174),
  [146] = {.count = 1, .reusable = true}, SHIFT(200),
  [148] = {.count = 1, .reusable = false}, SHIFT(50),
  [150] = {.count = 1, .reusable = true}, SHIFT(49),
  [152] = {.count = 1, .reusable = true}, SHIFT(51),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_element, 4, .production_id = 2),
  [156] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(52),
  [159] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(38),
  [162] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(178),
  [165] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(186),
  [168] = {.count = 1, .reusable = true}, SHIFT(55),
  [170] = {.count = 1, .reusable = true}, SHIFT(56),
  [172] = {.count = 1, .reusable = true}, SHIFT(57),
  [174] = {.count = 1, .reusable = true}, SHIFT(58),
  [176] = {.count = 1, .reusable = false}, SHIFT(38),
  [178] = {.count = 1, .reusable = false}, SHIFT(151),
  [180] = {.count = 1, .reusable = false}, SHIFT(59),
  [182] = {.count = 1, .reusable = true}, SHIFT(186),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [186] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(63),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4),
  [191] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(182),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 4),
  [196] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(38),
  [199] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(184),
  [202] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(65),
  [205] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(186),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [210] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(67),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_list, 4),
  [215] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(182),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 3),
  [220] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3), SHIFT(63),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3),
  [225] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3), SHIFT(182),
  [228] = {.count = 1, .reusable = true}, SHIFT(70),
  [230] = {.count = 1, .reusable = true}, REDUCE(aux_sym_multilineFieldValue_repeat1, 2),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_multilineFieldValue_repeat1, 2), SHIFT_REPEAT(29),
  [235] = {.count = 1, .reusable = true}, SHIFT(71),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym__escapedOrUnescapedSectionKey, 3),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym__escapedOrUnescapedSectionKey, 3),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [245] = {.count = 1, .reusable = false}, SHIFT(93),
  [247] = {.count = 1, .reusable = true}, SHIFT(72),
  [249] = {.count = 1, .reusable = true}, SHIFT(73),
  [251] = {.count = 1, .reusable = false}, SHIFT(178),
  [253] = {.count = 1, .reusable = false}, SHIFT(106),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 2),
  [257] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(38),
  [260] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(184),
  [263] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(65),
  [266] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(186),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5, .production_id = 2),
  [271] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2), SHIFT(67),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2),
  [276] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2), SHIFT(182),
  [279] = {.count = 1, .reusable = true}, SHIFT(74),
  [281] = {.count = 1, .reusable = false}, SHIFT(189),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_item, 2),
  [285] = {.count = 2, .reusable = false}, REDUCE(sym_item, 2), SHIFT(166),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_item, 2),
  [290] = {.count = 2, .reusable = false}, REDUCE(sym_item, 2), SHIFT(182),
  [293] = {.count = 1, .reusable = true}, SHIFT(76),
  [295] = {.count = 1, .reusable = true}, SHIFT(77),
  [297] = {.count = 1, .reusable = true}, SHIFT(78),
  [299] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2),
  [301] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(151),
  [304] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(59),
  [307] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [309] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [311] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat2, 2),
  [317] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [319] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2),
  [321] = {.count = 1, .reusable = true}, SHIFT(36),
  [323] = {.count = 1, .reusable = true}, SHIFT(182),
  [325] = {.count = 1, .reusable = true}, SHIFT(131),
  [327] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(36),
  [330] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(63),
  [333] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(182),
  [336] = {.count = 1, .reusable = false}, SHIFT(184),
  [338] = {.count = 1, .reusable = false}, SHIFT(139),
  [340] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(38),
  [343] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(184),
  [346] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(65),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(186),
  [352] = {.count = 1, .reusable = true}, SHIFT(37),
  [354] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(67),
  [357] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(37),
  [360] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(182),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5, .production_id = 3),
  [365] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3), SHIFT(63),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3),
  [370] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3), SHIFT(182),
  [373] = {.count = 1, .reusable = true}, SHIFT(79),
  [375] = {.count = 1, .reusable = true}, SHIFT(80),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [381] = {.count = 1, .reusable = false}, SHIFT(82),
  [383] = {.count = 1, .reusable = true}, SHIFT(81),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_continuation, 3, .production_id = 4),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_continuation, 3, .production_id = 4),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3),
  [391] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3), SHIFT(166),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3),
  [396] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3), SHIFT(182),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 4),
  [401] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(166),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4),
  [406] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(182),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 3),
  [411] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 3), SHIFT(63),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 3),
  [416] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 3), SHIFT(182),
  [419] = {.count = 1, .reusable = true}, SHIFT(85),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_multilineField, 7),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_multilineField, 7),
  [425] = {.count = 1, .reusable = true}, SHIFT(86),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 5),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 5),
  [431] = {.count = 1, .reusable = true}, SHIFT(87),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4, .production_id = 4),
  [435] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(166),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4),
  [440] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(182),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4),
  [445] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4), SHIFT(63),
  [448] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 4),
  [450] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4), SHIFT(182),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4, .production_id = 3),
  [455] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3), SHIFT(63),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3),
  [460] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3), SHIFT(182),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_multilineField, 8),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_multilineField, 8),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 5),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 5),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5, .production_id = 3),
  [473] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3), SHIFT(63),
  [476] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3),
  [478] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3), SHIFT(182),
  [481] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(151),
  [484] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(204),
  [487] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(152),
  [490] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(174),
  [493] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [496] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(200),
  [499] = {.count = 1, .reusable = false}, SHIFT(194),
  [501] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(160),
  [504] = {.count = 1, .reusable = false}, SHIFT(159),
  [506] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(190),
  [509] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(162),
  [512] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(190),
  [515] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(177),
  [518] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(190),
  [521] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(167),
  [524] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(168),
  [527] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3), SHIFT(177),
  [530] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(190),
  [533] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(167),
  [536] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2), SHIFT(168),
  [539] = {.count = 1, .reusable = false}, SHIFT(195),
  [541] = {.count = 2, .reusable = false}, REDUCE(sym_item, 2), SHIFT(181),
  [544] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(178),
  [547] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(106),
  [550] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(189),
  [553] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(166),
  [556] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(190),
  [559] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(167),
  [562] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(168),
  [565] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(159),
  [568] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3), SHIFT(177),
  [571] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3), SHIFT(181),
  [574] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(181),
  [577] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 3), SHIFT(177),
  [580] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(181),
  [583] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4), SHIFT(177),
  [586] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3), SHIFT(177),
  [589] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3), SHIFT(177),
  [592] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(174),
  [595] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(182),
  [598] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(131),
  [601] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(194),
  [604] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(177),
  [607] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(178),
  [610] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(184),
  [613] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(139),
  [616] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(195),
  [619] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(181),
  [622] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(182),
  [625] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(184),
  [628] = {.count = 1, .reusable = true}, SHIFT(90),
  [630] = {.count = 1, .reusable = true}, SHIFT(153),
  [632] = {.count = 1, .reusable = true}, SHIFT(92),
  [634] = {.count = 1, .reusable = true}, SHIFT(155),
  [636] = {.count = 1, .reusable = true}, SHIFT(187),
  [638] = {.count = 1, .reusable = true}, SHIFT(94),
  [640] = {.count = 1, .reusable = true}, SHIFT(95),
  [642] = {.count = 1, .reusable = true}, SHIFT(96),
  [644] = {.count = 1, .reusable = true}, SHIFT(157),
  [646] = {.count = 1, .reusable = true}, SHIFT(97),
  [648] = {.count = 1, .reusable = true}, SHIFT(101),
  [650] = {.count = 1, .reusable = false}, SHIFT(161),
  [652] = {.count = 1, .reusable = true}, SHIFT(102),
  [654] = {.count = 1, .reusable = true}, SHIFT(105),
  [656] = {.count = 1, .reusable = true}, SHIFT(164),
  [658] = {.count = 1, .reusable = false}, SHIFT(190),
  [660] = {.count = 1, .reusable = true}, SHIFT(114),
  [662] = {.count = 1, .reusable = true}, SHIFT(115),
  [664] = {.count = 1, .reusable = true}, SHIFT(117),
  [666] = {.count = 1, .reusable = true}, SHIFT(118),
  [668] = {.count = 1, .reusable = true}, SHIFT(171),
  [670] = {.count = 1, .reusable = true}, SHIFT(189),
  [672] = {.count = 1, .reusable = true}, SHIFT(159),
  [674] = {.count = 1, .reusable = true}, SHIFT(119),
  [676] = {.count = 1, .reusable = false}, SHIFT(173),
  [678] = {.count = 1, .reusable = true}, SHIFT(120),
  [680] = {.count = 1, .reusable = true}, SHIFT(123),
  [682] = {.count = 1, .reusable = true}, SHIFT(124),
  [684] = {.count = 1, .reusable = true}, SHIFT(125),
  [686] = {.count = 1, .reusable = true}, SHIFT(128),
  [688] = {.count = 1, .reusable = true}, SHIFT(175),
  [690] = {.count = 1, .reusable = true}, SHIFT(130),
  [692] = {.count = 1, .reusable = true}, SHIFT(134),
  [694] = {.count = 1, .reusable = true}, SHIFT(194),
  [696] = {.count = 1, .reusable = true}, SHIFT(136),
  [698] = {.count = 1, .reusable = true}, SHIFT(179),
  [700] = {.count = 1, .reusable = true}, SHIFT(138),
  [702] = {.count = 1, .reusable = true}, SHIFT(142),
  [704] = {.count = 1, .reusable = true}, SHIFT(195),
  [706] = {.count = 1, .reusable = true}, SHIFT(144),
  [708] = {.count = 1, .reusable = true}, SHIFT(183),
  [710] = {.count = 1, .reusable = true}, SHIFT(146),
  [712] = {.count = 1, .reusable = true}, SHIFT(148),
  [714] = {.count = 1, .reusable = true}, SHIFT(185),
  [716] = {.count = 1, .reusable = true}, SHIFT(150),
  [718] = {.count = 1, .reusable = true}, SHIFT(154),
  [720] = {.count = 1, .reusable = true}, SHIFT(156),
  [722] = {.count = 1, .reusable = true}, SHIFT(158),
  [724] = {.count = 1, .reusable = true}, SHIFT(198),
  [726] = {.count = 1, .reusable = false}, SHIFT(198),
  [728] = {.count = 1, .reusable = true}, SHIFT(163),
  [730] = {.count = 1, .reusable = true}, SHIFT(165),
  [732] = {.count = 1, .reusable = true}, SHIFT(169),
  [734] = {.count = 1, .reusable = true}, SHIFT(170),
  [736] = {.count = 1, .reusable = true}, SHIFT(172),
  [738] = {.count = 1, .reusable = true}, SHIFT(176),
  [740] = {.count = 1, .reusable = true}, SHIFT(180),
  [742] = {.count = 1, .reusable = true}, SHIFT(188),
  [744] = {.count = 1, .reusable = true}, SHIFT(191),
  [746] = {.count = 1, .reusable = true}, SHIFT(192),
  [748] = {.count = 1, .reusable = true}, SHIFT(193),
  [750] = {.count = 1, .reusable = true}, SHIFT(196),
  [752] = {.count = 1, .reusable = true}, SHIFT(197),
  [754] = {.count = 1, .reusable = true}, SHIFT(199),
  [756] = {.count = 1, .reusable = true}, SHIFT(201),
  [758] = {.count = 1, .reusable = true}, SHIFT(203),
};

void *tree_sitter_eno_external_scanner_create(void);
void tree_sitter_eno_external_scanner_destroy(void *);
bool tree_sitter_eno_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_eno_external_scanner_serialize(void *, char *);
void tree_sitter_eno_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eno(void) {
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_eno_external_scanner_create,
      tree_sitter_eno_external_scanner_destroy,
      tree_sitter_eno_external_scanner_scan,
      tree_sitter_eno_external_scanner_serialize,
      tree_sitter_eno_external_scanner_deserialize,
    },
  };
  return &language;
}
