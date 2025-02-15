//Time Complexity: O(log x)
// Space Complexity: O(log x)

class Solution {
public:
    bool isPalindrome(int x) {
        string nums = to_string(x);
        int low = 0, high = nums.size()-1;
        while(low <= high){
            if(nums[low] == nums[high]){
                low++;
                high--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};