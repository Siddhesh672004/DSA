class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        
        vector<string> v;       // Vector to store words
        string word = "";       // Temp string to build words
        
        for(int i=0; i<str.size(); i++){
            // If character is not a dot, add it to the current word
            if(str[i] != '.')   word += str[i];
            else{
                // If character is a dot, store the current word and reset it
                v.push_back(word);
                word = "";
            }
        }
        
        string ans = "";
        // Add the last word to the vector
        
        v.push_back(word);
        
        // Loop through the vector of words from the end to reverse
        for(int i=v.size()-1; i>=0; i--){
            ans += v[i];
            // Add a dot between words, except for the last word
            if(i != 0)  ans += ".";
        }
        
        return ans;     // Return the reversed string
        
    }
};