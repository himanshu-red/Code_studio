int firstOccurance(vector<int> &v, int start, int end, int k)
{
    if (start > end) return -1; 
    int mid = start + (end - start)/2; 
    if (v[0] == k) return 0; 
    if (v[mid]  == k  && v[mid-1] != k) return mid; 
    if (v[mid] >= k) return firstOccurance(v, start, mid-1, k);
    return firstOccurance(v, mid+1, end, k); 
}

int lastOccurance(vector<int> &v, int start, int end, int k)
{
    if (start > end) return -1; 
    int mid = start + (end - start)/2; 
    if (v[v.size()-1] == k) return v.size()-1; 
    if (v[mid]  == k  && v[mid+1] != k) return mid; 
    if (v[mid] <= k) return lastOccurance(v, mid+1, end, k);
    return lastOccurance(v, start, mid-1, k); 
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    return {firstOccurance(arr,0, n-1,  k), lastOccurance(arr,0, n-1,k)}; 
}
