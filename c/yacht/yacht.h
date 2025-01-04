#ifndef YACHT_H
#define YACHT_H

#define DICE_COUNT 5
#define DICE_SIDES 6

typedef enum {
  ONES,
  TWOS,
  THREES,
  FOURS,
  FIVES,
  SIXES,
  FULL_HOUSE,
  FOUR_OF_A_KIND,
  LITTLE_STRAIGHT,
  BIG_STRAIGHT,
  CHOICE,
  YACHT
} category_t;

typedef struct {
  int faces[DICE_COUNT];
} dice_t;

int score(dice_t dice, category_t category);
int count(int face, int faces[DICE_COUNT]);
int sum_array(int faces[DICE_COUNT]);

#endif
