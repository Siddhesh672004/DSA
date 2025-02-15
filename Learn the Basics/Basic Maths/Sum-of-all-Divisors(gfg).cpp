//Time Complexty:  O(n sqrt(n))
//Space Complexity: O(1)


class Solution {
  public:  
  int totalSum(int num){
      int total = 0;
      
      for(int i=1; i<=sqrt(num); i++){
          if(num % i == 0){
              total += i;
              if((num/i) != i){
                  total += (num/i);
              }
          }
      }
      return total;
  }
  
    int sumOfDivisors(int n) {
        int sum = 0;
        for(int i=1; i<=n; i++){
            sum += totalSum(i);
        }
        return sum;
    }
};