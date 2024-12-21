#include "pangram.h"
#include <ctype.h>
#include <string.h>

bool is_pangram(const char *sentence) {
  if (!sentence)
    return false;

  char *alph = "abcdefghijklmnopqrstuvwxyz";

  for (size_t i = 0; i < strlen(alph); i++) {
    if (!strchr(sentence, alph[i]) && !strchr(sentence, toupper(alph[i]))) {
      return false;
    }
  }

  return true;
}
