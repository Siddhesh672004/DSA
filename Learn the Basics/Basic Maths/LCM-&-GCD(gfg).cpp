//Time Complexty:  O(log(min(a, b))
//Space Complexity: O(1)

class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int x=a, y=b;
        int gcd = 1;
        vector<int> ans;
        while(a > 0 && b > 0){
            if(a > b) a = a % b;
            else b = b % a;
        }
        if(a == 0) gcd = b;
        else gcd = a;
        
        ans.push_back(x*y/gcd);
        ans.push_back(gcd);
        return ans;
    }
};