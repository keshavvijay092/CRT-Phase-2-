class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //     int i = 0;
    //    int n = nums.size();
    //    vector<int> ans = nums;
    //   while(i<n)
    //   {
    //     int val = ( i+k)%n;
    //     nums[val] = ans[i];
    //     i++;
    // }
    // return ;

    // option 2:3 line optimised code 
    int n=nums.size();
    int p=k%n;
        reverse(nums.begin() , nums.begin()+n-p);
        reverse(nums.begin()+n-p,nums.end());
        reverse(nums.begin(), nums.end());  
    }
    
};