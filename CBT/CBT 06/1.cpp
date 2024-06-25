vector<int> closestNumbers(vector<int> arr) {
int diff = INT_MAX;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++)
    {
        diff = min(diff,abs(arr[i]-arr[i-1]));
    }
    cout<<diff;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if( abs(arr[i]-arr[j]) == diff)
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
            else
            {
                  break;
            }
        }
    }
    return ans;
}