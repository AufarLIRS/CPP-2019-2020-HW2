#include <iostream>
using namespace std;

void rotate(int* first_elem, int* last_elem)
{
	for (int i = 0; i < (last_elem - first_elem + 1) / 2; i++)
	{
		auto temp_ = *(first_elem + i);
		*(first_elem + i) = *(last_elem - i);
		*(last_elem - i) = temp_;
	}
}