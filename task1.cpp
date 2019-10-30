int min_element (int* m, int size)
{
    int* min = m;
    for(int i=0; i < size-1; i++) //
    {
        if (*min > *(m+i))
            min = m+i;
    }
    return *min;
}
