class Solution {
  public:
  
  void computeLPSArray(string& pat, int m, vector<int>& lps) {
        int length = 0;
        lps[0] = 0; // LPS of first character is always 0
        int i = 1;
        
        while (i < m) {
            if (pat[i] == pat[length]) {
                length++;
                lps[i] = length;
                i++;
            } else {
                if (length != 0) {
                    length = lps[length - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
  
    vector<int> search(string& pat, string& txt) {
        // code here
        int m = pat.size();
        int n = txt.size();
        
        // Step 1: Create LPS array
        vector<int> lps(m, 0);
        computeLPSArray(pat, m, lps);
        
        vector<int> result;
        int i = 0; // index for txt
        int j = 0; // index for pat
        
        while (i < n) {
            if (pat[j] == txt[i]) {
                i++;
                j++;
            }
            
            if (j == m) {
                result.push_back(i - j);
                j = lps[j - 1];
            } else if (i < n && pat[j] != txt[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return result;
    }
};