class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // option 1:XOR
        int ans = nums[0];
        int n = nums.size();

        for(int i=1;i<n;i++)
        {
            ans = nums[i]^ans;
        }
        return ans;
        // option 2:map
        // map<int,int>mp;
        // int n = nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     mp[nums[i]]++;
        // }

        // for(auto em:mp){
        //     if(em.second == 1) return em.first;
        // }
        // return nums[0];
        

    }
};