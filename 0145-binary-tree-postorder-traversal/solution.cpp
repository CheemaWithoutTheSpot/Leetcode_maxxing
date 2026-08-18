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
    void dfs(vector<int>& hehe, TreeNode* root)
    {
        if(root == nullptr) return;

        dfs(hehe, root-> left);
        dfs(hehe, root -> right);
        hehe.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> hehe;
        dfs(hehe, root);
        return hehe;

    }
};
