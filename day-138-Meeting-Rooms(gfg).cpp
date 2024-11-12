class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        //sort intervals based on start time
        sort(arr.begin(), arr.end());
        int n = arr.size();
        
        //check if any intervals overlap each other
        for(int i=0; i<n-1; i++){
            //If end time of current interval is greater than start time of next, return false
            if(arr[i][1] > arr[i+1][0]){
                return false;
            }
        }
        //Return true if no overlapping intervals are found
        return true;
    }
};