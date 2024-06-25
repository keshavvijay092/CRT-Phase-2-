class Solution {
public:
    int maxProfit(vector<int>& prices) {
         std::ios_base::sync_with_stdio(false);
        int buy = prices[0];
        int max_profit = 0;
        int n = prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]<buy)
            {
                buy = prices[i];
            }

            if(prices[i]-buy > max_profit)
            {
                max_profit = prices[i]-buy;
            }
        }
            return max_profit;
    }
};