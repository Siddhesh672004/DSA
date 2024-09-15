class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0; // Pointer to track position in string 's'
        
        // Loop through string 't'
        for(int i = 0; i < t.size(); i++) {
            if(t[i] == s[j]) { // If characters match, move pointer in 's'
                j++;
            }
            if(j == s.size()) { // If all characters in 's' are matched
                return true;
            }
        }
        
        return j == s.size(); // Return true if all of 's' is found
    }
};
