class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row=0;
        int col=n-1;
    

        while(row<m && col>=0){
            if(matrix[row][col]==target){
                return true;
            }

            //down
            else if(matrix[row][col]<target){
                row++;
            }

            //left (matrix[row][col]>target)
            else{
                col--;
            }
        }
        return false;
      
    }
};