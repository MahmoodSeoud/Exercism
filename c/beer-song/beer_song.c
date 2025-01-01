#include "beer_song.h"
#include <stdbool.h>
#include <stdint.h>

#define BOTTLE_VS_BOTTLES(S) (S > 1 ? "bottles" : "bottle")

#define X_BEER "%d %s of beer on the wall, %d %s of beer."
#define NO_MORE_BOTTLES                                                        \
  "No more bottles of beer on the wall, no more bottles of beer."
#define GO_TO_STORE                                                            \
  "Go to the store and buy some more, 99 bottles of beer on the wall."
#define TAKE_NOT_LAST                                                          \
  "Take one down and pass it around, %d %s of beer on the wall."
#define TAKE_LAST                                                              \
  "Take it down and pass it around, no more bottles of beer on the wall."

void recite(uint8_t start_bottles, uint8_t take_down, char **song) {

  printf("%d", take_down);
  for (uint8_t i = 0; i < take_down; i++, song += 3, start_bottles--) {

    if (start_bottles == 0) {
      sprintf(song[0], NO_MORE_BOTTLES);
      sprintf(song[1], GO_TO_STORE);
      return;
    }

    sprintf(song[0], X_BEER, start_bottles, BOTTLE_VS_BOTTLES(start_bottles),
            start_bottles, BOTTLE_VS_BOTTLES(start_bottles));

    if (start_bottles - 1 > 0) {
      sprintf(song[1], TAKE_NOT_LAST, start_bottles - 1,
              BOTTLE_VS_BOTTLES(start_bottles - 1));
    } else {
      sprintf(song[1], TAKE_LAST);
    }
    song[2][0] = '\0';
  }
}
