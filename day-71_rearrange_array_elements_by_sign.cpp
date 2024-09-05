class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size();    // Find the size of the input vector "nums"
        vector<int> ans(n, 0);  // Create a new vector "ans" of size 'n', initialized with 0, to store the result
        int pos = 0, neg = 1;   // Set two indexes: "pos" for positive numbers starting at index 0, "neg" for negative numbers starting at index 1

        // Loop through each number in the input vector "nums"
        for(int i = 0; i < n; i++) {
            if(nums[i] < 0) {              // If the current number is negative
                ans[neg] = nums[i];        // Place it at the next available odd index (neg) in the "ans" vector
                neg += 2;                  // Move the "neg" pointer two steps ahead to the next odd index
            }
            else {                         // If the current number is positive
                ans[pos] = nums[i];        // Place it at the next available even index (pos) in the "ans" vector
                pos += 2;                  // Move the "pos" pointer two steps ahead to the next even index
            }
        }
        
        return ans;  // Return the rearranged vector "ans"
    }
};

