#include "FunctionWithArrAndSize.cpp"
#include "IteratorStyleFunction.cpp"
#include "RotateFunction.cpp"
#include <iostream>

using namespace std;

int main() {
  int arr[5] = {5, 4, 3, 2, 1};
  cout << "Origin array: ";
  for (auto el : arr)
    cout << el << " ";
  cout << endl;
  cout << "Arr and size func min = " << min_element(arr, 5) << endl;
  cout << "Iterator style func min = " << min_element(arr, arr + 4) << endl;
  rotate(arr, arr + 4);
  cout << "Rotation: ";
  for (auto el : arr)
    cout << el << " ";
  return 0;
}
