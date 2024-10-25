class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        
        sort(arr.begin(), arr.end());
        vector<int> ans;
        int l = 0, h = arr.size()-1;
        
        while(l < h){
            ans.push_back(arr[h]);
            ans.push_back(arr[l]);
            h--; l++;
        }
        if(l == h){
            ans.push_back(arr[h]);
        }
        return ans;
    }
};