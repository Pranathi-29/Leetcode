class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans(nums.size());
        int x = 0;
        for (int i = 0; i < nums.size(); i++) {
            x = (x * 2 + nums[i]) % 5;
            if(!x)
            ans[i]=true;
        }
        return ans;
    }
};
