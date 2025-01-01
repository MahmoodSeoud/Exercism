#include "protein_translation.h"
#define match(B) (i + 2 >= len ? false : strncmp(&rna[i], B, 3) == 0)

proteins_t proteins(const char *const rna) {

  proteins_t proteins = {
      .valid = true,
      .count = 0,
  };
  const size_t len = strlen(rna);
  for (size_t i = 0; rna[i]; i += 3) {

    if (match("UGA") || match("UAG") || match("UAA"))
      break;
    else if (match("AUG"))
      proteins.proteins[proteins.count++] = Methionine;
    else if (match("UUU") || match("UUC"))
      proteins.proteins[proteins.count++] = Phenylalanine;
    else if (match("UUA") || match("UUG"))
      proteins.proteins[proteins.count++] = Leucine;
    else if (match("UCU") || match("UCC") || match("UCA") || match("UCG"))
      proteins.proteins[proteins.count++] = Serine;
    else if (match("UAU") || match("UAC"))
      proteins.proteins[proteins.count++] = Tyrosine;
    else if (match("UGU") || match("UGC"))
      proteins.proteins[proteins.count++] = Cysteine;
    else if (match("UGG"))
      proteins.proteins[proteins.count++] = Tryptophan;
    else
      proteins.valid = false;
  }
  return proteins;
}
