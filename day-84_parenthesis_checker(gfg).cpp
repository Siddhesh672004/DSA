class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        // Loop through each character in the string.
        
        for(auto i: x){
            // If the character is an opening bracket, push it to the stack.
            if(i == '(' || i == '[' || i == '{')  st.push(i);
            else{
            
            // If closing bracket is encountered and the stack is empty, return false.
            if(st.empty())  return false;
            
            // Check if the top of the stack matches the closing bracket
            if(i == ')' && st.top() == '(')    st.pop();
            else if(i == ']' && st.top() == '[')    st.pop();
            else if(i == '}' && st.top() == '{')    st.pop();
            else return false;      // If no match, return false.
            }
        }
        // If stack is not empty, return false (unmatched opening brackets).
        if(!st.empty()) return false;
        
        // Return true if all brackets are balanced.
        return true;
    }
