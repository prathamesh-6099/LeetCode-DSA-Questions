class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        vector<int> expectedNums;
        int k=0;

        for(int i=0;i<nums.size();i++){

            if(nums[i]!= val){
                expectedNums.push_back(nums[i]);
                k++;
            }

        }
        for(int j=0;j<expectedNums.size();j++){
            nums[j]=expectedNums[j];
        }
        return k;
        
    }
};