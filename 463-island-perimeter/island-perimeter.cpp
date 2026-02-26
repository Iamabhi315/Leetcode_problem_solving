class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){

                if(grid[i][j] == 1){

                    // Up
                    if(i == 0 || grid[i-1][j] == 0)
                        count++;

                    // Down
                    if(i == row-1 || grid[i+1][j] == 0)
                        count++;

                    // Left
                    if(j == 0 || grid[i][j-1] == 0)
                        count++;

                    // Right
                    if(j == col-1 || grid[i][j+1] == 0)
                        count++;
                }
            }
        }

        return count;
    }
};