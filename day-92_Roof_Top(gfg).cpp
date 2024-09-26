class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        
        int count = 0, maxi = 0; 
        
        
        for(int i=1; i<arr.size(); i++){
            // If the current building is taller than the previous one
            if(arr[i] > arr[i-1]){
                count++;                        // Increase the step count
                maxi = max(maxi, count);        // Update maximum step count
            }
            else{
                count = 0;                      // Reset count if altitude doesn't increase
            }
        }
        return maxi;                            // Return the maximum number of consecutive steps
    }
};