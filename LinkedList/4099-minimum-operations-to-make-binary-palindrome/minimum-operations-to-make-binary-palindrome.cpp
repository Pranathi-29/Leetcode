class Solution {
public:
    string toBinary(int x) {
        string s = "";
        while (x) {
            s += (x % 2) + '0';
            x /= 2;
        }
        return s;
    }
    bool isPalindrome(int x) {
        string bin = toBinary(x);
        string rev = bin;
        reverse(rev.begin(), rev.end());
        return bin == rev;
    }

    vector<int> minOperations(vector<int>& nums) {
        vector<int> pal;
        for (int i = 1; i <= 5000; i++) {
            if (isPalindrome(i))
                pal.push_back(i);
        }
        vector<int> ans;
        ans.reserve(nums.size());

        for (int x : nums) {
            int mini = INT_MAX;
            for (int p : pal) {
                mini = min(mini, abs(x - p));
            }
            ans.push_back(mini);
        }
        return ans;
    }
};