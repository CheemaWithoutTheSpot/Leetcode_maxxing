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
    bool hehe(TreeNode* l, TreeNode* r)
    {
        if(l == nullptr && r == nullptr) return 1;
        if(l == nullptr || r == nullptr) return 0;
        if(l->val != r->val) return 0;

        return (hehe(l->left, r->right) && hehe(l->right, r->left));
    }
    bool isSymmetric(TreeNode* root) {

        return hehe(root->left, root-> right);
    }
};
