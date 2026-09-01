class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;

        sort(intervals.begin(), intervals.end());

        for (int i = 0; i < intervals.size(); i++) {

            if (res.size() == 0) {
                res.push_back(intervals[i]);
            }

            else {
                // current start <= last merged interval's end
                if (intervals[i][0] <= res.back()[1]) {

                    res.back()[1] = max(
                        res.back()[1],
                        intervals[i][1]
                    );
                }

                else {
                    res.push_back(intervals[i]);
                }
            }
        }

        return res;
    }
};