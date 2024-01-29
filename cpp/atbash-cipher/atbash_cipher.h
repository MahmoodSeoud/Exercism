#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <string>
#include <iostream>
#include <regex>
#include <cctype>

namespace atbash_cipher {
    std::string encode(std::string str);
    std::string decode(std::string str);
}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H
