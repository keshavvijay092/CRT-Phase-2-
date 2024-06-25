class Solution {
public:
    int maximumGap(vector<int>& nums) {
        // option 1:with sorting 
        sort(nums.begin(),nums.end());
        int maxi= INT_MIN;
        if(nums.size() == 1) return 0;
        for(int i =1;i<nums.size();i++)
        {
            int val = abs(nums[i]-nums[i-1]);
            maxi = max(val,maxi); 
        }
        return maxi;
    }


};