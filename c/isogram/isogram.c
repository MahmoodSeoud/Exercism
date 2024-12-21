#include "isogram.h"
#include <ctype.h>
#include <string.h>

bool is_isogram(const char phrase[]) {
  int seen[ALPHABET_COUNT] = {0};

  if (phrase == NULL)
    return false;

  for (size_t i = 0; i < strlen(phrase); i++) {
    if (isalpha(phrase[i])) {
      char c = tolower(phrase[i]);
      if (seen[c - 'a'] > 0)
        return false;
      seen[c - 'a']++;
    }
  }
  return true;
}
