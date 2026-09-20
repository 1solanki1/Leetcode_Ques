
class Solution {
public:
    int averageOfSubtree(TreeNode* root){
        solve(root);
        return result;
        }

int  result=0;
 public:   pair<int,int>solve (TreeNode* root){
    
        if(!root)return {0,0};
   auto l=solve(root->left);
    auto r=solve(root->right);
    int count= l.second+r.second+1;
    int sum=   l.first+r.first+root->val;
    int avg=sum/count;
    if(avg==root->val)result++;
    return {sum,count};

    }
};