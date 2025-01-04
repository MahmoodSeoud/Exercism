#include "yacht.h"

int count(int face, int faces[DICE_COUNT]) {
  int count = 0;
  for (int i = 0; i < DICE_COUNT; i++)

    if (faces[i] == face) {
      count++;
    }

  return count;
}

int sum_array(int faces[DICE_COUNT]) {
  int sum = 0;
  for (int i = 0; i < DICE_COUNT; i++)
    sum += faces[i];

  return sum;
}

int score(dice_t dice, category_t category) {

  int score = 0;
  if (ONES <= category && category <= SIXES)
    score = (category + 1) * count(category + 1, dice.faces);
  else if (category == FULL_HOUSE) {

    int focus = 0;
    for (int i = 1; i <= DICE_SIDES; i++) {

      if (count(i, dice.faces) == 3) {
        focus = i;
        break;
      }
    }

    if (focus)
      for (int i = 1; i <= DICE_SIDES; i++) {
        if (count(i, dice.faces) == 2) {
          score = sum_array(dice.faces);
          break;
        }
      }
  } else if (category == FOUR_OF_A_KIND) {
    for (int i = 1; i <= DICE_SIDES; i++)
      if (count(i, dice.faces) >= 4)
        score = i * 4;
  } else if (category == LITTLE_STRAIGHT) {
    if (count(1, dice.faces) == 1 && count(2, dice.faces) == 1 &&
        count(3, dice.faces) == 1 && count(4, dice.faces) == 1 &&
        count(5, dice.faces) == 1)
      score = 30;
  } else if (category == BIG_STRAIGHT) {
    if (count(2, dice.faces) == 1 && count(3, dice.faces) == 1 &&
        count(4, dice.faces) == 1 && count(5, dice.faces) == 1 &&
        count(6, dice.faces) == 1)
      score = 30;
  } else if (category == CHOICE)
    score = sum_array(dice.faces);
  else if (category == YACHT)
    if (count(5, dice.faces) == 5)
      score = 50;

  return score;
}
