#include <iostream>
using namespace std;

int main()
{
    string str = "-";
    int res = -1;

    res = isalpha(str[0]);

    if(!res)
    {
        cout<<"Is Alphabet";
    }


    /*for(int i=0; i<str.length();i++)
    {
        res = isalpha(str[i]);
        cout<<str[i]<<" : "<<res<<endl;
    }
    return 0;*/
}
