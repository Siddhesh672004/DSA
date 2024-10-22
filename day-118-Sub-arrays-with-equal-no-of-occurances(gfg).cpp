class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        // code here
       unordered_map<int, int> mp;
        int count = 0;
        int ans = 0;
        mp[0] = 1;  // Initializing the map with count 0 having one occurrence.

        for (int i : arr) {
            if (i == x) {
                count++;
            } else if (i == y) {
                count--;
            }

            if (mp.find(count) != mp.end()) {
                ans += mp[count];  // Adding the occurrences of current count.
            }
            
            mp[count]++;
        }
        
        return ans;
    }
};