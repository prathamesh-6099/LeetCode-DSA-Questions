class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
         int n = nums.size();
         vector<string> answer;
         int start=0;
         int end=0;

         if (nums.empty()) {
    return answer;
}

         for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                end=i;
            }
            else{
                if(nums[start]==nums[end]){
                    answer.push_back(to_string(nums[start]));

                }
                else{

                    answer.push_back(
                        to_string(nums[start]) + "->" + to_string(nums[end])
                        );

                }

                end=i;
                start=i;
            }
         }

         // handled last element 
         if(start==end){
            answer.push_back(to_string(nums[start]));
         }
         else{
            answer.push_back(
                        to_string(nums[start]) + "->" + to_string(nums[end])
                        );
         }

         return answer;

    
         
          }
};