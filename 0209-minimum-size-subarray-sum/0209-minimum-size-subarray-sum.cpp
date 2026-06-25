class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int min_len= INT_MAX;
        int curr_sum=0;
        int left=0;

        for(int right=0; right<n; right++){

            curr_sum+=nums[right];

            while(curr_sum >= target){
                min_len= std::min(min_len,right-left+1);

                curr_sum-=nums[left];
                left++;
            }
        }

        return (min_len==INT_MAX) ? 0 : min_len;
    }
};