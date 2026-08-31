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
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;a(root,dia);
        return dia;

    }
    int a(TreeNode * root,int &maxi )
    {
        if(!root)return 0;
        int l=a(root->left,maxi);
        int r=a(root->right,maxi);
        maxi=max(maxi,l+r);
        
return  1+max(l,r);
            }
};