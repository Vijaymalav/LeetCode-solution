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
    // int mx=INT_MIN;
    // int solve(TreeNode* root){
    //       if(!root)return NULL;
    //     int left=max(solve(root->left),0);
    //     int right=max(solve(root->right),0);
    //     if((left+right)<root->val){
    //         mx=max(mx,root->val);
    //     }
    //     else mx=max(mx,left+right+root->val);
    //     return max(left,right)+root->val;
    // }
    // int maxPathSum(TreeNode* root) {
    //   solve(root);
    //     return mx;
    // }
      int max_sum=INT_MIN;
    int solve(TreeNode* root)
    {
        if(!root)return 0;
        int l=max(solve(root->left),0);
        int r=max(solve(root->right),0);
     
        max_sum=max(max_sum,(root->val+l+r));
        return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return max_sum;
    }
};