//Optimal Solution
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int, bool> rowCheck;
unordered_map<int, bool> upperLeftDiagonalCheck;
unordered_map<int, bool> bottomLeftDiagonalCheck;

void printSolution(vector<vector<char>> &board, int n){
  for(int row=0; row<n; row++){
    for(int col=0; col<n; col++){
      cout<<board[row][col]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
}

//bool isSafe TIME COMPLEXITY: O(1) as we are using map
bool isSafe(int row, int col, vector<vector<char>> &board, int n){
  if(rowCheck[row] == true)
    return false;

  if(upperLeftDiagonalCheck[col-row] == true)
    return false;

  if(bottomLeftDiagonalCheck[row+col] == true)
    return false;

  return true;
} 

void solve(vector<vector<char>> &board, int col, int n){
  //base case
  if(col >= n){
    printSolution(board, n);
    return;
  }

  //Solve 1 case, rest recursion will handle
  for(int row=0; row<n; row++){
    //If the queen is safe 
    if(isSafe(row, col, board, n)){
      board[row][col] = 'Q';
      rowCheck[row] = true;
      upperLeftDiagonalCheck[col-row] = true;
      bottomLeftDiagonalCheck[col+row] = true;

      //Recursive call
      solve(board, col+1, n);

      //backtracking
      board[row][col] = '-';
      rowCheck[row] = false;
      upperLeftDiagonalCheck[col-row] = false;
      bottomLeftDiagonalCheck[col+row] = false;

    }
  }
}

int main() {
  int n = 4;
  vector<vector<char>> board(n, vector<char> (n, '-'));
  int col = 0;

  // '-' means empty cell
  // 'Q' means Queen is present at cell
  solve(board, col, n);

  return 0;
}

//Brute Force Solution

// #include <iostream>
// #include <vector>
// using namespace std;

// void printSolution(vector<vector<char>> &board, int n){
//   for(int row=0; row<n; row++){
//     for(int col=0; col<n; col++){
//       cout<<board[row][col]<<" ";
//     }
//     cout<<endl;
//   }
//   cout<<endl;
// }

// bool isSafe TIME COMPLXITY: O(n)
// bool isSafe(int row, int col, vector<vector<char>> &board, int n){
//   //Row wise
//   int i = row;
//   int j = col;  
//   while(j >= 0){
//     if(board[i][j] == 'Q'){
//       return false;
//     }
//     j--;
//   }

//   //Upper left diagonal
//   i = row;
//   j = col;
//   while(i >= 0 && j >= 0){
//     if(board[i][j] == 'Q'){
//       return false;
//     }
//     i--;
//     j--;
//   }

//   //Bottom left diagonal
//   i = row;
//   j = col;
//   while(i < n && j >= 0){
//     if(board[i][j] == 'Q'){
//       return false;
//     }
//     i++;
//     j--;
//   }
//   return true;
// }

// void solve(vector<vector<char>> &board, int col, int n){
//   //base case
//   if(col >= n){
//     printSolution(board, n);
//     return;
//   }

//   //Solve 1 case, rest recursion will handle
//   for(int row=0; row<n; row++){
//     //If the queen is safe 
//     if(isSafe(row, col, board, n)){
//       board[row][col] = 'Q';

//       //Recursive call
//       solve(board, col+1, n);

//       //backtracking
//       board[row][col] = '-';
//     }
//   }
// }

// int main() {
//   int n = 5;
//   vector<vector<char>> board(n, vector<char> (n, '-'));
//   int col = 0;

//   // '-' means empty cell
//   // 'Q' means Queen is present at cell
//   solve(board, col, n);

//   return 0;
// }