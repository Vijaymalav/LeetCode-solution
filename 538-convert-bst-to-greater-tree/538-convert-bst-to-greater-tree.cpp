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
    int sum=0;
    void ino(TreeNode* root){
        if(!root)return ;
        ino(root->right);
        root->val=(sum+=root->val);
        
        ino(root->left);
        
    }
    TreeNode* convertBST(TreeNode* root) {
        ino(root);
        return root;
    }
};