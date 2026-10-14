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
    pair<bool, int> dfs(TreeNode* root)
    {
        if(root== nullptr) return {1,0};
        
        pair<bool, int> r = dfs(root->right);
        pair<bool, int> l = dfs(root->left);
        r.second++;
        l.second++;
        if(!(r.first && l.first)) return{0,0};
        if(abs(r.second-l.second) <= 1) return {1, max(l.second, r.second)};
        else return {0, 0};
        
    }
    bool isBalanced(TreeNode* root) {
        return dfs(root).first;
    }
};