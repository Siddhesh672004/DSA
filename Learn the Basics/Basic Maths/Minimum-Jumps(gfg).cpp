//Time Complexity: O(1)
//Space Complexity: O(1)

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        int maxi = 0;
        int choice = 0;
        int jumps = 0;
        
        for(int i=0; i<n-1; i++){
            maxi = max(maxi, arr[i]+i);
            if(choice == i){
                choice = maxi;
                jumps++;
            }
        }
        if(choice >= n-1) return jumps;
        return -1;
    }
};