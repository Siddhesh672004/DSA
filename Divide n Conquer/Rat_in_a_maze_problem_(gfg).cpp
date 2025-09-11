//Time complexity: O(4^(N*N)), since each cell can branch into 4 directions.
//Space Complexity: O(N^2) for visited matrix + recursion stack

class Solution {
  public:
    int dx[4] = {1, 0, 0, -1};
    int dy[4] = {0, -1, 1, 0};
    char direction[4] = {'D', 'L', 'R', 'U'};
    
    bool isSafe(int i, int j, int row, int col, vector<vector<int>> &arr, vector<vector<bool>> &visited) {
        if(((i >= 0 && i < row) && (j >= 0 && j < col)) && 
            (arr[i][j] == 1) && 
            (visited[i][j] == false)){
                return true;
            }
            return false;
    }
    
    void solveMaze(vector<vector<int>>& arr, int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output){
        //base case
        if(i == row-1 && j == col-1){
            //answer found
            path.push_back(output);
            return;
        }
        
        //Check wheather the next DLRU is valid or not
        for(int k=0; k<4; k++){
            int newx = i + dx[k];
            int newy = j + dy[k];
            char dir = direction[k];
            
            if(isSafe(newx, newy, row, col, arr, visited)){
                visited[i][j] = true;
                solveMaze(arr, row, col, newx, newy, visited, path, output + dir);
                
                //backtrack
                visited[i][j] = false;
            }
        }
    }
  
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int row = maze.size();
        int col = maze[0].size();
        
        vector<string> path;
        string output = "";
        
        vector<vector<bool>> visited(row, vector<bool> (col, false));
        
        // If the src is not present
        if(maze[0][0] == 0){
            return path;
        }
        
        //If src is present --> Mark true [0][0]
        visited[0][0] = true;
        
        solveMaze(maze, row, col, 0, 0, visited, path, output);
        return path;
        
    } 
};