class Solution {
public:
    // Helper function to recursively reverse the string from index 'start' to 'end'
    void reverse(vector<char> &s, int start, int end) {
        if (start >= end) {  // Base case: when start meets or exceeds end, stop recursion
            return;
        }

        swap(s[start], s[end]);  // Swap characters at start and end
        reverse(s, start + 1, end - 1);  // Recur with narrowed range
    }

    // Main function to reverse the entire string
    void reverseString(vector<char>& s) {
        reverse(s, 0, s.size() - 1);  // Call the helper with initial indices
    }
};
