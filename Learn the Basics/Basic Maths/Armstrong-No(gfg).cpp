//Time Complexity:  O(log n)
//Space Complexity: O(1)

class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp = n;
        int sum = 0;
        
        while(n > 0){
            int digit = n % 10;
            sum = sum + (digit*digit*digit);
            n = n/10;
        }
        if(temp == sum) return true;
        
        return false;
    }
};