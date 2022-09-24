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
    vector<vector<int>>ans;
    void solve(TreeNode* root,vector<int>tmp){
        if(!root)return;
        if(!root->left and !root->right){
            tmp.push_back(root->val);
                ans.push_back(tmp);
                return;
            }
        
        
        tmp.push_back(root->val);
        solve(root->left,tmp);
        solve(root->right,tmp);
        tmp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        solve(root,{});
        vector<vector<int>>res;
        for(int i=0;i<ans.size();i++){
            int sum=0;
            for(int j=0;j<ans[i].size();j++){
                sum+=ans[i][j];
            }
            if(sum==targetSum){
                res.push_back(ans[i]);
            }
        }
        return res;
    }
};