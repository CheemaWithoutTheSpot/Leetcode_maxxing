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

    void dfs(TreeNode* root, vector<long>& h)
    {
        if(!root)   return;

        dfs(root->left, h);
        h.push_back(root->val);
        dfs(root->right, h);

    }

    bool isValidBST(TreeNode* root) {
        vector<long> h;
        h.reserve(10001);

        dfs(root, h);

        for(int i=1; i<h.size(); i++)
        {
            if(h[i-1] >= h[i])
            return false;
        }
        return true;
    }
};