class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        // Binary search
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            // If the middle element is greater than the last element, search in the right half
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            }
            // Otherwise, search in the left half
            else {
                right = mid;
            }
        }
        
        // Left will point to the minimum element
        return nums[left];
    }
};