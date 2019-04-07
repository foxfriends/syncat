#include "scanner.hh"

namespace LaTeX {

using std::string;
using std::unordered_map;

unordered_map<string, SymbolType> Scanner::keywords = {
    {",", comma},     {"(", lparen},      {")", rparen},   {"[", lbrack},
    {"]", rbrack},    {"*", star},        {"`", backtick}, {"+", plus_sym},
    {"=", equals},    {"bp", unit},       {"cc", unit},    {"cm", unit},
    {"dd", unit},     {"em", unit},       {"ex", unit},    {"fi", unit},
    {"fil", unit},    {"fill", unit},     {"filll", unit}, {"in", unit},
    {"minus", minus}, {"mm", unit},       {"mu", unit},    {"nc", unit},
    {"nd", unit},     {"pc", unit},       {"plus", plus},  {"pt", unit},
    {"sp", unit},     {"spread", spread}, {"to", to},
};

}; // namespace LaTeX
