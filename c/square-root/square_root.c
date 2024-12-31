#include "square_root.h"

uint16_t square_root(uint16_t n) {

  for (int i = 1; i <= n; i++) {
    if (i * i == n)
      return i;
  }

  return 0;
}
