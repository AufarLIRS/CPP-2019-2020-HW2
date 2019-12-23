#include <iostream>

using namespace std;

int minimun_element(int* min, int size)
{
	int min_= min[0];
	for (int i = 0; i < size; i++)
	{
		if (min_ > min[0])
		{
			min = min_[0];
		}
	}
}