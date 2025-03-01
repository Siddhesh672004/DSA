#include <iostream>
using namespace std;

void solve(string& str, int start, int endd)
{
    if(start >= endd){
        return;
    }

    char temp = str[start];
    str[start] = str[endd];
    str[endd] = temp;-+

    solve(str, start+1, endd-1);

}

int main()
{
    string str = "Love_babbar";
    int start = 0, endd = str.length()-1;

    solve(str, start, endd);
    cout<<str;
    return 0;
}
