//Time Complexity: O(n * n!)
//Space Complexity:O(n)

#include <iostream>
using namespace std;

void printPermutation(string& str, int i){
  //base case
  if(i >= str.length()){
    cout<<str<<" ";
    return;
  }

  //Swapping
  for(int j=i; j<str.length(); j++){
    swap(str[i], str[j]);

    //Recursive call
    printPermutation(str, i+1);

    //backtracking -> to recreate the original string 
    swap(str[i], str[j]);
  }
}

int main() {
  string str = "abc";
  int i = 0;

  printPermutation(str, i);
  cout<<str;

  return 0;
}