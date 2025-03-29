class Solution {
    public:
    
    void deleteMiddle(stack<int> & s, int total_size){
        //Base case
        if(s.size() == (total_size+1) / 2){
            s.pop();
            return;
        }
        
        //Solve one case
        int temp = s.top();
        s.pop();
        
        deleteMiddle(s, total_size);
        
        //Backtrack
        s.push(temp);
    }
    
      // Function to delete middle element of a stack.
      void deleteMid(stack<int>& s) {
          // code here..
          int total_size = s.size();
          deleteMiddle(s, total_size);
      }
  };