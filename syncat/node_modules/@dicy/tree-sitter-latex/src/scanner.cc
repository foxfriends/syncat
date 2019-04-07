#include <algorithm>
#include <iostream>

#include "scanner.hh"
#include "serialization.hh"

namespace LaTeX {

using std::any_of;
using std::string;
using std::u32string;

inline bool isHexDigit(char32_t ch) {
  return (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f');
}

void Scanner::reset() {
  start_delim = 0;
  cs_name.clear();
  e_name.clear();
  u_name.clear();
  catcode_table.reset();
}

unsigned Scanner::serialize(char *buffer) const {
  SerializationBuffer buf(buffer);

  buf << start_delim << cs_name << e_name << u_name << catcode_table;

  return buf.length;
}

void Scanner::deserialize(const char *buffer, unsigned length) {
  reset();

  if (length == 0) {
    return;
  }

  DeserializationBuffer buf(buffer, length);

  buf >> start_delim >> cs_name >> e_name >> u_name >> catcode_table;
}

bool Scanner::enter_raw_mode(TSLexer *lexer) {
  raw = true;
  advanced = false;
  return read_char(lexer);
}

bool Scanner::enter_translated_mode(TSLexer *lexer) {
  raw = false;
  advanced = false;
  return read_char(lexer);
}

bool Scanner::read_char(TSLexer *lexer) {
  if (raw) {
    if (advanced) {
      lexer->advance(lexer, false);
    } else {
      advanced = true;
    }

    lookahead = lexer->lookahead;

    if (!lexer->lookahead)
      return false;

    return true;
  }

  lookahead = lexer->lookahead;

  lexer->mark_end(lexer);

  if (!lexer->lookahead)
    return false;

  advanced = true;
  lexer->advance(lexer, false);

  if (catcode_table[lookahead] != SUPERSCRIPT_CATEGORY) {
    return true;
  }

  int count = 1;

  while (count < 6 && static_cast<char32_t>(lexer->lookahead) == lookahead) {
    lexer->advance(lexer, false);
    count++;
  }

  switch (count) {
  case 1:
    return true;
  case 3:
    lookahead = lookahead + ((lookahead < 64) ? 64 : -64);
    break;
  case 2:
  case 4:
  case 6:
    lookahead = 0;
    for (int digit = 0; digit < count; digit++) {
      char32_t current = lexer->lookahead;

      lexer->advance(lexer, false);

      if (isHexDigit(current) &&
          (digit != 0 || count != 2 || isHexDigit(lexer->lookahead))) {
        lookahead = (lookahead << 4) |
                    ((current <= '9') ? (current - '0') : (current - 'a' + 10));
      } else if (count == 2) {
        lookahead = current + ((current < 64) ? 64 : -64);
        break;
      } else {
        return false;
      }
    }
    break;
  default:
    return false;
  }

  return true;
}

bool Scanner::match_char(TSLexer *lexer, const CategoryFlags &flags,
                         const u32string &chars, bool exclude) {
  if (flags[catcode_table[lookahead]] &&
      exclude == (chars.find(lookahead) == u32string::npos)) {
    read_char(lexer);
    return true;
  }

  return false;
}

bool Scanner::match_chars(TSLexer *lexer, const CategoryFlags &flags,
                          const u32string &chars, bool exclude) {
  bool skipped = false;

  while (flags[catcode_table[lookahead]] &&
         exclude == (chars.find(lookahead) == u32string::npos)) {
    skipped = true;
    if (!read_char(lexer))
      break;
  }

  return skipped;
}

bool Scanner::match_string(TSLexer *lexer, const std::string &value) {
  for (char32_t ch : convert.from_bytes(value)) {
    if (lookahead != ch) {
      return false;
    }
    read_char(lexer);
  }

  return true;
}

string Scanner::read_string(TSLexer *lexer, Category catcode) {
  if (catcode_table[lookahead] == catcode) {
    return read_string(lexer, 1 << catcode);
  }

  string result(convert.to_bytes(lookahead));

  read_char(lexer);

  return result;
}

string Scanner::read_string(TSLexer *lexer, const CategoryFlags &flags,
                            const u32string &chars, bool exclude) {
  string result;

  while (flags[catcode_table[lookahead]] &&
         exclude == (chars.find(lookahead) == u32string::npos)) {
    result.append(convert.to_bytes(lookahead));
    if (!read_char(lexer))
      break;
  }

  return result;
}

bool Scanner::scan_verb_start_delim(TSLexer *lexer, const bool *valid_symbols,
                                    SymbolType sym) {
  // NOTE: ' ' (space) is a perfectly valid delim, as is %
  // Also: The first * (if present) is gobbled by the main grammar, but the
  // second is a valid delim
  if (lookahead == '*' && valid_symbols[star]) {
    return symbol(lexer, star, true);
  }

  if (lookahead) {
    start_delim = lookahead;
    return symbol(lexer, sym, true);
  }

  return false;
}

bool Scanner::scan_verb_end_delim(TSLexer *lexer) {
  if (enter_raw_mode(lexer)) {
    if (lookahead == start_delim) {
      return symbol(lexer, verb_end_delim, true);
    }

    // EOL is not allowed in inline verbatim
    if (catcode_table[lookahead] == EOL_CATEGORY) {
      return symbol(lexer, exit);
    }
  }

  return false;
}

bool Scanner::scan_verb_body(TSLexer *lexer) {
  return enter_raw_mode(lexer) &&
         match_chars(lexer, ~EOL_FLAG, u32string(1, start_delim)) &&
         symbol(lexer, verb_body);
}

bool Scanner::scan_verbatim_text(TSLexer *lexer) {
  if (enter_raw_mode(lexer)) {
    lexer->result_symbol = verbatim_text;

    do {
      lexer->mark_end(lexer);

      if (match_char(lexer, ESCAPE_FLAG)) {
        if (match_string(lexer, "end")) {
          match_chars(lexer, SPACE_FLAG);
          if (match_char(lexer, BEGIN_FLAG) && match_string(lexer, e_name) &&
              match_char(lexer, END_FLAG)) {
            break;
          }
        }
      } else {
        read_char(lexer);
      }
    } while (lookahead);

    return true;
  }

  return false;
}

bool Scanner::scan_comment(TSLexer *lexer) {
  lexer->result_symbol = comment;

  if (enter_raw_mode(lexer)) {
    string comment_type;

    if (lookahead == ':') {
      lexer->result_symbol = comment_tag;
    } else {
      match_chars(lexer, SPACE_FLAG);

      if (lookahead == 'a') {
        if (read_char(lexer) && lookahead == 'r' && read_char(lexer) &&
            lookahead == 'a' && read_char(lexer) && lookahead == 'r' &&
            read_char(lexer) && lookahead == 'a' && read_char(lexer) &&
            lookahead == ':') {
          lexer->result_symbol = comment_arara;
        }
      } else if (lookahead == '!' && read_char(lexer)) {
        if (lookahead == 'T' && read_char(lexer) &&
            (lookahead == 'e' || lookahead == 'E') && read_char(lexer) &&
            lookahead == 'X' && read_char(lexer) &&
            catcode_table[lookahead] == SPACE_CATEGORY) {
          lexer->result_symbol = comment_tex;
        } else if (lookahead == 'B' && read_char(lexer) &&
                   (lookahead == 'i' || lookahead == 'I') && read_char(lexer) &&
                   (lookahead == 'b' || lookahead == 'B') && read_char(lexer) &&
                   catcode_table[lookahead] == SPACE_CATEGORY) {
          lexer->result_symbol = comment_bib;
        }
      }
    }

    // Gobble the reset of the comment
    match_chars(lexer, ~EOL_FLAG);

    // Eat any EOL
    if (catcode_table[lookahead] == EOL_CATEGORY) {
      read_char(lexer);
    }
  }

  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_cs(TSLexer *lexer, const bool *valid_symbols) {
  read_char(lexer);

  if (catcode_table[lookahead] != LETTER_CATEGORY) {
    if (valid_symbols[cs_make_verb_delim]) {
      catcode_table.assign(lookahead, VERB_DELIM_EXT_CATEGORY, true);

      lexer->result_symbol = cs_make_verb_delim;
      lexer->mark_end(lexer);

      return true;
    }

    if (valid_symbols[cs_delete_verb_delim]) {
      catcode_table.erase(lookahead, true);

      lexer->result_symbol = cs_delete_verb_delim;
      lexer->mark_end(lexer);

      return true;
    }
  }

  cs_name = read_string(lexer, LETTER_CATEGORY);

  auto it = control_sequences.find(cs_name);
  lexer->result_symbol =
      (it != control_sequences.end() && valid_symbols[it->second.symbol])
          ? it->second.symbol
          : cs;

  return true;
}

inline bool Scanner::symbol(TSLexer *lexer, SymbolType symbol, bool advance) {
  if (advance) {
    if (raw) {
      lexer->advance(lexer, false);
    }
    lexer->mark_end(lexer);
  } else if (raw) {
    lexer->mark_end(lexer);
  }

  lexer->result_symbol = symbol;

  return true;
}

bool Scanner::scan_space(TSLexer *lexer, const bool *valid_symbols) {
  int eol = 0;

  do {
    if (catcode_table[lookahead] == EOL_CATEGORY)
      eol++;
  } while (read_char(lexer) && (catcode_table[lookahead] == SPACE_CATEGORY ||
                                catcode_table[lookahead] == EOL_CATEGORY));

  if (eol > 1 && !valid_symbols[par_eol]) {
    return scan_text(lexer, valid_symbols);
  }

  lexer->result_symbol = (eol > 1) ? par_eol : _space;

  return true;
}

bool Scanner::scan_env_name(TSLexer *lexer) {
  e_name = read_string(lexer, LETTER_FLAG | OTHER_FLAG);

  auto it = environments.find(e_name);

  if (it == environments.end()) {
    lexer->result_symbol = env_name;
  } else {
    lexer->result_symbol = it->second.symbol;
  }

  return true;
}

bool Scanner::scan_name(TSLexer *lexer) {
  u_name = read_string(lexer, LETTER_FLAG | OTHER_FLAG, U",");

  auto it = names.find(u_name);

  if (it == names.end()) {
    lexer->result_symbol = name;
  } else {
    lexer->result_symbol = it->second.symbol;
    catcode_table.assign(it->second.intervals, it->second.global);
  }

  return true;
}

bool Scanner::scan_math_delim(TSLexer *lexer, const bool *valid_symbols) {
  read_char(lexer);

  if (valid_symbols[math_shift_end]) {
    lexer->result_symbol = math_shift_end;
  } else if (catcode_table[lookahead] == MATH_SHIFT_CATEGORY) {
    lexer->mark_end(lexer);
    lexer->result_symbol = valid_symbols[display_math_shift_end]
                               ? display_math_shift_end
                               : display_math_shift;
  } else {
    lexer->result_symbol = math_shift;
  }

  return true;
}

bool Scanner::scan_ignored_line(TSLexer *lexer) {
  match_chars(lexer, ~EOL_FLAG);

  return symbol(lexer, ignored_line, catcode_table[lookahead] == EOL_CATEGORY);
}

bool Scanner::scan_ignored_rest(TSLexer *lexer) {
  match_chars(lexer);

  return symbol(lexer, ignored_rest);
}

bool Scanner::valid_symbol_in_range(const bool *valid_symbols, SymbolType first,
                                    SymbolType last) {
  return any_of(valid_symbols + first, valid_symbols + last + 1,
                [](bool valid_symbol) { return valid_symbol; });
}

bool Scanner::scan_octal(TSLexer *lexer) {
  // Skip the octal quote and then gobble the digits
  return read_char(lexer) &&
         match_chars(lexer, ANY_FLAG, octal_digits, false) &&
         symbol(lexer, octal);
}

bool Scanner::scan_decimal(TSLexer *lexer) {
  return match_chars(lexer, ANY_FLAG, decimal_digits, false) &&
         symbol(lexer, decimal);
}

bool Scanner::scan_parameter_ref(TSLexer *lexer) {
  return match_chars(lexer, PARAMETER_FLAG) &&
         symbol(lexer, parameter_ref, lookahead >= '1' && lookahead <= '9');
}

bool Scanner::scan_hexadecimal(TSLexer *lexer) {
  // Skip the hexadecimal quote and then gobble the digits
  return read_char(lexer) &&
         match_chars(lexer, ANY_FLAG, hexadecimal_digits, false) &&
         symbol(lexer, hexadecimal);
}

bool Scanner::scan_fixed(TSLexer *lexer) {
  match_char(lexer, ANY_FLAG, signs);
  match_chars(lexer, ANY_FLAG, decimal_digits, false);

  if (match_char(lexer, ANY_FLAG, decimal_separator, false)) {
    match_chars(lexer, ANY_FLAG, decimal_digits, false);
  }

  return symbol(lexer, fixed);
}

bool Scanner::scan_text(TSLexer *lexer, const bool *valid_symbols) {
  switch (lookahead) {
  case '\'':
    if (valid_symbols[octal]) {
      return scan_octal(lexer);
    }
    break;
  case '"':
    if (valid_symbols[hexadecimal]) {
      return scan_hexadecimal(lexer);
    }
    break;
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    if (valid_symbols[decimal]) {
      return scan_decimal(lexer);
    }
    if (valid_symbols[fixed]) {
      return scan_fixed(lexer);
    }
    break;
  case '+':
  case '-':
  case '.':
    if (valid_symbols[fixed]) {
      return scan_fixed(lexer);
    }
    break;
  }

  string keyword = read_string(lexer, LETTER_CATEGORY);

  auto it = keywords.find(keyword);

  if (it != keywords.end() && valid_symbols[it->second]) {
    lexer->result_symbol = it->second;
    return true;
  }

  if (valid_symbols[text_single]) {
    lexer->result_symbol = text_single;
    return true;
  }

  u32string excluded;

  if (valid_symbols[rbrack]) {
    excluded.push_back(L']');
  }

  if (valid_symbols[rparen]) {
    excluded.push_back(L')');
  }

  match_chars(lexer, LETTER_FLAG | OTHER_FLAG | SPACE_FLAG | EOL_FLAG,
              excluded);

  lexer->result_symbol = text;

  return true;
}

bool Scanner::scan_cmd_apply(TSLexer *lexer) {
  auto it = control_sequences.find(cs_name);
  if (it != control_sequences.end()) {
    catcode_table.assign(it->second.intervals);
  }

  return symbol(lexer, _cmd_apply);
}

bool Scanner::scan_env_begin(TSLexer *lexer) {
  catcode_table.push();
  auto it = environments.find(e_name);
  if (it != environments.end()) {
    catcode_table.assign(it->second.intervals);
  }

  return symbol(lexer, _env_begin);
}

bool Scanner::scan_env_end(TSLexer *lexer) {
  catcode_table.pop();

  return symbol(lexer, _env_end);
}

bool Scanner::scan_scope_begin(TSLexer *lexer) {
  catcode_table.push();

  return symbol(lexer, _scope_begin);
}

bool Scanner::scan_scope_end(TSLexer *lexer) {
  catcode_table.pop();

  return symbol(lexer, _scope_end);
}

bool Scanner::scan(TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[_cmd_apply]) {
    return scan_cmd_apply(lexer);
  }

  if (valid_symbols[_env_begin]) {
    return scan_env_begin(lexer);
  }

  if (valid_symbols[_env_end]) {
    return scan_env_end(lexer);
  }

  if (valid_symbols[_scope_begin]) {
    return scan_scope_begin(lexer);
  }

  if (valid_symbols[_scope_end]) {
    return scan_scope_end(lexer);
  }

  if (!lexer->lookahead) {
    return valid_symbols[exit] ? symbol(lexer, exit) : false;
  }

  // Look for an inline verbatim delimiter and end the verbatim.
  if (valid_symbols[verb_end_delim]) {
    if (scan_verb_end_delim(lexer)) {
      return true;
    }
  }

  // Scan an inline verbatim body.
  if (valid_symbols[verb_body]) {
    return scan_verb_body(lexer);
  }

  if (valid_symbols[verbatim_text]) {
    return scan_verbatim_text(lexer);
  }

  if (!enter_translated_mode(lexer)) {
    lexer->result_symbol = char_ref_invalid;
    lexer->mark_end(lexer);
    return true;
  }

  // Look for an inline verbatim.
  if (valid_symbols[verb_delim_no_lbrack] && lookahead != '[') {
    return scan_verb_start_delim(lexer, valid_symbols, verb_delim_no_lbrack);
  }

  if (valid_symbols[verb_delim]) {
    return scan_verb_start_delim(lexer, valid_symbols, verb_delim);
  }

  if (valid_symbols[ignored_line]) {
    return scan_ignored_line(lexer);
  }

  if (valid_symbols[ignored_rest]) {
    return scan_ignored_rest(lexer);
  }

  Category code = catcode_table[lookahead];

  switch (code) {
  case ESCAPE_CATEGORY:
    if (valid_symbol_in_range(valid_symbols, cs_addvspace, cs)) {
      return scan_cs(lexer, valid_symbols);
    }
    break;
  case BEGIN_CATEGORY:
    if (valid_symbols[l]) {
      return symbol(lexer, l, true);
    }
    break;
  case END_CATEGORY:
    if (valid_symbols[exit]) {
      return symbol(lexer, exit);
    }
    if (valid_symbols[r]) {
      return symbol(lexer, r, true);
    }
    break;
  case MATH_SHIFT_CATEGORY:
    if (valid_symbols[exit_math]) {
      return symbol(lexer, exit_math);
    }
    if (valid_symbols[display_math_shift] || valid_symbols[math_shift] ||
        valid_symbols[display_math_shift_end] ||
        valid_symbols[math_shift_end]) {
      return scan_math_delim(lexer, valid_symbols);
    }
    break;
  case ALIGNMENT_TAB_CATEGORY:
    if (valid_symbols[alignment_tab]) {
      return symbol(lexer, alignment_tab, true);
    }
    break;
  case EOL_CATEGORY:
    if (valid_symbols[eol]) {
      return symbol(lexer, eol, true);
    }
    if (valid_symbols[_space]) {
      return scan_space(lexer, valid_symbols);
    }
    break;
  case PARAMETER_CATEGORY:
    if (valid_symbols[parameter_ref]) {
      return scan_parameter_ref(lexer);
    }
    break;
  case SUPERSCRIPT_CATEGORY:
    if (valid_symbols[superscript]) {
      return symbol(lexer, superscript, true);
    }
    break;
  case SUBSCRIPT_CATEGORY:
    if (valid_symbols[subscript]) {
      return symbol(lexer, subscript, true);
    }
    break;
  case IGNORED_CATEGORY:
    if (valid_symbols[ignored]) {
      return match_chars(lexer, IGNORED_FLAG) && symbol(lexer, ignored);
    }
    break;
  case SPACE_CATEGORY:
    if (valid_symbols[_space]) {
      return scan_space(lexer, valid_symbols);
    }
    break;
  case ACTIVE_CHAR_CATEGORY:
    if (valid_symbols[active_char]) {
      return symbol(lexer, active_char, true);
    }
    break;
  case COMMENT_CATEGORY:
    if (valid_symbols[comment]) {
      return scan_comment(lexer);
    }
    break;
  case VERB_DELIM_EXT_CATEGORY:
    if (valid_symbols[short_verb_delim]) {
      return scan_verb_start_delim(lexer, valid_symbols, short_verb_delim);
    }
    break;
  default:
    if (valid_symbols[text_non_escape]) {
      break;
    }
    if (valid_symbol_in_range(valid_symbols, env_name_alignat, env_name)) {
      return scan_env_name(lexer);
    }
    if (valid_symbols[name]) {
      return scan_name(lexer);
    }
    return scan_text(lexer, valid_symbols);
  }

  if (valid_symbols[text_non_escape]) {
    return symbol(lexer, text_non_escape, true);
  }

  return false;
}

} // namespace LaTeX

// Source for required functions:
// https://github.com/tree-sitter/tree-sitter/blob/78b54810a62580537b0a2df7eb781e03667d63ba/src/compiler/generate_code/c_code.cc#L546-L552

extern "C" {

void *tree_sitter_latex_external_scanner_create() {
  return new LaTeX::Scanner();
}

bool tree_sitter_latex_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  auto *scanner = static_cast<LaTeX::Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_latex_external_scanner_serialize(void *payload,
                                                      char *buffer) {
  auto *scanner = static_cast<LaTeX::Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_latex_external_scanner_deserialize(void *payload,
                                                    const char *buffer,
                                                    unsigned length) {
  auto *scanner = static_cast<LaTeX::Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_latex_external_scanner_destroy(void *payload) {
  auto *scanner = static_cast<LaTeX::Scanner *>(payload);
  delete scanner;
}
}
