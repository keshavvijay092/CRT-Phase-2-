class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        // option 1: Create a set insert both element value in it and then insert those 
        // element in the vector ans 
        
    //   set<int>st;
    //   for(int i=0;i<n;i++)
    //   {
    //       st.insert(arr1[i]);
    //   }
    //   for(int i=0;i<m;i++)
    //   {
    //       st.insert(arr2[i]);
    //   }
    //   vector<int>ans;
    //   for(auto em:st)
    //   {
    //       ans.push_back(em);
    //   }
       
    // //   reverse the ans vector 
    // sort(ans.begin(),ans.end());
    // return ans;
    // TC:O(nlogn)
    // SC:O(n)
       
        // option 2: two pointer approach 
        if(arr1[0]>arr2[0]) return findUnion(arr2,arr1,m,n);

     vector<int> ans = {arr1[0]};
        
        int i=1;
        int j=0;

        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j])
            {
                if(ans.back() != arr1[i])
                {
                    
                ans.push_back(arr1[i]);
                }
                
                i++;
            }
            else
            {
                if(ans.back() != arr2[j])
                {
                    
                ans.push_back(arr2[j]);
                }
             j++;
            }
        }
            while(i<n)
        {
            if(ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        
        while(j<m){
            if(ans.back() != arr2[j])
            {
                ans.push_back(arr2[j]);
            }
            j++;
        }

        return ans;
        // TC:O(N);
        // SC:O(1);
        
    }
};