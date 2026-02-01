class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        
        int n=nums.size();
        vector<int> temp(n);

        if(n==0){
            return;
        }

        for(int i=0;i<n;i++){
            temp[(i+k)%n]=nums[i];
        }

        nums=temp;
        
        
    }
};