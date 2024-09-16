class Solution {
  public:
    int maxLength(string str) {
         
        if(str.length() == 0) return 0; // Handle empty string case

        int left = 0, right = 0, maxi = 0;

        // Left to right pass
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '(')   
                left++;         // Increment left counter for '('
            else 
                right++;        // Increment right counter for ')'
            
            if(left == right)
                maxi = max(maxi, left * 2);  // Update max if valid substring
            else if(right > left) {
                left = 0;       // Reset counters if ')' exceeds '('
                right = 0;
            }
        }

        left = 0;
        right = 0;

        // Right to left pass
        for(int i = str.length() - 1; i > 0; i--) {
            if(str[i] == '(')   
                left++;         // Increment left counter for '('
            else
                right++;        // Increment right counter for ')'
            
            if(left == right)
                maxi = max(maxi, left * 2);  // Update max if valid substring
            else if(left > right) {
                left = 0;       // Reset counters if '(' exceeds ')'
                right = 0;
            }
        }

        return maxi;             // Return the maximum valid length
    }
};
