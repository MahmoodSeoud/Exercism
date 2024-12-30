#include "reverse_string.h"
#include <stdlib.h>

char *reverse(const char *value) {
  if (!value)
    return NULL;
  int len = strlen(value);
  char *reversed_value = calloc(len + 1, sizeof(char));

  for (reversed_value += len; *value; value++) {
    *(--reversed_value) = *value;
  }

  return reversed_value;
}
