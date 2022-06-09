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
    int Dmeter(TreeNode* root,int &mx){
        if(!root)return 0;
        int left=Dmeter(root->left,mx);
        int right=Dmeter(root->right,mx);
        mx=max(left+right,mx);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int mx=INT_MIN;
       int dai=  Dmeter(root,mx);
        return mx;
    }
};