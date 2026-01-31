class Solution {
public:
    int majorityElement(vector<int>& nums) {

        float limit=(float)nums.size()/2;
        int count=1;

        if(nums.size()==1){
            return nums[0];
        }

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;

                    if(count>=limit){
                        return nums[i];
                    }
                    
                }
            }
            count=1;
        }
        return 0;
    }
};