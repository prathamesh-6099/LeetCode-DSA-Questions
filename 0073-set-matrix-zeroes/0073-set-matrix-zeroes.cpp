class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector <int> set_row;
        vector <int> set_col;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    set_row.push_back(i);
                    set_col.push_back(j);
                }
            }
        }

        //row->0;
        for(int i=0;i<set_row.size();i++){
            for(int j=0;j<col;j++){
                matrix[set_row[i]][j]=0;
            }
        }

        //col->0;
        for(int i=0;i<set_col.size();i++){
            for(int j=0;j<row;j++){
                matrix[j][set_col[i]]=0;
            }
        }

 
    }
};