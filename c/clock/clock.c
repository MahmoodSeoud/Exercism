#include "clock.h"

clock_t clock_create(int hour, int minute) {

  clock_t clock;
  int time_in_miutes =
      ((hour * MINS_IN_HOUR + minute) % MINS_IN_DAY + MINS_IN_DAY) %
      MINS_IN_DAY;
  sprintf(clock.text, "%02d:%02d", time_in_miutes / MINS_IN_HOUR,
          time_in_miutes % MINS_IN_HOUR);
  return clock;
}

clock_t clock_add(clock_t clock, int minute_add) {
  int hours, mins;
  sscanf(clock.text, "%02d:%02d", &hours, &mins);

  return clock_create(hours, mins + minute_add);
}

clock_t clock_subtract(clock_t clock, int minute_subtract) {
  int hours, mins;
  sscanf(clock.text, "%02d:%02d", &hours, &mins);

  return clock_create(hours, mins - minute_subtract);
}
bool clock_is_equal(clock_t a, clock_t b) {

  int a_hour, a_mins;
  int b_hour, b_mins;
  sscanf(a.text, "%02d:%02d", &a_hour, &a_mins);
  sscanf(b.text, "%02d:%02d", &b_hour, &b_mins);

  return a_hour == b_hour && a_mins == b_mins;
}
