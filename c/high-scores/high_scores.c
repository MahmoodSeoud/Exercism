#include "high_scores.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b) {

  // If a is smaller, positive value will be returned
  return (*(int32_t *)a - *(int32_t *)b);
}

int32_t latest(const int32_t *scores, size_t scores_len) {
  return scores[scores_len - 1];
}

int32_t personal_best(const int32_t *scores, size_t scores_len) {
  int32_t max = 0;
  for (size_t i = 0; i < scores_len; i++) {
    if (scores[i] > max)
      max = scores[i];
  }

  return max;
}

size_t personal_top_three(const int32_t *scores, size_t scores_len,
                          int32_t *output) {

  int32_t scores_copy[scores_len];
  memcpy(scores_copy, scores, scores_len * sizeof(int32_t));
  qsort(scores_copy, scores_len, sizeof(int32_t), comp);

  int count = 0;
  for (int i = scores_len - 1; i >= 0; i--) {
    if (count < 3) {
      output[count] = scores_copy[i];
      count++;
    }
  }

  return count;
}
