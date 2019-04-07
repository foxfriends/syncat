#ifndef SCANNER_HH_
#define SCANNER_HH_

#include <codecvt>
#include <locale>
#include <string>
#include <unordered_map>
#include <vector>

#include "tree_sitter/parser.h"

#include "catcode.hh"

namespace LaTeX {

enum SymbolType {
  _cmd_apply,
  _env_begin,
  _env_end,
  _scope_begin,
  _scope_end,
  _space,
  active_char,
  alignment_tab,
  backtick,
  char_ref_invalid,
  comma,
  comment_arara,
  comment_bib,
  comment_tag,
  comment_tex,
  comment,
  cs_addvspace,
  cs_at_ifpackagelater,
  cs_At,
  cs_author,
  cs_begin,
  cs_begingroup,
  cs_bgroup,
  cs_bibitem,
  cs_CheckCommand,
  cs_cite,
  cs_cites,
  cs_cline,
  cs_code,
  cs_csname,
  cs_date,
  cs_DeclareOption,
  cs_def,
  cs_delete_verb_delim,
  cs_DeleteShortVerb,
  cs_discretionary,
  cs_display_math_begin,
  cs_display_math_end,
  cs_DoNotIndex,
  cs_egroup,
  cs_emph,
  cs_end,
  cs_endcsname,
  cs_endgroup,
  cs_endinput,
  cs_enlargethispage,
  cs_ensuremath,
  cs_Error,
  cs_ExecuteOptions,
  cs_expandafter,
  cs_ExplSyntaxOff,
  cs_ExplSyntaxOn,
  cs_footnote,
  cs_footnotemark,
  cs_frac,
  cs_fref,
  cs_gls_acr,
  cs_glsdisp,
  cs_glsentry,
  cs_glssee,
  cs_href,
  cs_hyperbaseurl,
  cs_hyperimage,
  cs_hyperref,
  cs_hyphenation,
  cs_IfFileExists,
  cs_inline_math_begin,
  cs_inline_math_end,
  cs_input,
  cs_item,
  cs_label,
  cs_left,
  cs_let,
  cs_linebreak,
  cs_longnewglossaryentry,
  cs_lstinline,
  cs_lua,
  cs_luacode,
  cs_make_verb_delim,
  cs_makeatletter,
  cs_makeatother,
  cs_makebox,
  cs_MakeShortVerb,
  cs_marginpar,
  cs_mathaccent,
  cs_mathstyle,
  cs_mbox,
  cs_mint,
  cs_mintinline,
  cs_multicolumn,
  cs_NeedsTeXFormat,
  cs_newacronym,
  cs_newcommand,
  cs_newcounter,
  cs_newenvironment,
  cs_newfont,
  cs_newglossaryentry,
  cs_newlength,
  cs_newline,
  cs_newsavebox,
  cs_newtheorem,
  cs_nocite,
  cs_obeycr,
  cs_pagebreak,
  cs_pagenumbering,
  cs_pagestyle,
  cs_par,
  cs_parbox,
  cs_PassOptionsTo,
  cs_phantom_smash,
  cs_printcounter,
  cs_ProcessOptions,
  cs_protect,
  cs_Provides,
  cs_ProvidesExpl,
  cs_raisebox,
  cs_ref,
  cs_refrange,
  cs_regexp,
  cs_relax,
  cs_restorecr,
  cs_right,
  cs_savebox,
  cs_sbox,
  cs_section,
  cs_setcounter,
  cs_setlength,
  cs_setto,
  cs_space,
  cs_sqrt,
  cs_stackrel,
  cs_stepcounter,
  cs_string,
  cs_tag,
  cs_text,
  cs_textstyle,
  cs_thanks,
  cs_title,
  cs_url,
  cs_use_209,
  cs_use,
  cs_usebox,
  cs_value,
  cs_verb,
  cs_volcite,
  cs_volcites,
  cs_WarningInfo,
  cs,
  decimal,
  display_math_shift_end,
  display_math_shift,
  env_name_alignat,
  env_name_array,
  env_name_comment,
  env_name_display_math,
  env_name_dmath,
  env_name_document,
  env_name_dseries,
  env_name_figure,
  env_name_filecontents,
  env_name_gnuplot,
  env_name_inline_math,
  env_name_itemize,
  env_name_lrbox,
  env_name_lstlisting,
  env_name_luacode,
  env_name_luacodestar,
  env_name_math,
  env_name_minipage,
  env_name_minted,
  env_name_picture,
  env_name_table,
  env_name_tabu,
  env_name_tabular,
  env_name_tabularstar,
  env_name_text,
  env_name_thebibliography,
  env_name_theorem,
  env_name_tikzpicture,
  env_name_verbatim,
  env_name_Verbatim,
  env_name,
  eol,
  equals,
  exit_math,
  exit,
  fixed,
  hexadecimal,
  ignored_line,
  ignored_rest,
  ignored,
  invalid,
  l,
  lbrack,
  lparen,
  math_shift_end,
  math_shift,
  minus,
  name,
  octal,
  par_eol,
  parameter_ref,
  plus_sym,
  plus,
  r,
  rbrack,
  rparen,
  short_verb_delim,
  spread,
  star,
  subscript,
  superscript,
  text_non_escape,
  text_single,
  text,
  to,
  unit,
  verb_body,
  verb_delim_no_lbrack,
  verb_delim,
  verb_end_delim,
  verbatim_text,
};

struct CatCodeCommand {
  SymbolType symbol;
  bool global;
  std::vector<CatCodeInterval> intervals;

  CatCodeCommand(SymbolType t, bool g = false) {
    symbol = t;
    global = g;
  }

