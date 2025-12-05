class Solution {
public:
    void backtrack(vector<int>& candidates,int target, int idx, int &sum, vector<int>&sub, vector<vector<int>>&ans){
        if(sum==target)
        ans.push_back(sub);
        if(sum>target)
        return ;
        for(int i=idx;i<candidates.size();i++){
            sum+=candidates[i];
            sub.push_back(candidates[i]);
            backtrack(candidates, target, i, sum, sub, ans);
            sum-=candidates[i];
            sub.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>sub;
        vector<vector<int>>ans;
        int sum =0;
        backtrack(candidates, target, 0, sum, sub, ans);
        return ans;
    }
};