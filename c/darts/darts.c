#include "darts.h"
#include <math.h>
#include <stdint.h>

float euclidean_distance(float x, float y) {
  return sqrt(pow(x, 2) + pow(y, 2));
}

uint8_t score(coordinate_t coordinate) {

  float dist = euclidean_distance(coordinate.x, coordinate.y);

  if (dist <= 1.0)
    return 10;
  if (dist <= 5.0)
    return 5;
  if (dist <= 10.0)
    return 1;

  return 0;
}
