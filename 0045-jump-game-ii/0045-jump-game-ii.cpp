class Solution {
public:
    int jump(vector<int>& nums) {

        int n= nums.size();
        int cur_end=0;
        int far_end=0;
        int jumps=0;

        if(n<=0){
            return 0;
        }

        for(int i=0;i<n-1;i++){

            if((nums[i]+i)>far_end){
                far_end=nums[i]+i;
            }

            if(cur_end == i){
                jumps++;
                cur_end=far_end;
            }

            if(cur_end>=n-1){
                break;
            }
        }

        return jumps;

       
        
    }
};