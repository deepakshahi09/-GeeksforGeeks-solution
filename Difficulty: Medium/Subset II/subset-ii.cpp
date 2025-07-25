// User function Template for C++

class Solution {
public:
    void backtrack(int start, vector<int>& nums, vector<int>& curr, vector<vector<int>>& ans) {
        ans.push_back(curr);
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) continue;
            curr.push_back(nums[i]);
            backtrack(i + 1, nums, curr, ans);
            curr.pop_back();
        }
    }

    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(nums.begin(), nums.end());
        backtrack(0, nums, curr, ans);
        return ans;
    }
};
