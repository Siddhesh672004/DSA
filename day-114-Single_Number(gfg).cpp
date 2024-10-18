class Solution {
  public:
    int getSingle(vector<int>& arr) {
        
    map<int, int> mp;
        
        for(int num : arr){
            mp[num]++;
        }
        
        for(auto pair: mp){
            if(pair.second % 2 != 0){
                return pair.first;
            }
        }
        return -1;
    }
};