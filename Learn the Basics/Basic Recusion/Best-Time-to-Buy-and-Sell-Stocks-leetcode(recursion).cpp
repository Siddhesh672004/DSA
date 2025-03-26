class Solution {
    public:
    
        void findMaxProfit(vector<int>& prices, int i, int& minPrice, int& maxProfit){
            //base case
            if(i == prices.size()){
                return;
            }
            
            //One case solve
            if(minPrice > prices[i]){
                minPrice = prices[i];
            }
    
            int todaysProfit = prices[i] - minPrice;
            if(todaysProfit > maxProfit) maxProfit = todaysProfit;
    
            //RE
            findMaxProfit(prices, i+1, minPrice, maxProfit);
        }
    
        int maxProfit(vector<int>& prices) {
            int minPrice = INT_MAX;
            int maxProfit = INT_MIN;
    
            findMaxProfit(prices, 0, minPrice, maxProfit);
            return maxProfit;
        }
    };