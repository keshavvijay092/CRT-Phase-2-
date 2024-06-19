class Solution {
public:
    bool check(vector<int>& nums) {
        //  A[i] == B[(i+x) % A.length]

        // option 1:
        // int cnt = 0;
        // int n = nums.size();
        // for(int i =1;i<n;i++)
        // {
        //     if(nums[i-1]>nums[i])
        //     {
        //         cnt++;
        //     }
        // }

        // if(nums[n-1] > nums[0])
        // cnt++;
       
        // if(cnt >1)return false;

        // return true;

        // option 2:modolus approach 
        int cnt = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i] > nums[(i+1)%n])
            {
                cnt++;
            }
        }
          if(cnt >1)return false;

        return true;

    }
};