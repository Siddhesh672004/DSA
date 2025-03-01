class Solution{
    public:
    
    void solve(string& s, char p, int i, int& ans){
        //base case
        if(i < 0){
            return;
        }
        
        if(s[i] == p){
            ans = i;
            return;
        }
        
        //Solve one case
        solve(s, p, i-1, ans);
    }
    
    int LastIndex(string s, char p){
        //complete the function here
        int ans = -1;
        solve(s, p, s.size() - 1, ans);
        return ans;
    }
};