class Solution {
public:

    int findMax(vector<int> &nums){
        int maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        return maxi;
    }

    int sumByD(vector<int> &nums, int div){
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += ceil((double)(nums[i]) / (double) (div));
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = findMax(nums);
        int low = 1;

         while(low  <= high){
            int mid = (low+high)/2;
            if(sumByD(nums, mid) <= threshold){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
         }
         return low; 
    }
};