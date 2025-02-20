#include <iostream>
#include <vector>
using namespace std;

bool isAscending(vector<int>& v, int i)
{
    if(i == v.size()-1){
        return true;
    }

    if(v[i+1] < v[i]){
       return false;
    }
    else{
         return isAscending(v, i+1);
    }
}

int main()
{
    vector<int> v{1,1,1,1,1};

    int i=0;
    bool ans = isAscending(v, i);
    cout<<ans;
    return 0;
}
