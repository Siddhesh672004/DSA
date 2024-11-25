class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int prefix = 1, suffix = 1;
        int maxi = INT_MIN;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;
            
            prefix *= arr[i];
            suffix *= arr[n-i-1];
            
            maxi = max(maxi, max(prefix, suffix));
        }
        return maxi;
    }
};