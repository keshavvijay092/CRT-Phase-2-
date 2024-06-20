// GFG:MaxElement in an array 

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        option 1 is Sorting
        sort(arr.begin(),arr.end());
        return arr[n-1];
        
        option 2:without sorting 
        int maxi =arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>maxi)
            {
                maxi = arr[i];
            }
        }
        return maxi;
        
        option 3:With build in max Function 
        int maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi = max(arr[i],maxi);
        }
        return maxi;
    }
};