#ifndef NTH_PRIME_H
#define NTH_PRIME_H

#include <stdint.h>
#include <string.h>

#define MAX_PRIME 104743
#define MIN_PRIME 2

uint32_t nth(uint32_t n);
void sieve(uint32_t limit, uint32_t *primes);

#endif
