class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // option 1 : TC:O(n log n)
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            if(nums[i] != i)
            {
                return i;
            }
        }
        return n;
        // option 2:Better approach 
    //   int n = nums.size();
    //   int totalSum = (n *(n+1))/2;
    //   int sum = 0;
    //   for(int i=0;i<n;i++)
    //   {
    //     sum +=nums[i];
    //   }
    //   int ans = totalSum-sum;
    //   return ans;





    }
};


