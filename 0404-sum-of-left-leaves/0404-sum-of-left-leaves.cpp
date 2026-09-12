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
    int sumOfLeftLeaves(TreeNode* root) {
      int res=0;
    fun(root,res);
        return res;

    }
public:void fun(TreeNode* root,int&res){
    if(!root)return ;
if(root->left&&!root->left->left&&!root->left->right)
res+=root->left->val;

fun(root->left,res);
fun(root->right,res);

}
};