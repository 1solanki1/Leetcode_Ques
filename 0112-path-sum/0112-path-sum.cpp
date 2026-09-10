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
    bool hasPathSum(TreeNode* root, int tar) {
        if(!root)return false;

if(root->left==NULL&& root->right==NULL)
return tar==root->val;

tar-=root->val;

    return hasPathSum(root->left,tar)||hasPathSum (root->right,tar);
    }
};