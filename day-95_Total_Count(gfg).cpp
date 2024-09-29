
class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int count = 0;      // Initialize counter to store total operations
        
        // Iterate through each element in the array
        for(int i=0; i<arr.size(); i++){
            count += (arr[i] / k);      // Add the number of full divisions by k
            if(arr[i] % k != 0){        // If there is a remainder, one more operation is needed
                count++;
            }
        }
        return count;
    }
};