#include "dnd_character.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>

int ability() {
  srand(time(NULL));
  return rand() % 15 + 3;
}

int modifier(int score) { return floor((score - 10) / 2.0); }

dnd_character_t make_dnd_character() {
  dnd_character_t character = {
      .strength = ability(),
      .dexterity = ability(),
      .constitution = ability(),
      .intelligence = ability(),
      .wisdom = ability(),
      .charisma = ability(),
  };

  character.hitpoints = 10 + modifier(character.constitution);

  return character;
}
