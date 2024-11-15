class Solution {
public:

    bool bs(vector<int> &arr, int target){
        int start = 0, end = arr.size()-1;

        while(start <= end){
             int mid = (start+end)/2;
            if(arr[mid] == target){
                return true;
            }
            else if(arr[mid] < target){
                start = mid + 1;
            }
            else if(arr[mid] > target){
                end = mid - 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size();
        for(int i=0; i<matrix.size(); i++){
            if(matrix[i][0] <= target && matrix[i][m-1] >= target){
                return bs(matrix[i], target);
            }
        }
        return false;
    }
};