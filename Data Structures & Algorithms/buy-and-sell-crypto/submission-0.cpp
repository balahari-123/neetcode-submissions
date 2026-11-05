class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowPrice = prices[0];
        int profitAns = 0;
        for(int i = 1; i < prices.size(); i++){
            int profit = prices[i] - lowPrice;
            profitAns = max(profitAns, profit);
            lowPrice = min(lowPrice, prices[i]);
        }
        return profitAns;
    }
};
