class Solution{
    public:
    
        void insertAtBottom(stack<int> &st, int target){
            //Base case
            if(st.empty()){
                st.push(target);
                return;
            }
            
            //Solve one case
            int temp = st.top();
            st.pop();
            
            //Recursive call
            insertAtBottom(st, target);
            
            //Backtrack
            st.push(temp);
        }
    
        void reverseStack(stack<int> &st){
            //Base case
            if(st.empty()){
                return;
            }
            
            //Solve one case
            int target = st.top();
            st.pop();
            
            //Recursive call
            reverseStack(st);
            
            //Backtrack
            insertAtBottom(st, target);
        }
        
        void Reverse(stack<int> &St){
            reverseStack(St);
        }
    };