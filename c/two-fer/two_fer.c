#include "two_fer.h"
#include <stdio.h>
void two_fer(char *buffer, const char *name) {

  if (name) {
    sprintf(buffer, "One for %s, one for me.", name);
  } else
    sprintf(buffer, "One for you, one for me.");
}
