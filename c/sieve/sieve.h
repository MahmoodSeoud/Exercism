#ifndef SIEVE_H
#define SIEVE_H

#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  uint32_t num;
  int marked;
} ferro_t;

/// Calculate at most `max_primes` prime numbers in the interval [2,limit]
/// using the Sieve of Eratosthenes and store the prime numbers in `primes`
/// in increasing order.
/// The function returns the number of calculated primes.
uint32_t sieve(uint32_t limit, uint32_t *primes, size_t max_primes);

#endif
