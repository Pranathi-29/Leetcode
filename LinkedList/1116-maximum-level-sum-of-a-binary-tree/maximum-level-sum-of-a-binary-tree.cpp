/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    map<int, int> m;
    void dfs(TreeNode* root, int currLevel) {

        if (!root)
            return;

        m[currLevel] += root->val;

        dfs(root->left, currLevel + 1);
        dfs(root->right, currLevel + 1);
    }

    int maxLevelSum(TreeNode* root) {
        m.clear();

        dfs(root, 1);

        int maxSum = INT_MIN;
        int sol = 0;

        for (auto& it : m) {

            int level = it.first;
            int sum = it.second;

            if (sum > maxSum) {
                maxSum = sum;
                sol = level;
            }
        }

        return sol;
    }
};