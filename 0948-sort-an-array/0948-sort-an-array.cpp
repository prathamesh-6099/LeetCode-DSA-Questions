class Solution {
public:
    // LeetCode will call this
    vector<int> sortArray(vector<int>& nums) {
         mergeSort(nums, 0, nums.size() - 1);
         return nums;
    }

private:
  void mergeSort(vector<int>& nums, int si, int ei) {
        if (si >= ei) return ;

        int mid = (si + ei) / 2;
        mergeSort(nums, si, mid);        // left half
        mergeSort(nums, mid + 1, ei);    // right half
        merge(nums, si, mid, ei);        // merge halves


    }

    void merge(vector<int>& nums, int si, int mid, int ei) {
        int i = si;
        int j = mid + 1;
        vector<int> temp;

        while (i <= mid && j <= ei) {
            if (nums[i] <= nums[j]) temp.push_back(nums[i++]);
            else temp.push_back(nums[j++]);
        }
        while (i <= mid) temp.push_back(nums[i++]);
        while (j <= ei) temp.push_back(nums[j++]);

        // copy back
        for (int idx = si,x=0; idx <= ei; idx++) {
            nums[idx] = temp[x++];
        }
    }
};
