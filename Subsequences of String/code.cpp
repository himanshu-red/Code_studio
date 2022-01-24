void getSubsequences(int i, int size, string str, string temp, vector<string>&res)
{
    if (i == size)
    {
        if (temp.size() != 0)
        	res.push_back(temp); 
        return; 
    }
    temp.push_back(str[i]); 
    getSubsequences(i+1, size, str, temp, res); 
    temp.pop_back(); 
    getSubsequences(i+1, size, str, temp, res); 
}
vector<string> subsequences(string str){
	
	// Write your code here
    vector<string> res; 
    string temp; 
    getSubsequences(0, str.size(), str, temp, res); 
	return res; 
}
