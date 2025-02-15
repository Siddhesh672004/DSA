//Time Complexty:  O(n)
//Space Complexity: O(1)


class Solution {
  public:
    int sumOfDivisors(int n) {
        int sum = 0;
        
        for(int i = 1; i <= n; i++) {
            sum += (n / i) * i;  // Efficient divisor sum formula
        }
        
        return sum;
    }
};