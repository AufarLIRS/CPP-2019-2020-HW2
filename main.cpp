#include <iostream>
#include "ArrayMethods.h"
#include <vector>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Task 1:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << min_element(arr, 5) << endl;
    cout << "-------------" << endl;

    cout << "Task 2:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << min_element((arr + 0), (arr + 4)) << endl;
    cout << "-------------" << endl;


    cout << "Task 3:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotate(arr + 0, arr +4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "-------------" << endl;
}
