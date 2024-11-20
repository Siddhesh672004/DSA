class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int n = arr.size();
        unordered_map<int, int> freq;
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        
        for(auto it: freq){
            if(it.second > n/3){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};