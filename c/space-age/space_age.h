#ifndef SPACE_AGE_H
#define SPACE_AGE_H

#include <stdint.h>

#define SECONDS_IN_EARTH_YEAR 31557600

typedef enum planet {
  MERCURY,
  VENUS,
  EARTH,
  MARS,
  JUPITER,
  SATURN,
  URANUS,
  NEPTUNE,
} planet_t;

float age(planet_t planet, int64_t seconds);

#endif
