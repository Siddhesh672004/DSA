class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        
        int n = arr.size();     // Get the total number of stones
        vector<int> dp(n, INT_MAX);      // Initialize the dp array with max values
        dp[0] = 0;      // No cost to stay on the first stone
        
        // Loop through each stone
        for(int i=0; i<n; i++){
            
            // Try jumping from stone i to i+1, i+2, ..., i+k
            for(int j=1; j<=k && i+j<n; j++){
                 // Update the dp value for the destination stone
                dp[i+j] = min(dp[i+j], dp[i] + abs(arr[i] - arr[i+j]));
            }
        }
        return dp[n-1];     // Return the minimum cost to reach the last stone
    }
};