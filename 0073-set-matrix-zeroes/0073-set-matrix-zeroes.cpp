class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        bool firstRowZero = false;
        bool firstColZero = false;

        // Check if first row contains 0
        for(int j = 0; j < col; j++) {
            if(matrix[0][j] == 0) {
                firstRowZero = true;
            }
        }

        // Check if first column contains 0
        for(int i = 0; i < row; i++) {
            if(matrix[i][0] == 0) {
                firstColZero = true;
            }
        }

        // Use first row and first column as markers
        for(int i = 1; i < row; i++) {
            for(int j = 1; j < col; j++) {

                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set marked rows to 0
        for(int i = 1; i < row; i++) {
            if(matrix[i][0] == 0) {

                for(int j = 1; j < col; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Set marked columns to 0
        for(int j = 1; j < col; j++) {
            if(matrix[0][j] == 0) {

                for(int i = 1; i < row; i++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Finally handle first row
        if(firstRowZero) {
            for(int j = 0; j < col; j++) {
                matrix[0][j] = 0;
            }
        }

        // Finally handle first column
        if(firstColZero) {
            for(int i = 0; i < row; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};