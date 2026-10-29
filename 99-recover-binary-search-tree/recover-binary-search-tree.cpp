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

    void dfs(TreeNode* root, deque<int>& h)
    {
        if(!root) return ;

        dfs(root->left, h);
        h.push_back(root->val);
        dfs(root->right,h);

    }
    void dfs2(TreeNode* root, deque<int>& h)
    {
        if(!root) return ;

        dfs2(root->left,h);
        if(root->val != h.front()) root->val = h.front();
        h.pop_front();
        dfs2(root->right,h);

    }
    

    void recoverTree(TreeNode* root) {
        deque<int> h;
        dfs(root, h);
        sort(h.begin(), h.end());
        dfs2(root, h);
        
    }
};