#ifndef SERIALIZATION_HH_
#define SERIALIZATION_HH_

#include <cstring>
#include <string>

namespace LaTeX {

struct SerializationBuffer {
  char *buffer;
  unsigned length = 0;

  SerializationBuffer(char *b) { buffer = b; }

  template <class T> SerializationBuffer &operator<<(const T &value) {
    std::memcpy(buffer, &value, sizeof(T));

    buffer += sizeof(T);
    length += sizeof(T);

    return *this;
  }

  SerializationBuffer &operator<<(const std::string &value) {
    *this << value.length();

    for (auto ch : value) {
      *this << ch;
    }

    return *this;
  }
};

struct DeserializationBuffer {
  const char *buffer;
  unsigned length;

  DeserializationBuffer(const char *b, unsigned l) {
    buffer = b;
    length = l;
  }

  template <class T> DeserializationBuffer &operator>>(T &value) {
    std::memcpy(&value, buffer, sizeof(T));

    buffer += sizeof(T);
    length -= sizeof(T);

    return *this;
  }

  DeserializationBuffer &operator>>(std::string &value) {
    size_t length;

    *this >> length;
    value.resize(length);

    for (size_t i = 0; i < length; i++) {
      *this >> value[i];
    }

    return *this;
  }
};

} // namespace LaTeX

#endif // SERIALIZATION_HH_
