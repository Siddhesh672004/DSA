#include <iostream>
using namespace std;

void printSub(string str, string output, int i)
{
    //base case
    if(i >= str.length()){
        cout<<output<<endl;
        return;
    }

    //exclude case
    printSub(str, output, i+1);

    //include case
    output.push_back(str[i]);
    printSub(str, output, i+1);
}

int main()
{
    string str = "abc";
    string output = "";
    int i=0;
    printSub(str, output, i);
    return 0;
}
