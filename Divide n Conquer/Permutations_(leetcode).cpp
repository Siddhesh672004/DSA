//Time Complexity: O(n * n!)
//Space Complexity:O(n)

class Solution {
public:
    void calculatePermutation(vector<int>& nums, int i, vector<vector<int>>& ans){

         //base case
        if(i >= nums.size()){
            ans.push_back(nums);
            return;
        }

        //Swapping
        for(int j=i; j<nums.size(); j++){
            swap(nums[i], nums[j]);

            //Recursive call
            calculatePermutation(nums, i+1, ans);

            //backtracking -> to recreate the original string 
            swap(nums[i], nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int i = 0;
        vector<vector<int>> ans;

        calculatePermutation(nums, i, ans);
        return ans;
    }
};