#include "prime_factors.h"
#include <stdio.h>

size_t find_factors(uint64_t n, uint64_t factors[MAXFACTORS]) {

  size_t count = 0;
  size_t div = 2;
  uint64_t n_cpy = n;

  while (1 < n_cpy) {
    if (n_cpy % div)
      div++;
    else {
      factors[count++] = div;
      n_cpy /= div;
    }
  }
  return count;
}
