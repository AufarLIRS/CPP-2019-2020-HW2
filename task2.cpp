int min_element (int* first, int* last)
{
    int min = *first;
    for(int* i = first; i < last+1; i++)
    {
        if (*i < min)
            min = *i;
    }
    return min;
}
