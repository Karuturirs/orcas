#ifndef ENCODE_DEF
#define ENCODE_DEF

namespace encode{

  std::string encode64(const std::string& statement);
  std::string base64_encode(unsigned char const* bytes_to_encode, unsigned int in_len);
}

#endif
