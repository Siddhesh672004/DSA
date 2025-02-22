#include <iostream>
#include <limits.h>
using namespace std;

int solve(int target, int x, int y, int z)
{
    //base case
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MIN;
    }

    //solve one case
    int ans1 = solve(target-x, x, y, z) + 1;
    int ans2 = solve(target-y, x, y, z) + 1;
    int ans3 = solve(target-z, x, y, z) + 1;

    int ans = max(ans1, max(ans2, ans3));
    return ans;
}

int main()
{
    int target = 7;
    int x=5, y=2, z=2;

    int ans = solve(target, x, y, z);

    if(ans < 0){
        ans = 0;
    }
    cout<<"Answer: "<<ans;
    return 0;
}
