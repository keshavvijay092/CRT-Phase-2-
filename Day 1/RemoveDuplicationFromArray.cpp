// Remove duplication from array 
  //    option using set 
        //   set < int > st;
        //    int n = nums.size();
        //   for (int i = 0; i < n; i++) {
        //   st.insert(nums[i]);
        //   }
        //   int k = st.size();
        //   int i = 0;
        //   for (int em: st) {
        //    nums[i++] = em;
        //      }
        //   return k;
        // option 2:Single loop no space 
        // int k = 0;
        // int n = nums.size();
        // for(int i=1;i<n;i++)
        // {
        //     if(nums[i]!=nums[k])
        //     {
        //         k++;
        //         nums[k] = nums[i];
        //     }
        // }
        
       
        // return k+1;
    }
};