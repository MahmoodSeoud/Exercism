#include "perfect_numbers.h"

int classify_number(int num) {
  if (num <= 0)
    return ERROR;

  int sum = 0;
  for (int i = 1; i < num; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }

  if (sum == num)
    return PERFECT_NUMBER;
  if (sum > num)
    return ABUNDANT_NUMBER;
  else
    return DEFICIENT_NUMBER;
}
