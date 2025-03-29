lass Solution{
    public:
    
        void insert(stack<int> &st, int x){
            //Base case
            if(st.empty()){
                st.push(x);
                return;
            }
            
            //One case solve
            int temp = st.top();
            st.pop();
            
            //Recrsive call
            insert(st, x);
            
            //Backtrack
            st.push(temp);
        }
    
        stack<int> insertAtBottom(stack<int> st,int x){
            insert(st, x);
            
            return st;
        }
    };
    