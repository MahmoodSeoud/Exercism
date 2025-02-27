#include "binary_search.h"

const int *binary_search(int value, const int *arr, size_t length) {
  if (length == 0)
    return NULL;

  int low, high;
  low = 0;
  high = length - 1;
  int mid;
  while (low <= high) {
    mid = low + (high - low) / 2;
    if (arr[mid] == value)
      return &arr[mid]; /* match found */
    if (arr[mid] < value)
      low = mid + 1;
    else
      high = mid - 1;
  }

  return NULL; /* no match */
}
