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
     TreeNode* par=NULL;
    void helper(TreeNode* root){
        if(!root)return ;
        helper(root->left);
      
        if(par!=NULL and root->val<=par->val){f=false;return;};
         par=root;
         helper(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(!root)return true;
        helper(root);
        return f;
    }
};