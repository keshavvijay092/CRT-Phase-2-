class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // option 1 : two loop everycase check 
       vector<int>result;
       int n = nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                int ans = nums[i] + nums[j];
                if(ans == target){
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;

        // option 2:now use map and store element and check 

        unordered_map<int,int>mp;
        int n = nums.size();

       for(int i=0;i<n;i++)
       {
       int rem = target-nums[i];
        if(mp.count(rem))
        {
            return {mp[rem],i};
        }
        mp[nums[i]]= i;
       }
    return {};
    }
};