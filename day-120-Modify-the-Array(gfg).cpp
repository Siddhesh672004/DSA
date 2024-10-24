class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            if(arr[i] != 0 && arr[i] == arr[i+1]){
                arr[i] = arr[i] * 2;
                arr[i+1] = 0;
            }
        }
        
         int i = 0;
         for(int j=0; j<n; j++){
             if(arr[j] != 0){
                 swap(arr[i], arr[j]);
                 i++;
             }
         }
         return arr;
        
    }
};