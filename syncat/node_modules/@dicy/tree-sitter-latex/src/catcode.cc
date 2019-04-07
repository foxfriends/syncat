#include <algorithm>

#include "catcode.hh"

namespace LaTeX {

using std::map;
using std::pair;
using std::vector;

// Category& CatCodeTable::operator[](const char32_t key) {
//   return codes[key][level];
// }

void CatCodeTable::assign(const char32_t key, Category code, bool global) {
  codes[key][(global) ? 1 : level] = code;
}

void CatCodeTable::erase(const char32_t key, bool global) {
  codes[key].erase((global) ? 1 : level);
}

Category CatCodeTable::operator[](const char32_t key) const {
  auto it = codes.find(key);

  // OTHER is the default category.
  return (it == codes.cend() || it->second.empty())
             ? OTHER_CATEGORY
             : it->second.crbegin()->second;
}

void CatCodeTable::reset() {
  level = 1;

  for (auto it = codes.begin(), it_end = codes.end(); it != it_end;) {
    for (auto lit = it->second.begin(), lit_end = it->second.end();
         lit != lit_end;) {
      if (lit->first != 0) {
        lit = it->second.erase(lit);
      } else {
        lit++;
      }
    }

    if (it->second.empty()) {
      it = codes.erase(it);
    } else {
      it++;
    }
  }
}

void CatCodeTable::assign(const vector<CatCodeInterval> &intervals,
                          bool global) {
  uint8_t _level = (global) ? 1 : level;

  for (const CatCodeInterval &interval : intervals) {
    for (char32_t ch = interval.begin; ch <= interval.end; ch++) {
      codes[ch][_level] = interval.category;
    }
  }
}

void CatCodeTable::push() { level++; }

void CatCodeTable::pop() {
  if (level > 1) {
    for (auto it = codes.begin(); it != codes.end();) {
      it->second.erase(level);
      if (it->second.empty()) {
        it = codes.erase(it);
      } else {
        it++;
      }
    }

    level--;
  }
}

SerializationBuffer &operator<<(SerializationBuffer &buffer,
                                const CatCodeTable &table) {
  // Count the characters that have non-zero level.
  unsigned ch_count =
      count_if(table.codes.cbegin(), table.codes.cend(),
               [](const pair<char32_t, map<uint8_t, Category>> &p) {
                 return any_of(p.second.cbegin(), p.second.cend(),
                               [](const pair<uint8_t, Category> &p2) {
                                 return p2.first;
                               });
               });

  buffer << table.level << ch_count;

  for (auto it = table.codes.cbegin(); it != table.codes.cend(); it++) {
    uint8_t level_count =
        count_if(it->second.cbegin(), it->second.cend(),
                 [](const pair<uint8_t, Category> &p) { return p.first; });

    if (level_count > 0) {
      buffer << it->first << level_count;

      for (auto lit = it->second.cbegin(); lit != it->second.cend(); lit++) {
        if (lit->first != 0) {
          buffer << lit->first << lit->second;
        }
      }
    }
  }

  return buffer;
}

DeserializationBuffer &operator>>(DeserializationBuffer &buffer,
                                  CatCodeTable &table) {
  table.reset();

  if (buffer.length != 0) {
    char32_t ch;
    unsigned ch_count;
    uint8_t level, level_count;
    Category cat;

    buffer >> table.level >> ch_count;

    for (; ch_count > 0; ch_count--) {
      buffer >> ch >> level_count;
      for (; level_count > 0; level_count--) {
        buffer >> level >> cat;
        table.codes[ch][level] = cat;
      }
    }
  }

  return buffer;
}

} // namespace LaTeX
