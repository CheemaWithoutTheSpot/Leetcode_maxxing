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
    int s(int i, TreeNode* root)
    {
        if(root == nullptr) return 10001;
        if(root->right == nullptr && root->left == nullptr) return i;

        int x = s(i+1, root->right);
        int y = s(i+1, root->left);
        
        return min(x,y);
    }
    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        return s(1, root);
    }
};
