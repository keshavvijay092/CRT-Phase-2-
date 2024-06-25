class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcnt = INT_MIN;
        int cnt =0;
        int n = nums.size();
     for(int i=0;i<n;i++)
     {
        if(nums[i] == 1)
        {
            cnt++;
        }
        else
        {
            maxcnt = max(cnt,maxcnt);
            cnt = 0;
        }
     }   
     if(maxcnt>cnt)
     return maxcnt;
     else 
     return cnt;
    }
};