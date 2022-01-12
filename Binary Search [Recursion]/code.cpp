int getIndex(int *v, int start, int end, int val)
{
    int mid = start + (end - start) / 2; 
    if (v[mid] == val ) 
        return mid;
    if (start > end)
        return -1; 
    if (val < v[mid] )
        return getIndex(v, start, mid-1, val); 
    return getIndex(v, mid+1, end, val); 
}
int binarySearch(int *input, int n, int val)
{
    return getIndex(input, 0, n-1, val); 
}
