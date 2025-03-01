#include <iostream>
#include <vector>3
using namespace std;

void solve(vector<int>& arr, int start, int endd)
{
    //base case
    if(endd == arr.size()){
        return;
    }

    //One case solve

    for(int i=start; i<=endd; i++){
        cout<<arr[i];
    }
    cout<<endl;
    if(endd >= arr.size()-1){
        start += 1;
        endd=start-1;
    }
    solve(arr, start, endd+1);
}

int main()
{
    vector<int> arr = {1,2,3,4};
    int start = 0;
    solve(arr, start, 0);
}
