class Solution {
public:

    // Recursive binary search function
    int binarySearch(vector<int> &nums, int target, int start, int end) {
        // Base case: if the range is invalid, return -1 (not found)
        if(start > end) return -1;

        int mid = (start + end) / 2;  // Calculate middle index

        // If target is found at mid, return mid index
        if(nums[mid] == target) return mid;

        // If target is greater, search in the right half
        if(nums[mid] < target) {
            return binarySearch(nums, target, mid + 1, end);
        }
        // If target is smaller, search in the left half
        else {
            return binarySearch(nums, target, start, mid - 1);
        }
    }

    // Main function to search for target in nums
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int ans = binarySearch(nums, target, start, end);  // Call recursive search
        return ans;  // Return the result
    }
};
