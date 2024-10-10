class Solution {
public:
    int maxDistance(std::vector<int> &arr) {
        std::unordered_map<int, int> firstOccurrence;
        int maxDist = 0;
        
        for (int i = 0; i < arr.size(); ++i) {
            // If this is the first time we see the element, record the index
            if (firstOccurrence.find(arr[i]) == firstOccurrence.end()) {
                firstOccurrence[arr[i]] = i;
            }
            // Calculate distance between the current index and the first occurrence
            maxDist = std::max(maxDist, i - firstOccurrence[arr[i]]);
        }
        
        return maxDist;
    }
};