#include "eliuds_eggs.h"
#include <stdio.h>

uint32_t egg_count(unsigned int n) {
  int count = 0;
  for (int i = 31; i >= 0; i--) { // 16 = 00000000 00000000 00000000 00010000
    int k = n >> i;
    if (k & 1) { // 1 = 00000000 00000000 00000000 00000001
      printf("1");
      count++;
    } else {
      printf("0");
    }
  }
  return count;
}
