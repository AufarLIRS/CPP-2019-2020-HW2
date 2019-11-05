#include <iostream>
#include "arrtasks.h"

using namespace std;

int main()
{
    int m[5]={1,2,3,4,0};
    cout << min_element(m,5)<< endl;
    cout << min_element(m+0,m+5)<<endl;
    //-------------------------------//
    rotate(m+0,m+4);
    cout << m[0] << " " << m[3] << endl;
}
