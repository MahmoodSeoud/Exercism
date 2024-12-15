#include "queen_attack.h"
#include <stdlib.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2) {

  if (queen_1.column > 7 || queen_1.row > 7) // queen_1 out of bounds
    return INVALID_POSITION;
  if (queen_2.column > 7 || queen_2.row > 7) // queen_2 out of bounds
    return INVALID_POSITION;
  if (queen_1.column == queen_2.column &&
      queen_1.row == queen_2.row) // lie on the same position
    return INVALID_POSITION;

  if (queen_1.column == queen_2.column ||
      queen_1.row == queen_2.row) // On same column / row
    return CAN_ATTACK;
  if (abs(queen_1.column - queen_2.column) ==
      abs(queen_1.row - queen_2.row)) // on some diagonal
    return CAN_ATTACK;

  return CAN_NOT_ATTACK;
}
