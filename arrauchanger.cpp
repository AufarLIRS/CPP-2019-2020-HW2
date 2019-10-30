#include <arraychanger.h>
int min_element(int* m, int size)
{
    int toReturn = *m;
    for(int i = 1; i < size; i++)
        if(m[i] < toReturn)
            toReturn = m[i];

    return toReturn;
}

int min_element(int* first, int* last)
{
    int toReturn;
    for(int i = 0; i < last-first; i++)
        if(first[i] < toReturn)
            toReturn = first[i];

    return toReturn;
}

void rotate(int* first, int* last)
{
    int* new_array = new int[last-first];
    for(int i = 0; i < last-first; i++)
        new_array[i]=*(last-i);

    for(int i = 0; i < last-first; i++)
        first[i]=*(new_array + (last - first - i) );
}
