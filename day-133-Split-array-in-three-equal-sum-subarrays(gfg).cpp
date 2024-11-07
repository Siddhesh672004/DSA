class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
        int n = arr.size();
        int total = 0;
        
        // Calculate the total sum of the array
        for (int num : arr) {
            total += num;
        }
        
        // If the total sum is not divisible by 3, return {-1, -1}
        if (total % 3 != 0) {
            return {-1, -1};
        }
        
        int target = total / 3;
        int current = 0, count = 0;
        int i = -1, j = -1;
        
        // Traverse the array to find the split points
        for (int k = 0; k < n; ++k) {
            current += arr[k];
            
            // Check for the first segment
            if (current == target && count == 0) {
                i = k;
                count++;
                current = 0;  // Reset for the next segment
            }
            // Check for the second segment
            else if (current == target && count == 1) {
                j = k;
                count++;
                break;
            }
        }
        
        // Return the indices if valid, else {-1, -1}
        if (count == 2 && j != -1 && i < j) {
            return {i, j};
        }
        return {-1, -1};
    }
};