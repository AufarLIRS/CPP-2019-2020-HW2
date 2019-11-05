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
       for(int i =0; i < (last-first)/2;i++){
          int temp = *(last - i);
          *(last - i) = *(first + i);
          *(first + i) = temp;
       }
}

int main()
{
    int m[4]={1,2,3,4};
    cout << min_element(m,4)<< endl;
    cout << min_element(m+0,m+4)<<endl;
    //-------------------------------//
    rotate(m+0,m+4);
    cout << m[0] << " " << m[3] << endl;
}
