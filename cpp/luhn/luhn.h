#if !defined(LUHN_H)
#define LUHN_H
#include <regex>
#include <iostream>

namespace luhn {
    bool valid(std::string num);
}  // namespace luhn

#endif // LUHN_H
