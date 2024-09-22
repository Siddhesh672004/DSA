class Solution {
  public:
    int lps(string str) {
        int n = str.length();
        int p = 0, s = 1, pos = 1;      // Initialize pointers and starting positions
        int count = 0;                  // To track the length of the longest prefix-suffix

        
        while(p < n && s < n){
            if(str[p] == str[s]){       // If characters match
                p++;                    // Move prefix and Suffix pointer
                s++;
                count++;                // Increase the matching count
            }
            else{
                p = 0;           // Reset prefix pointer to the start
                pos++;           // Move to the next position for suffix comparison
                s = pos;         // Update suffix pointer
                count = 0;       // Reset count as there's no match
            }
        }
        return count;       // Return the length of the longest prefix-suffix
    }
};