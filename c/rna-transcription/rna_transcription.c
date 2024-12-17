#include "rna_transcription.h"
#include <stdlib.h>
#include <string.h>

char *to_rna(const char *dna) {
  size_t rna_len = strlen(dna) + 1;
  char *rna = malloc(rna_len);
  memset(rna, '\0', rna_len);

  for (int i = 0; dna[i]; i++) {
    switch (dna[i]) {
    case 'A':
      rna[i] = 'U';
      break;
    case 'C':
      rna[i] = 'G';
      break;
    case 'G':
      rna[i] = 'C';
      break;
    case 'T':
      rna[i] = 'A';
      break;
    default:
      rna[i] = '\0';
      break;
    }

    if (!rna[i]) { // End of strand -> jump out of loop
      free(rna);   // remember to free the allocted mem
      return NULL;
    }
  }

  return rna;
}
