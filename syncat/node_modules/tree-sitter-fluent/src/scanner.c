#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  TERMINATOR,
  LEADING_DOT,
};

void *tree_sitter_fluent_external_scanner_create() { return NULL; }
void tree_sitter_fluent_external_scanner_destroy(void *p) {}
void tree_sitter_fluent_external_scanner_reset(void *p) {}
unsigned tree_sitter_fluent_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_fluent_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_fluent_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    lexer->advance(lexer, true);
  }

  if (lexer->lookahead == 0) {
    lexer->result_symbol = TERMINATOR;
    return true;
  }

  if (lexer->lookahead == '\n') {
    lexer->advance(lexer, true);
    if (lexer->lookahead != ' ' && lexer->lookahead != '\t') {
      lexer->result_symbol = TERMINATOR;
      return true;
    }

    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      lexer->advance(lexer, true);
    }

    if (valid_symbols[LEADING_DOT] && lexer->lookahead == '.') {
      lexer->advance(lexer, false);
      lexer->result_symbol = LEADING_DOT;
      return true;
    }
  }

  return false;
}
