class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int buy = prices[0], profit = 0;
        
        for(int i=1; i<prices.size(); i++){
            if(prices[i] <= buy){
                buy = prices[i];
            }
            else{
                profit = max(profit, prices[i] - buy);
            }
        }
        return profit;
    }
};