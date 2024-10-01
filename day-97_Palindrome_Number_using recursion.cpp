class Solution {
public:
bool checkPalindrome(int start, int end, string &nums){
    
    //base case
    if(start >= end){
        return true;
    }

    //One case solve
    if(nums[start] != nums[end]){
        return false;
    }

    //recursive call
    return checkPalindrome(start+1, end-1, nums);
}
    bool isPalindrome(int x) {
        string nums = to_string(x);
        int start = 0, end = nums.size()-1;

        bool ans = checkPalindrome(start, end, nums);
        return ans;
    }
};