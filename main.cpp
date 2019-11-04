#include <iostream>

using namespace std;

int min_element (int* m, int size){
    int min = m[0];
    for (int i = 0; i < size; i++){
        if(min > m[i]){
            min = m[i];
        }
    }
    return min;
}

int min_element (int* first, int* last){
    int min = *first;
    for (;first != last; ++first){
        if (*first < min)
            min = *first;
    }
    return min;

}

void rotate (int* first, int* last){

}

int main()
{

}
