#include "armstrong_numbers.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

bool is_armstrong_number(int candidate) {

  // Convert candidate to str
  char scandidate[12];
  sprintf(scandidate, "%d", candidate);

  int sum = 0;
  for (long unsigned i = 0; i < strlen(scandidate); i++) {
    int x = scandidate[i] - '0'; // Convert char to int
    sum += pow(x, strlen(scandidate));
  }

  return sum == candidate;
}
