/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool dfs(TreeNode* root, int target, int sum)
    {
        if(root == nullptr) return 0;

        sum = sum+root->val;

        if(root->left == nullptr && root->right == nullptr)
            return sum == target;

        return dfs(root->left, target, sum) || dfs(root->right, target, sum);

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root, targetSum, 0);
    }
};
