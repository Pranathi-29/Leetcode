class Solution {
public:
    void backtrack(vector<int> nums, int i, vector<int>& sub,
                   vector<vector<int>>& ans) {
        if (i == nums.size()) {
            ans.push_back(sub);
            return;
        }
        sub.push_back(nums[i]);
        backtrack(nums, i + 1, sub, ans);
        sub.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1]) i++;
        backtrack(nums, i + 1, sub, ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub;
        sort(nums.begin(), nums.end());
        backtrack(nums, 0, sub, ans);
        return ans;
    }
};