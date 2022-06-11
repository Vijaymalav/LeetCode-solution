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
    TreeNode* buildTree(vector<int>nums,int st,int end){
        if(st>end)return NULL;
        if(st==end)return new TreeNode(nums[st]);
        int mid=(st+end)%2==0?(st+end)/2:(st+end+1)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=buildTree(nums,st,mid-1);
        root->right=buildTree(nums,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildTree(nums,0,nums.size()-1);
        
    }
};