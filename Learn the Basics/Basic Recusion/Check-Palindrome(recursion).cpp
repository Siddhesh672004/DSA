#include <iostream>
using namespace std;

bool check(string& s, int start, int endd)
{
    //base case
    if(start >= endd){
        return true;
    }

    //One case
    if(s[start] == s[endd]){
        start++;
        endd--;
    }
    else{
        return false;
    }

    check(s, start, endd);
}

int main()
{
    string s;
    cin>>s;

    bool ans = check(s, 0, s.length()-1);
    cout<<ans;

}
