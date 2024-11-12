class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int depth = 0; // Track the depth of parentheses

        for (char c : s) {
            if (c == '(') {
                // If depth is greater than 0, this '(' is not outer, so we add it
                if (depth > 0) {
                    result += c;
                }
                depth++; // Increase depth for '('
            } else {
                depth--; // Decrease depth for ')'
                // If depth is greater than 0 after decreasing, this ')' is not outer
                if (depth > 0) {
                    result += c;
                }
            }
        }

        return result; 
    }
};