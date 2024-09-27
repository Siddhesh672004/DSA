class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        
        vector<int> ans;    // To store the result (maximum of each subarray)
        deque<int> dq;      // Deque to store indices of useful elements
        
        for(int i=0; i<arr.size(); i++){
            
            // Remove elements outside the current window
            if(dq.size() && dq.front() == i-k){
                dq.pop_front();
            }
            // Remove elements smaller than the current element from the back of the deque
            while(dq.size() && arr[dq.back()] <= arr[i]){
                dq.pop_back();
            }
            
            // Add the current element's index to the deque
            dq.push_back(i);
            
            // Once we have processed at least k elements, store the max of the current window
            if(i >= k-1){
                ans.push_back(arr[dq.front()]);     // Element at the front is the largest
            }
        }
        return ans;
    }
};