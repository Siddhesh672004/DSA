class Solution {
public:
    int rob(vector<int>& nums) {
        
        if (nums.empty()) return 0;
        if (nums.size() == 1) return nums[0];

        int prev2 = 0, prev1 = 0, curr = 0;

        for (int num : nums) {
            curr = max(prev1, prev2 + num);
            prev2 = prev1;
            prev1 = curr;
        }

        return curr;

        
    }
};