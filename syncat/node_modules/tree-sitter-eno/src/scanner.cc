#include <string>
#include <tree_sitter/parser.h>

// Serialization buffer indices
#define ESCAPE_TICKS_INDEX 0
#define MULTILINE_DASHES_INDEX 1
#define SECTION_DEPTH_INDEX 2

namespace {

using std::string;

// DON'T REORDER (must match the one in grammar.js)
enum TokenType {
  _END_OF_LINE,
  _MULTILINE_FIELD_END,
  _MULTILINE_FIELD_LINE,
  _SECTION_ASCEND,
  _SECTION_DESCEND,
  ESCAPED_KEY,
  ESCAPE_OPERATOR,
  MULTILINE_FIELD_KEY,
  MULTILINE_FIELD_OPERATOR
};

struct Scanner {
  Scanner() {
    escape_ticks = 0;
    multiline_dashes = 0;
    section_depth = 0;
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  unsigned serialize(char *buffer) {
    if (section_depth == 0 && multiline_dashes == 0 && escape_ticks == 0) {
      return 0;
    }

    buffer[ESCAPE_TICKS_INDEX] = escape_ticks;
    buffer[MULTILINE_DASHES_INDEX] = multiline_dashes;
    buffer[SECTION_DEPTH_INDEX] = section_depth;

    if (multiline_key.empty()) {
      return 3;
    }

    if (3 + multiline_key.size() >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;

    multiline_key.copy(&buffer[3], multiline_key.size());

    return 3 + multiline_key.size();
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length > 0) {
      escape_ticks = buffer[ESCAPE_TICKS_INDEX];
      multiline_dashes = buffer[MULTILINE_DASHES_INDEX];
      section_depth = buffer[SECTION_DEPTH_INDEX];

      if (length > 3) {
        multiline_key.assign(buffer + 3, buffer + length);
      }
    }
  }

  inline void consume_line(TSLexer *lexer) {
    while (lexer->lookahead != '\n' && lexer->lookahead != 0) {
      advance(lexer);
    }
  }

  inline void skip_horizontal_whitespace(TSLexer *lexer) {
    while (is_horizontal_whitespace(lexer)) {
      skip(lexer);
    }
  }

  inline bool is_horizontal_whitespace(TSLexer *lexer) {
    return lexer->lookahead == ' ' ||
           lexer->lookahead == '\t' ||
           lexer->lookahead == '\uFEFF' ||
           lexer->lookahead == '\u2060' ||
           lexer->lookahead == '\u200B';
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    // TODO: This is yet another hack to solve unexpected whitespace extra behavior
    //       (i.e. whitespace extra not consuming whitespace "at any point" in the
    //        grammar as expected from the tree-sitter documentation) - clarify.
    if (valid_symbols[ESCAPE_OPERATOR] && is_horizontal_whitespace(lexer)) {
      skip_horizontal_whitespace(lexer);
    }

    if (valid_symbols[_MULTILINE_FIELD_END]) {
      skip_horizontal_whitespace(lexer);

      lexer->mark_end(lexer);

      uint16_t new_multiline_dashes = 0;

      while (lexer->lookahead == '-') {
        advance(lexer);
        new_multiline_dashes++;
      }

      if (new_multiline_dashes != multiline_dashes) {
        consume_line(lexer);
        lexer->mark_end(lexer);
        lexer->result_symbol = _MULTILINE_FIELD_LINE;
        return true;
      }

      skip_horizontal_whitespace(lexer);

      for (char& iterated_character : multiline_key) {
        if (lexer->lookahead != iterated_character) {
          consume_line(lexer);
          lexer->mark_end(lexer);
          lexer->result_symbol = _MULTILINE_FIELD_LINE;
          return true;
        }

        advance(lexer);
      }

      skip_horizontal_whitespace(lexer);

      if (lexer->lookahead != '\n' && lexer->lookahead != 0) {
        return false;
      }

      lexer->result_symbol = _MULTILINE_FIELD_END;
      return true;
    } else if (valid_symbols[MULTILINE_FIELD_OPERATOR] && lexer->lookahead == '-') {
      if (multiline_dashes > 0) {
        do {
          advance(lexer);
        } while (lexer->lookahead == '-');

        lexer->result_symbol = MULTILINE_FIELD_OPERATOR;
        return true;
      }

      uint16_t new_multiline_dashes = 0;

      lexer->mark_end(lexer);

      do {
        advance(lexer);
        new_multiline_dashes++;
      } while (lexer->lookahead == '-');

      if(new_multiline_dashes >= 2) {
        multiline_dashes = new_multiline_dashes;
        lexer->mark_end(lexer);
        lexer->result_symbol = MULTILINE_FIELD_OPERATOR;
        return true;
      }

      return false;
    } else if (valid_symbols[MULTILINE_FIELD_KEY] && multiline_dashes > 0) {  // TODO: '&& multiline_dashes > 0' cuts off dozens of invalid attempts here, investigate why they happen at all
      bool key_just_read = multiline_key.empty();
      string undecided_chars;

      // Added because regular whitespace-as-extra detection
      // somehow didn't work here, possibly to be reinvestigated
      // at a later point (and refactored if applies).
      skip_horizontal_whitespace(lexer);

      lexer->mark_end(lexer);

      if (lexer->lookahead != '\n' && lexer->lookahead != 0) {
        do {
          if (is_horizontal_whitespace(lexer)) {
            undecided_chars += lexer->lookahead;
            advance(lexer);
          } else {
            if (!undecided_chars.empty()) {
              multiline_key += undecided_chars;
              undecided_chars.clear();
            }

            multiline_key += lexer->lookahead;
            advance(lexer);
            lexer->mark_end(lexer);
          }
        } while (lexer->lookahead != '\n' && lexer->lookahead != 0);

        if (!key_just_read) {
          multiline_dashes = 0;
          multiline_key.clear();
        }

        lexer->result_symbol = MULTILINE_FIELD_KEY;
        return true;
      }
    } else if ((valid_symbols[_SECTION_DESCEND] || valid_symbols[_SECTION_ASCEND]) &&
               lexer->lookahead == '#') {
      uint16_t new_section_depth = 0;

      lexer->mark_end(lexer);

      do {
        advance(lexer);
        new_section_depth++;
      } while (lexer->lookahead == '#');

      if (new_section_depth == section_depth + 1) {
        section_depth = new_section_depth;
        lexer->result_symbol = _SECTION_DESCEND;
        return true;
      } else if (new_section_depth <= section_depth) {
        section_depth--;
        lexer->result_symbol = _SECTION_ASCEND;
        return true;
      } else {
        return false;  // hierarchy layer skip (e.g. from '# foo' to '### foo')
      }
    } else if (valid_symbols[_SECTION_ASCEND] && lexer->lookahead == 0) {
      if (section_depth > 0) {
        section_depth--;
        lexer->result_symbol = _SECTION_ASCEND;
        return true;
      }
    } else if (valid_symbols[ESCAPE_OPERATOR] && lexer->lookahead == '`') {
      if(escape_ticks > 0) {
        do {
          advance(lexer);
          escape_ticks--;
        } while (lexer->lookahead == '`');

        if(escape_ticks != 0) {
          return false;  // likely never reached because ESCAPED_KEY would not succeed beforehand
        }
      } else {
        do {
          advance(lexer);
          escape_ticks++;
        } while (lexer->lookahead == '`');
      }

      lexer->result_symbol = ESCAPE_OPERATOR;
      return true;
    } else if (valid_symbols[ESCAPED_KEY] && lexer->lookahead != '\n') {
      uint16_t new_escape_ticks = 0;

      do {
        advance(lexer);

        if (lexer->lookahead == '`') {
          if(new_escape_ticks == 0) {
            lexer->mark_end(lexer);
          }

          new_escape_ticks++;
        } else if (lexer->lookahead == '\n' || lexer->lookahead == 0) {
          return false;
        } else {
          new_escape_ticks = 0;
        }
      } while (new_escape_ticks < escape_ticks);

      lexer->result_symbol = ESCAPED_KEY;
      return true;
    } else if (valid_symbols[_END_OF_LINE]) {
      skip_horizontal_whitespace(lexer);

      if (lexer->lookahead == '\n' || lexer->lookahead == 0) {
        if (lexer->lookahead == '\n') {
          skip(lexer);
        }

        lexer->result_symbol = _END_OF_LINE;
        return true;
      }
    }

    return false;
  }

  uint16_t escape_ticks;
  uint16_t multiline_dashes;
  uint16_t section_depth;
  string multiline_key;
};

}

extern "C" {

void *tree_sitter_eno_external_scanner_create() {
  return new Scanner();
}

void tree_sitter_eno_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

unsigned tree_sitter_eno_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_eno_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

bool tree_sitter_eno_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

}
