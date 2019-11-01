int min_element(int* first, int* last)
{
  int min = *first;
  for (; first != last; ++first)
  {
      if (*first < min)
          min = *first;
  }

  return min;
}
