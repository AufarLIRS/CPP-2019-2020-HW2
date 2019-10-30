void rotate (int* first, int* last)
{
    for (int i = 0; i < (last-first+1)/2; i++)
    {
        int temp = *(first+i);
        *(first+i) = *(last-i);
        *(last-i) = temp;
    }
}
