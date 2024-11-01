class Solution {
public:
    string makeFancyString(string s) {
        string result = "";
        int count = 1;

        // Start with the first character in the result
        result += s[0];

        // Iterate through the string starting from the second character
        for (int i = 1; i < s.size(); i++) {
            // If the current character is the same as the previous one
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                // Reset the count if the current character is different
                count = 1;
            }

            // Only add the character if it's not the third consecutive character
            if (count < 3) {
                result += s[i];
            }
        }

        return result;
    }
};
