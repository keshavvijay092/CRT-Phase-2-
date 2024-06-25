int equalizeArray(vector<int> arr) {
sort(arr.begin(),arr.end());
    
    int n = arr.size();
    if(n == 1) return 0;
    
    int ans = 1;
    int same =1;
    for(int i=1;i<n;i++)
    {
        if(arr[i] == arr[i-1])
        {
            same++;
            ans = max(same,ans);
        }
        else
        {
            same =1;
        }
    }
   
    return n-ans;
}