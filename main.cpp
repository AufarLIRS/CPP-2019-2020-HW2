#include <iostream>
#include "arraychanger.h"


#define ARRAY_SIZE 10

using namespace std;



int main()
{
    int m[ARRAY_SIZE];
    for(int i = 0; i < ARRAY_SIZE; i++)
        m[i] = i;

    rotate(m, m + ARRAY_SIZE - 1);
    for(int i = 0; i < ARRAY_SIZE; i++)
        cout << m[i] << endl;
    return 0;
}
