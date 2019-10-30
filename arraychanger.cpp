#include <arraychanger.h>
int min_element(int* m, int size)
{
    int minValue = *m;
    for(int i = 1; i < size; i++)
        if(m[i] < minValue)
            minValue = m[i];

    return minValue;
}

int min_element(int* first, int* last)
{
    int minValue = *first;
    for(int i = 1; i < last-first; i++)
        if(first[i] < minValue)
            minValue = first[i];

    return minValue;
}

void rotate(int* first, int* last)
{
    int tmp;
    for(int i = 0; i < (last - first) / 2; i++){
        tmp = *(first + i);
        *(first + i) = *(last - i);
        *(last - i) = tmp;
    }
}

