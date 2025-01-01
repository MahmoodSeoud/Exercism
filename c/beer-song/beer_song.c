#include "beer_song.h"
#include <stdbool.h>
#include <stdint.h>

#define OrWhiteSpace(S) (S > 1 ? "bottles" : "bottle")

void recite(uint8_t start_bottles, uint8_t take_down, char **song) {

  printf("%d", take_down);
  for (uint8_t i = 0; i < take_down; i++, song += 3, start_bottles--) {

    if (start_bottles == 0) {
      sprintf(song[0],
              "No more bottles of beer on the wall, no more bottles of beer.");
      sprintf(
          song[1],
          "Go to the store and buy some more, 99 bottles of beer on the wall.");
      break;
    }

    sprintf(song[0], "%d %s of beer on the wall, %d %s of beer.", start_bottles,
            OrWhiteSpace(start_bottles), start_bottles,
            OrWhiteSpace(start_bottles));

    if (start_bottles - 1 > 0) {
      sprintf(song[1],
              "Take one down and pass it around, %d %s of beer on the wall.",
              start_bottles - 1, OrWhiteSpace(start_bottles - 1));
    } else {
      sprintf(song[1], "Take it down and pass it around, no more bottles of "
                       "beer on the wall.");
    }
    song[2][0] = '\0';
  }
}
