#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int>& arr, int s, int e, int target)
{
    if(s>e){
        return -1;
    }

    int mid = (s+e)/2;

    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        return bs(arr, mid+1, e, target);
    }
    else{
        return bs(arr, s, mid-1, target);
    }
}

int main()
{
    vector<int> arr{10, 13, 15, 16, 20};
    int s=0, e=arr.size()-1;
    int target = 13;
    int ans;
    ans = bs(arr, s, e, target);
    cout<<ans;
}
