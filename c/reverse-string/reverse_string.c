#include "reverse_string.h"

char *reverse(const char *value) {
  int len = strlen(value);
  char *reversed_value = malloc(len + 1);

  for (reversed_value += len; *value; value++) {
    *--reversed_value = *value;
  }

  return reversed_value;
}
