class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int l = 0;

        for (int i = 1; i < prices.size(); i++) {
            int profit = prices[i] - prices[l];
            if (profit > 0) {
                max_profit = max(profit, max_profit);
            } else {
                l = i;
            }
        }

        return max_profit;
    }
};
