#include "space_age.h"

double planet_orbit_times[8] = {0.2408467, 0.61519726, 1.0,       1.8808158,
                                11.862615, 29.447498,  84.016846, 164.79132};

float age(planet_t planet, int64_t seconds) {
  if (planet < 0 || 7 < planet) // Check for valid boundaries
    return -1.0;

  return seconds / (planet_orbit_times[planet] * SECONDS_IN_EARTH_YEAR);
}
