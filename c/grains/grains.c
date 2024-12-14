#include "grains.h"

uint64_t square(uint8_t index) {

  if (index < 1 || 64 < index)
    return 0;

  uint64_t grains[64];
  for (int i = 0; i <= 64; i++) {
    if (i == 1) {
      grains[i] = 1;
    } else {
      grains[i] = grains[i - 1] * 2;
    }
  }

  return grains[index];
}

uint64_t total(void) {
  int sum = 0;
  uint64_t grains[64];
  for (int i = 0; i <= 64; i++) {
    if (i == 1) {
      grains[i] = 1;
    } else {
      grains[i] = grains[i - 1] * 2;
      sum += grains[i];
    }
  }

  return sum + 1;
}
