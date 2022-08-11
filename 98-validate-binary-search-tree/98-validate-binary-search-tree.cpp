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
      bool f=true;
    void helper(TreeNode* root,TreeNode* &par){
        if(!root)return;
        helper(root->left,par);
        if(par and  par->val>=root->val){
            f=false;
            return;
        }
        par=root;
        helper(root->right,par);
    }
    
    bool isValidBST(TreeNode* root) {
      
        TreeNode* par=NULL;
        helper(root,par);
        return f;
    }
};