class Solution {
  public:
  
    void reverseArr(vector<int> &arr, int start, int end){
        while(start < end){
            swap(arr[start], arr[end]);
            start++; end--;
        }
    }

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        if(d == 0) return;
        d = d % n;
        int start = 0, end = arr.size() - 1;
        
        reverseArr(arr, 0, d-1);
        reverseArr(arr, d, n-1);
        reverseArr(arr, start, end);
    }
};