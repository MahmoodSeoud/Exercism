#include "square_root.h"
#include <stdint.h>

uint16_t square_root(uint16_t n) {

  int low = 1;
  int high = 256;

  uint16_t mid;
  uint16_t square;
  while (low <= high) {
    mid = low + (high - low) / 2;
    square = mid * mid;
    if (square == n)
      return mid;
    if (n < square)
      high = mid - 1;
    else
      low = mid + 1;
  }

  return 0;
}
