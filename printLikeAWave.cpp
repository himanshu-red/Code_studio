vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
   bool reversed = false; 
    vector<int> v; 
    for (int i = 0; i< mCols; i++)
    {
            for (int j = 0; j<nRows; j++)
            {
                if(!(reversed))
                	v.push_back(arr[j][i]); 
                else 
			v.push_back(arr[nRows-j-1][i]) ; 
            }
        if (reversed)
            reversed = false; 
        else 
            reversed = true; 
	}
        return v; 
}
