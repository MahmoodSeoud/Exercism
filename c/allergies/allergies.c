#include "allergies.h"

bool is_allergic_to(allergen_t allergen, int score) {
  return ((1 << allergen) & score) > 0;
}
allergen_list_t get_allergens(int score) {

  allergen_list_t list;
  list.count = 0;

  for (allergen_t allergen = ALLERGEN_EGGS; allergen < ALLERGEN_COUNT;
       allergen++) {

    if (is_allergic_to(allergen, score)) {
      list.allergens[allergen] = is_allergic_to(allergen, score);
      list.count++;
    }
  }

  return list;
}
