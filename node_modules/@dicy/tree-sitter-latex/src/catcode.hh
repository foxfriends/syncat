#ifndef CATCODE_HH_
#define CATCODE_HH_

#include <bitset>
#include <map>
#include <unordered_map>
#include <vector>

#include "serialization.hh"

namespace LaTeX {

enum Category : uint8_t {
  ESCAPE_CATEGORY,
  BEGIN_CATEGORY,
  END_CATEGORY,
  MATH_SHIFT_CATEGORY,
  ALIGNMENT_TAB_CATEGORY,
  EOL_CATEGORY,
  PARAMETER_CATEGORY,
  SUPERSCRIPT_CATEGORY,
  SUBSCRIPT_CATEGORY,
  IGNORED_CATEGORY,
  SPACE_CATEGORY,
  LETTER_CATEGORY,
  OTHER_CATEGORY,
  ACTIVE_CHAR_CATEGORY,
  COMMENT_CATEGORY,
  INVALID_CATEGORY,
  VERB_DELIM_EXT_CATEGORY,
  CATEGORY_COUNT
};

enum CategoryFlag : uint32_t {
  ESCAPE_FLAG = 1 << ESCAPE_CATEGORY,
  BEGIN_FLAG = 1 << BEGIN_CATEGORY,
  END_FLAG = 1 << END_CATEGORY,
  MATH_SHIFT_FLAG = 1 << MATH_SHIFT_CATEGORY,
  ALIGNMENT_TAB_FLAG = 1 << ALIGNMENT_TAB_CATEGORY,
  EOL_FLAG = 1 << EOL_CATEGORY,
  PARAMETER_FLAG = 1 << PARAMETER_CATEGORY,
  SUPERSCRIPT_FLAG = 1 << SUPERSCRIPT_CATEGORY,
  SUBSCRIPT_FLAG = 1 << SUBSCRIPT_CATEGORY,
  IGNORED_FLAG = 1 << IGNORED_CATEGORY,
  SPACE_FLAG = 1 << SPACE_CATEGORY,
  LETTER_FLAG = 1 << LETTER_CATEGORY,
  OTHER_FLAG = 1 << OTHER_CATEGORY,
  ACTIVE_CHAR_FLAG = 1 << ACTIVE_CHAR_CATEGORY,
  COMMENT_FLAG = 1 << COMMENT_CATEGORY,
  INVALID_FLAG = 1 << INVALID_CATEGORY,
  VERB_DELIM_EXT_FLAG = 1 << VERB_DELIM_EXT_CATEGORY,
  ANY_FLAG = (1 << CATEGORY_COUNT) - 1
};

typedef std::bitset<CATEGORY_COUNT> CategoryFlags;

struct CatCodeInterval {
  char32_t begin, end;
  Category category;
};

class CatCodeTable {
protected:
  uint8_t level; // 0 is the default catcode table, 1 is the global scope, 2-255
                 // are the group scopes.
  std::unordered_map<char32_t, std::map<uint8_t, Category>> codes;

public:
  CatCodeTable(std::initializer_list<CatCodeInterval> init) {
    level = 0;
    assign(init);
    level = 1;
  }

  void reset();

  void assign(const char32_t key, Category code, bool global = false);

  void assign(const std::vector<CatCodeInterval> &intervals,
              bool global = false);

  void erase(const char32_t key, bool global = false);

  // Category& operator[](const char32_t key);

  Category operator[](const char32_t key) const;

  void push();

  void pop();

  friend SerializationBuffer &operator<<(SerializationBuffer &buffer,
                                         const CatCodeTable &table);

  friend DeserializationBuffer &operator>>(DeserializationBuffer &buffer,
                                           CatCodeTable &table);
};

} // namespace LaTeX

#endif // CATCODE_HH_
