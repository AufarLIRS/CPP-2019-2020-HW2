#include "Task_1.h"

int min_element(int* min, int size)
{
	int min_ = min[0];
	for (int i = 1; i < size; i++)
	{
		if (min_ > min[i]) min_ = min[i];
	}
	return min_;
}
