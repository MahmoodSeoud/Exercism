#include "square_root.h"
#include <stdint.h>

uint16_t square_root(uint16_t n) {

  int low = 1;
  int high = 256;

  uint16_t mid;
  uint16_t square;
  while (low <= high) {
    mid = (low + high) / 2;
    square = mid * mid;
    if (square == n)
      return mid;
    else if (n < square)
      high = mid;
    else
      low = mid;
  }

  return 0;
}
