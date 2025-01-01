#include "nth_prime.h"

void sieve(uint32_t limit, uint32_t *primes) {

  int is_marked[limit];
  memset(is_marked, 0, limit);
  uint32_t count = 0;

  for (uint32_t i = MIN_PRIME; i <= limit; i++) {
    if (is_marked[i] == 0) {
      for (uint32_t j = 2 * i; j <= limit; j += i) {
        is_marked[j] = 1;
      }
      primes[count++] = i;
    }
  }
}

uint32_t nth(uint32_t n) {

  if (n == 0)
    return 0;

  uint32_t arr[MAX_PRIME];
  sieve(MAX_PRIME, arr);

  return arr[n - 1];
}
