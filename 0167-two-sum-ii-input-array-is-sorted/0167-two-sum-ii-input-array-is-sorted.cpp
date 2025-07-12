class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int cursum=0;
        int sz=numbers.size();
        int left_idx=0;
        int right_idx=sz-1;

        while(left_idx<right_idx){
           int cursum=numbers[left_idx]+numbers[right_idx];
            if(cursum==target){
                return {left_idx+1,right_idx+1};
            }
            else if(cursum<target){
                left_idx++;
            }
            else{
                right_idx--;
            }
        }
          return {-1, -1};
        
    }
};