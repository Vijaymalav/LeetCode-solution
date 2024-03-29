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
    int solve(TreeNode* root){
        if(!root)return 0;
        int l=solve(root->left);
        int r=solve(root->right);
        if(l==0){
            root->left=NULL;
        }
        if(r==0)root->right=NULL;
        return l+r+root->val;
    }
    TreeNode* pruneTree(TreeNode* root) {
     int a=solve(root);
        if(a==0)return NULL;
        return root;
    }
};