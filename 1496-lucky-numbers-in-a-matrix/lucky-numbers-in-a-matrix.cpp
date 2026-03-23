class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        vector<int> result;

        for (int i = 0; i < row; i++) {
            // Step 1: find min in row i AND its column index
            int mini = INT_MAX;
            int minCol = 0;                          // <-- track the column
            for (int j = 0; j < column; j++) {
                if (matrix[i][j] < mini) {
                    mini = matrix[i][j];
                    minCol = j;                      // <-- save column index
                }
            }

            // Step 2: check if mini is the max of its column (minCol)
            int maxi = INT_MIN;
            for (int k = 0; k < row; k++) {
                if (matrix[k][minCol] > maxi)        // <-- use minCol, not i
                    maxi = matrix[k][minCol];
            }

            if (mini == maxi)
                result.push_back(mini);
        }
        return result;
    }
};