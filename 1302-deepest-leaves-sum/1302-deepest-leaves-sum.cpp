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
 void helper(map<int,vector<int>> &m,TreeNode* root,int l){
        if(!root)return;
        m[l].push_back(root->val);
        helper(m,root->left,l+1);
        helper(m,root->right,l+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        map<int,vector<int>> m;
        helper(m,root,1);
        int sum=0;
        vector<int> ans;
        ans=m[m.size()];
        for(auto v:ans){
            sum+=v;
        }
        return sum;
    }
};