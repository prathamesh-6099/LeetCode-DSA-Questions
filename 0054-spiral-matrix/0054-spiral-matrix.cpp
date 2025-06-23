class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> result;
         if (matrix.empty()) return result;
        int m = matrix.size();           // Number of rows
        int n = matrix[0].size();        // Number of columns
        int srow=0,scol=0;
        int erow=m-1;
        int ecol=n-1;

        while(srow<=erow && scol<=ecol){
            //top
            for(int j=scol;j<=ecol;j++){
               result.push_back(matrix[srow][j]);
            }

            //left
            for(int i=srow+1;i<=erow;i++){
                result.push_back(matrix[i][ecol]);
            }

            //bottom
            for(int j=ecol-1;j>=scol;j--){
                if(srow==erow){
                    break;
                }
              result.push_back(matrix[erow][j]);

            }

            //right
            for(int i=erow-1;i>srow;i--){
                if(scol==ecol){
                    break;
                }
               result.push_back(matrix[i][scol]);
            }

            srow++;
            scol++;
            erow--;
            ecol--;
        }
         return result;
    }
};