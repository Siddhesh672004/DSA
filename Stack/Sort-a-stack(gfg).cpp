void insertSorted(stack<int> &s, int target){
    //Base Case
    if(s.empty()){
        s.push(target);
        return;
    }
    
    if(target >= s.top()){
        s.push(target);
        return;
    }
    
    //Solve one case
    int topElement = s.top();
    s.pop();
    
    insertSorted(s, target);
    
    s.push(topElement);
}

void sortStack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    
    //Solve one case
    int topElement = s.top();
    s.pop();
    
    sortStack(s);
    
    insertSorted(s, topElement);
}

void SortedStack :: sort()
{
   //Your code here
   sortStack(s);
}