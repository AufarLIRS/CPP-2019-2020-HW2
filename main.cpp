#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array: " << endl;
    for (int i = 0; i < 5; i++)
        cout << arr[i] << ' ';
    cout << endl;

    cout << "Task1: " << min_element(arr, 5) << endl;

    cout << "Task2: " << min_element(arr, arr+4) << endl;

    cout << "Task3: " << endl;
    rotate(arr, arr+4);
    for (int i=0; i < 5; i++)
        cout << arr[i] << ' ';

    return 0;
}
