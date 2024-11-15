class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int maxi = INT_MIN;
        int secondMax = INT_MIN;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] > maxi){
                secondMax = maxi;
                maxi = max(maxi, arr[i]);
            }
            else if(arr[i] > secondMax && arr[i] != maxi){
                secondMax = arr[i];
            }
        }
        return (secondMax == INT_MIN) ? -1 : secondMax;
    }
};