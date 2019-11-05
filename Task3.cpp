void rotate (int* first, int* last){
       for(int i =0; i < (last-first)/2;i++){
          int temp = *(last - i);
          *(last - i) = *(first + i);
          *(first + i) = temp;
       }
}
