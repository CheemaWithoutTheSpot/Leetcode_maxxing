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
    int dfs(TreeNode* root, int num)
    {
        if(!root)
        {
            return 0;
        }

        if(!root->right && !root->left)
        {
            return num*10 + root->val;
        }

        int n = num*10 + root->val;
        int left =  dfs(root->left, n );
        int right = dfs(root->right , n);
        return left+ right;
    }
    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
};