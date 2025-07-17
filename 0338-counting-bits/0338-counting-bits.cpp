class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;

        for(int i=0;i<=n;i++){
            unsigned int num=i;
            int count=0;
            while(num>0){
                int digit=num&1;
                count+=digit;
               num=num>>1;
            }
            ans.push_back(count);
        }
        return ans;
    }
};