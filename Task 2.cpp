#include <iostream>

using namespace std;

int minimum_element(int* first_elem, int* last_elem) // first - указатель на первый элемент массива, last - указатель на последний элемент массива
{
	int min = *first_elem;

	for (; first_elem <= last_elem; first_elem++) {
		if (*first_elem < min)
		{
			min = *first_elem;
		}
		return min;
	}
}
