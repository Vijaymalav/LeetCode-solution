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
    bool solve(TreeNode* root,int tar,int sum){
        if(!root)return false;
        if(!root->left and !root->right){
            sum+=root->val;
            if(sum==tar)return true;
            else return false;
        }
        sum+=root->val;
       bool l= solve(root->left,tar,sum);
      bool r=  solve(root->right,tar,sum);
        return l || r;
        
    }
    bool hasPathSum(TreeNode* root, int tar) {
        // if(!root and tar==0)return true;
        return solve(root,tar,0);
        
    }
};