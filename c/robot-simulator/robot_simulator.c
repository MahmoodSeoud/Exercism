#include "robot_simulator.h"
#include <stdio.h>

robot_status_t robot_create(robot_direction_t direction, int x, int y) {
  robot_status_t r;
  r.direction = direction;
  r.position.x = x;
  r.position.y = y;

  return r;
}

void robot_move(robot_status_t *robot, const char *commands) {

  for (char *c = (char *)commands; *c != '\0'; c++) {

    if (*c == 'R')
      robot->direction = (robot->direction + 1) % 4;
    else if (*c == 'L')
      robot->direction = (robot->direction + 3) % 4;
    else if (*c == 'A') {
      if (robot->direction == DIRECTION_NORTH)
        robot->position.y += 1;
      else if (robot->direction == DIRECTION_SOUTH)
        robot->position.y -= 1;
      else if (robot->direction == DIRECTION_EAST)
        robot->position.x += 1;
      else if (robot->direction == DIRECTION_WEST)
        robot->position.x -= 1;
    }
  }
}
