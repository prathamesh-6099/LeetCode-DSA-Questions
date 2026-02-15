class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int pre=1,suf=1;
        int n=nums.size();
        vector<int> result(n,1);

        //prefix
        for(int i=0;i<n;i++){
            result[i]=pre;
            pre*=nums[i];

        }

        //suffix
        for(int i=n-1;i>=0;i--){
            result[i]*=suf;
            suf*=nums[i];
        }
     
     return result;
        
        
    }
};