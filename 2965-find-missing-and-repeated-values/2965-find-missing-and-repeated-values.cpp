class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n=grid.size();
        vector<int> freq(n * n + 1, 0);
        vector<int> res;
        int miss,dup;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }
        }

        for(int i=0;i<n*n+1;i++){
            if(freq[i]>1){
                dup=i;
            }

            if(freq[i]==0){
                miss=i;
            }
        }

        res.push_back(dup);
        res.push_back(miss);

        return res;

    

    }
};