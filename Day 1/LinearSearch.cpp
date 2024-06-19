 int searchInSorted(int arr[], int N, int K) 
    { 
    
    //method1:   Linear Search 
    // for(int i=0;i<N;i++)
    // {
    //     if(arr[i] == K)
    //     {
    //         return 1;
    //     }
    // }
    // return -1;
    
    // option 2:Binary Search 
    int s = 0;
    int e = N-1;
    
    while(s<=e)
    {
        long long mid = s + (e-s)/2;
        if(arr[mid] ==K) return 1;
        else if(arr[mid] > K) e = mid-1;
        else s = mid+1;
    }
    return -1;
    }
};