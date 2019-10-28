void rotate(int *first, int *last) {
  for (; first < last; first++, last--) {
    auto temp = *first;
    *first = *last;
    *last = temp;
  }
}
