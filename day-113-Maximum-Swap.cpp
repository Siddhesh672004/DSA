class Solution {
public:
    int maximumSwap(int num) {
        // Convert the number to a string (or list of digits)
        string numStr = to_string(num);
        int n = numStr.size();
        
        // Create an array to store the last occurrence index of each digit (0-9)
        vector<int> last(10, -1);
        
        // Populate the last occurrence of each digit
        for (int i = 0; i < n; i++) {
            last[numStr[i] - '0'] = i;
        }
        
        // Traverse the number from left to right
        for (int i = 0; i < n; i++) {
            // Check if there's a larger digit that appears after the current one
            for (int d = 9; d > numStr[i] - '0'; d--) {
                if (last[d] > i) {
                    // Swap the current digit with the larger one found
                    swap(numStr[i], numStr[last[d]]);
                    // Convert back to integer and return the result
                    return stoi(numStr);
                }
            }
        }
        
        // If no swap improves the number, return the original number
        return num;
    }
};