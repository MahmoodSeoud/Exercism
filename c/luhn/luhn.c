#include "luhn.h"

bool luhn(const char *num) {

  int str_len = strlen(num);
  if (str_len <= 1) {
    return false;
  }

  if (num[0] == ' ' && num[1] == '0')
    return false;

  int sum = 0;
  bool flag = false;

  for (int i = str_len - 1; i >= 0; i--) {
    if (num[i] != ' ') {
      if (!(num[i] >= '0' && num[i] <= '9')) { // If its a not number
        return false;
      }

      int digit = num[i] - '0';
      if (flag) {
        digit = 2 * digit;
        if (digit > 9) {
          digit = digit - 9;
        }
      }
      sum += digit;
      flag = !flag;
    }
  }

  return sum % 10 == 0;
}
