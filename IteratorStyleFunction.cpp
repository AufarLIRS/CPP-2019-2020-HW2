#include "ArrFunctions.h"

int min_element(int *first, int *last) {
  int min = *first;
  for (; first != last + 1; first++)
    if (*first < min)
      min = *first;
  return min;
}
