class Solution {
    public:
    
        void solve(string& s, string part){
    
            //One case solve
            int found = s.find(part);
            if(found != string::npos){
                string left_part = s.substr(0, found);
                string right_part =s.substr(found + part.size(), s.length()-1);
                s = left_part + right_part;
                solve(s, part);
            }
            else{
                return;
            }
        }
    
        string removeOccurrences(string s, string part) {
            solve(s, part);
            return s;
        }
    };