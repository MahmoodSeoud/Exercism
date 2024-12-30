#include "sieve.h"

uint32_t sieve(uint32_t limit, uint32_t *primes, size_t max_primes) {

  bool is_marked[limit];
  memset(is_marked, false, limit);
  uint32_t count = 0;
  for (uint32_t i = 2; i <= limit && count < max_primes; i++) {
    if (!is_marked[i]) {
      for (uint32_t j = 2 * i; j <= limit; j += i) {
        is_marked[j] = true;
      }
      primes[count] = i;
      count++;
    }
  }
  return count;
}
