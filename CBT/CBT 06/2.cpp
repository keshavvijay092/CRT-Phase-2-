int n = a.size();
    int q= queries.size();
    
    vector<int>rotated(n);
k = k % n;
        for(int i=0;i<n;i++)
    {
            
         rotated[ (i+k) % n ] = a[i];
    }
    
        
    // return rotated;
    vector<int>ans(q);
    for(int i=0;i<q;i++)
    {
        ans[i]= rotated[queries[i]];
    }
    return ans;