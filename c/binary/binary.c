#include "binary.h"
#include <math.h>

int convert(const char *input) {
  int sum = 0;
  char *c = (char *)input; // Getting the first char from the input

  for (; *c; c++) {
    if (*c != '0' && *c != '1')
      return INVALID;
    sum = sum * 2 + (*c == '0' ? 0 : 1);
  }

  return sum;
}
