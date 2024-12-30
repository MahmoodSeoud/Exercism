#include "rotational_cipher.h"

char *rotate(const char *text, int shift_key) {
  const int alph_len = 26;
  const int text_len = strlen(text);
  char *ptr = malloc((text_len + 1) * sizeof(char));

  for (int i = 0; i < text_len; i++) {
    char c = text[i];

    if (isalpha(text[i])) {
      char start_ascii_char = islower(c) ? 'a' : 'A';
      ptr[i] = start_ascii_char + (c - start_ascii_char + shift_key) % alph_len;
    } else {
      ptr[i] = text[i];
    }
  }
  ptr[text_len] = '\0';
  return ptr;
}
