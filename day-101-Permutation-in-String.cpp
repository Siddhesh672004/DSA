class Solution {
public:
    bool isMatched(int map1[], int map2[]) {
        for(int i = 0; i < 26; i++) {
            if(map1[i] != map2[i])
                return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        if(m < n) return false;

        int map1[26] = {0};  // Frequency map for s1
        int map2[26] = {0};  // Frequency map for the first window in s2

        // Initialize the frequency maps for the first window
        for(int i = 0; i < n; i++) {
            map1[s1[i] - 'a']++;
            map2[s2[i] - 'a']++;
        }

        // Check the first window
        if(isMatched(map1, map2)) {
            return true;
        }

        // Sliding window approach for the rest of s2
        for(int i = 1; i <= m - n; i++) {
            map2[s2[i - 1] - 'a']--;  // Remove the character that slides out of the window
            map2[s2[i + n - 1] - 'a']++;  // Add the character that slides into the window
            if(isMatched(map1, map2)) {
                return true;
            }
        }

        return false;
    }
};
