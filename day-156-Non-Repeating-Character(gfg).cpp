class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char, int> freq;

        // Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        // Find the first non-repeating character
        for (char c : s) {
            if (freq[c] == 1) {
                return c;
            }
        }

        // If no non-repeating character found
        return '$';
    }
};