class Solution {
public:
    int pairsum(vector<int> &arr) {
        // Initialize the largest and second largest to minimal values
        int largest = INT_MIN;
        int second_largest = INT_MIN;
        
        // Traverse the array
        for (int num : arr) {
            if (num > largest) {
                // Update second largest before updating largest
                second_largest = largest;
                largest = num;
            } else if (num > second_largest) {
                // Update second largest if num is less than largest but greater than second largest
                second_largest = num;
            }
        }
        
        // Return the sum of the largest and second largest
        return largest + second_largest;
    }
};
