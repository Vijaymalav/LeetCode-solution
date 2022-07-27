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
    void insert(TreeNode* ins,TreeNode* nd1,TreeNode* nd2){
        if(!ins)return;
        TreeNode* tmp=ins;
        nd1->left=NULL;
        nd1->right=ins;
        while(ins->right){
ins=ins->right;
        }
        ins->right=nd2;
        
    }
    
    void flatten(TreeNode* root) {
        if(!root)return ;
        TreeNode* curr=root;
        while(curr){
             insert(curr->left,curr,curr->right);
            curr=curr->right;
        }
      
        
        
        
    }
};