  CatCodeCommand(SymbolType t, bool g, std::initializer_list<CatCodeInterval> i)
      : intervals(i) {
    symbol = t;
    global = g;
  }
};

struct Environment {
  SymbolType symbol;
  std::vector<CatCodeInterval> intervals;

  Environment(SymbolType s) { symbol = s; }

  Environment(SymbolType s, std::initializer_list<CatCodeInterval> i)
      : intervals(i) {
    symbol = s;
  }
};

#ifdef _MSC_VER
#define CHAR32_T __int32
#else
#define CHAR32_T char32_t
#endif

class Scanner {
  const std::u32string decimal_separator = U".";
  const std::u32string signs = U"+-";
  const std::u32string octal_digits = U"01234567";
  const std::u32string decimal_digits = U"0123456789";
  const std::u32string hexadecimal_digits = U"0123456789ABCDEFabcdef";

  std::wstring_convert<std::codecvt_utf8<CHAR32_T>, CHAR32_T> convert;
  std::string cs_name, e_name, u_name;
  char32_t start_delim = 0, lookahead = 0;
  bool raw = false, advanced = false;
  CatCodeTable catcode_table = {
      {' ', ' ', SPACE_CATEGORY},
      {'_', '_', SUBSCRIPT_CATEGORY},
      {'{', '{', BEGIN_CATEGORY},
      {'}', '}', END_CATEGORY},
      {'\\', '\\', ESCAPE_CATEGORY},
      // NUL is technically ignored, but tree sitter seems to use it to indicate
      // EOF.
      // {'\0',   '\0',   IGNORED_CATEGORY},
      // SOH is subscript in plain.tex but not in latex.ltx
      // {'\1', '\1', SUBSCRIPT_CATEGORY},
      // FF is active character for \par in latex.ltx
      {'\f', '\f', ACTIVE_CHAR_CATEGORY},
      {'\n', '\n', EOL_CATEGORY},
      {'\t', '\t', SPACE_CATEGORY},
      // VT superscript in plain.tex but not in latex.ltx
      // {'\v', '\v', SUPERSCRIPT_CATEGORY},
      {'\x7f', '\x7f', INVALID_CATEGORY},
      {'&', '&', ALIGNMENT_TAB_CATEGORY},
      {'#', '#', PARAMETER_CATEGORY},
      {'%', '%', COMMENT_CATEGORY},
      {'^', '^', SUPERSCRIPT_CATEGORY},
      {'~', '~', ACTIVE_CHAR_CATEGORY},
      {'$', '$', MATH_SHIFT_CATEGORY},
      {'a', 'z', LETTER_CATEGORY},
      {'A', 'Z', LETTER_CATEGORY},
  };

  static std::unordered_map<std::string, CatCodeCommand> control_sequences;
  static std::unordered_map<std::string, CatCodeCommand> names;
  static std::unordered_map<std::string, Environment> environments;
  static std::unordered_map<std::string, SymbolType> keywords;

  void reset();

  bool valid_symbol_in_range(const bool *valid_symbols, SymbolType first,
                             SymbolType last);

  bool enter_raw_mode(TSLexer *lexer);

  bool enter_translated_mode(TSLexer *lexer);

  bool read_char(TSLexer *lexer);

  std::string read_string(TSLexer *lexer, Category catcode);

  std::string read_string(TSLexer *lexer, const CategoryFlags &flags = ANY_FLAG,
                          const std::u32string &chars = U"",
                          bool exclude = true);

  bool match_char(TSLexer *lexer, const CategoryFlags &flags = ANY_FLAG,
                  const std::u32string &chars = U"", bool exclude = true);

  bool match_chars(TSLexer *lexer, const CategoryFlags &flags = ANY_FLAG,
                   const std::u32string &chars = U"", bool exclude = true);

  bool match_string(TSLexer *lexer, const std::string &value);

  bool scan_verb_start_delim(TSLexer *lexer, const bool *valid_symbols,
                             SymbolType symbol);

  bool scan_verb_end_delim(TSLexer *lexer);

  bool scan_verb_body(TSLexer *lexer);

  bool scan_verbatim_text(TSLexer *lexer);

  bool scan_comment(TSLexer *lexer);

  bool scan_cs(TSLexer *lexer, const bool *valid_symbols);

  inline bool symbol(TSLexer *lexer, SymbolType symbol, bool advance = false);

  bool scan_space(TSLexer *lexer, const bool *valid_symbols);

  bool scan_env_name(TSLexer *lexer);

  bool scan_name(TSLexer *lexer);

  bool scan_math_delim(TSLexer *lexer, const bool *valid_symbols);

  inline bool scan_ignored_line(TSLexer *lexer);

  bool scan_ignored_rest(TSLexer *lexer);

  bool scan_octal(TSLexer *lexer);

  bool scan_decimal(TSLexer *lexer);

  bool scan_hexadecimal(TSLexer *lexer);

  bool scan_fixed(TSLexer *lexer);

  bool scan_parameter_ref(TSLexer *lexer);

  bool scan_text(TSLexer *lexer, const bool *valid_symbols);

  bool scan_cmd_apply(TSLexer *lexer);

  bool scan_env_begin(TSLexer *lexer);

  bool scan_env_end(TSLexer *lexer);

  bool scan_scope_begin(TSLexer *lexer);

  bool scan_scope_end(TSLexer *lexer);

public:
  Scanner() {}

  unsigned serialize(char *buffer) const;

  void deserialize(const char *buffer, unsigned length);

  bool scan(TSLexer *lexer, const bool *valid_symbols);
};

} // namespace LaTeX

#endif
