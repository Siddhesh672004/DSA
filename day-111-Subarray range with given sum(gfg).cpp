class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        unordered_map<int, int> mm;
        int ans = 0, sum = 0;
        for(int x: arr){
            sum += x;
            if(sum == tar) ans++;
            if(mm.find(sum - tar) != mm.end()) ans+= mm[sum-tar];
            mm[sum]++;
        }
        return ans;
    }
};