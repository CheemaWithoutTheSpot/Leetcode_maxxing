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
    void dfs(TreeNode* root, int sum, int targ, vector<vector<int>>& res, vector<int>& temp)
    {
        if(!root) {
            return;
        }

        temp.push_back(root->val);
        if(!root ->left && !root->right)
        {
            if(targ == sum+root->val)
            {
                res.push_back(temp);
            }
            
        }
        else {
        dfs(root->left, sum+root->val, targ, res, temp);
        dfs(root->right,sum+root->val, targ, res, temp);
        }
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> temp;
        temp.reserve(12);
        vector<vector<int>> res;
        res.reserve(4096);
        if(!root) return res;

        dfs(root, 0, targetSum, res, temp);
        return res;
    }
};