#include <iostream>
#include "Task 1.h"
#include "Task 2.h"
#include "Task 3.h"

using namespace std;

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	cout << "Original array" << endl;
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ' ';
	cout << endl;

	cout << "Task 1: " << minimun_element(arr, 5) << endl;
	cout << endl;

	cout << "Task 2: " << minimun_element(arr, arr + 4) << endl;
	cout << endl;

	cout << "Task 3: " << endl;
	rotate(arr, arr + 4);
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ' ';
	cout << endl;