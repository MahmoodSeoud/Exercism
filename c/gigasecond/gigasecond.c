#include "gigasecond.h"
#include <time.h>

void gigasecond(time_t input, char *output, size_t size) {
  time_t g = input + ONE_GIGASECOND;
  struct tm *time_info = gmtime(&g);
  strftime(output, size, "%Y-%m-%d %H:%M:%S", time_info);
}
