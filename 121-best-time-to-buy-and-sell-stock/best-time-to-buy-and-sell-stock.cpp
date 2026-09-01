class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        // for (int price : prices){
        for (int i = 0; i < prices.size(); i++){
            int price = prices[i];
            if (price < minPrice){
                minPrice = price;
            }

            if (price - minPrice > maxProfit){
                maxProfit = price - minPrice;
            }
        }
        return maxProfit;
    }
};