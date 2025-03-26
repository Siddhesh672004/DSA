class Solution {
    public:
    
        bool isMatchHelper(string &s, int si, string &p, int pi){
            //base case
            if(si == s.size() && pi == p.size()){
                return true;
            }        
    
            if(si == s.size() && pi < p.size()){
                while(pi < p.size()){
                    if(p[pi] != '*') return false;
                    pi++;
                }
                return true;
            }
    
            //Single char match
            if(s[si] == p[pi] || '?' == p[pi]){
                return isMatchHelper(s, si+1, p, pi+1);
            }
    
            if(p[pi] == '*'){
                //Treat '*' as a nul or empty char
                bool caseA = isMatchHelper(s, si, p, pi+1);
    
                //Consume '*' with one char
                bool caseB = isMatchHelper(s, si+1, p, pi);
                return caseA || caseB;
            }
            return false;
        }
    
    
        bool isMatch(string s, string p) {
            int si = 0;
            int pi = 0;
    
            return isMatchHelper(s, si, p, pi);
        }
    };