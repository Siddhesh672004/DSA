class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int l = 0, h = arr.size()-1;
        int n = arr.size();
        int sum = 0;
        while(l < h){
            sum += arr[h] - arr[l];
            sum += arr[h] - arr[l+1];
            l++; h--;
        }
        sum += arr[n/2] - arr[0];
        return sum;
    }
};
