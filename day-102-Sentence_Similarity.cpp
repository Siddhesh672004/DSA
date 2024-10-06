class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        // Split both sentences into words using space
        vector<string> words1 = split(sentence1);
        vector<string> words2 = split(sentence2);
        
        // Initialize pointers for prefix and suffix matching
        int i = 0, j = 0;
        
        // Find the common prefix
        while (i < words1.size() && i < words2.size() && words1[i] == words2[i]) {
            i++;
        }
        
        // Find the common suffix
        while (j < words1.size() - i && j < words2.size() - i && words1[words1.size() - 1 - j] == words2[words2.size() - 1 - j]) {
            j++;
        }
        
        // Check if all the words in one sentence are matched
        return i + j == min(words1.size(), words2.size());
    }

private:
    // Helper function to split the sentence into words
    vector<string> split(const string& sentence) {
        vector<string> result;
        string word;
        istringstream stream(sentence);  // Input string stream to handle the splitting
        while (stream >> word) {         // Split by spaces
            result.push_back(word);
        }
        return result;
    }
};
