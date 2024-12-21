#include "resistor_color_trio.h"
#include <math.h>

resistor_value_t color_code(resistor_band_t *band_colors) {

  resistor_value_t res;

  uint64_t ohms =
      (band_colors[0] * 10 + band_colors[1]) * pow(10, band_colors[2]);

  if (ohms < KILOOHMS)
    res.unit = OHMS;
  else if (ohms < MEGAOHMS)
    res.unit = KILOOHMS;
  else if (ohms < GIGAOHMS)
    res.unit = MEGAOHMS;
  else
    res.unit = GIGAOHMS;

  if (ohms < KILOOHMS) // If ohms are of unit type OHMS do not divide by unit
    res.value = ohms;
  else
    res.value = ohms / res.unit;

  return res;
}
