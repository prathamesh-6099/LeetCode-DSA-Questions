class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res= rotated_search(nums, 0, nums.size() - 1, target);
        return res;
    }

private:
    int rotated_search(vector<int> &nums, int si, int ei, int target) {
        if (si > ei) return -1;

        int mid = si + (ei - si) / 2;

        if (nums[mid] == target) return mid;

        // Left half is sorted
        if (nums[si] <= nums[mid]) {
            if (nums[si] <= target && target < nums[mid]) {
                return rotated_search(nums, si, mid - 1, target);
            } else {
                return rotated_search(nums, mid + 1, ei, target);
            }
        }
        // Right half is sorted
        else {
            if (nums[mid] < target && target <= nums[ei]) {
                return rotated_search(nums, mid + 1, ei, target);
            } else {
                return rotated_search(nums, si, mid - 1, target);
            }
        }
    }
};
