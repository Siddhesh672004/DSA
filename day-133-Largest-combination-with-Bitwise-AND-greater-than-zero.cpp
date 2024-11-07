class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int maxCount = 0;

        // Check each bit position from 0 to 31 (sufficient for up to 10^6 numbers)
        for (int bit = 0; bit < 32; ++bit) {
            int count = 0;
            for (int num : candidates) {
                // Check if the bit is set in the current number
                if (num & (1 << bit)) {
                    count++;
                }
            }
            // Update maxCount with the maximum count for any bit position
            maxCount = max(maxCount, count);
        }
        
        return maxCount;
        
    }
};