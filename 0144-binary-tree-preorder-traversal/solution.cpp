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
    void dfs(TreeNode* root, vector<int>& oh)
    {
        if(root == nullptr) return;
        oh.push_back(root->val);
        if(root->left == nullptr && root->right == nullptr) return;

        dfs(root->left, oh);
        dfs(root->right, oh);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        res.reserve(101);
        dfs(root, res);
        return res;
    }
};
