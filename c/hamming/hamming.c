#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs) {
  if (strlen(lhs) != strlen(rhs))
    return -1;

  int diff_count = 0;
  for (unsigned long long i = 0; i < strlen(lhs); i++) {
    if (lhs[i] != rhs[i])
      diff_count++;
  }
  return diff_count;
}
