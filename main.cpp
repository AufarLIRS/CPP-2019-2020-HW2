#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array1: " << endl;
    for (int i = 0; i < 5; i++)
        cout << arr[i] << ' ';
    cout << endl;

    int array[6] = {6, 5, 4, 3, 2, 1};
    cout << "Array2: " << endl;
    for (int i = 0; i < 6; i++)
        cout << array[i] << ' ';
    cout << endl;
    cout << endl;

    cout << "Task1 for Array1: " << min_element(arr, 5) << endl;
    cout << "Task1 for Array2: " << min_element(array, 6) << endl;
    cout << endl;

    cout << "Task2 for Array1: " << min_element(arr, arr+4) << endl;
    cout << "Task2 for Array2: " << min_element(array, array+5) << endl;
    cout << endl;

    cout << "Task3 for Array1: " << endl;
    rotate(arr, arr+4);
    for (int i=0; i < 5; i++)
        cout << arr[i] << ' ';
    cout << endl;
    cout << "Task3 for Array2: " << endl;
    rotate(array, array+5);
    for (int i=0; i < 6; i++)
        cout << array[i] << ' ';

    return 0;
}
