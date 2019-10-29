#include "ArrFunctions.h"

int min_element(int *m, int size) {
  int min = *m;
  for (int i = 1; i < size; i++)
    if (m[i] < min)
      min = m[i];
  return min;
}
