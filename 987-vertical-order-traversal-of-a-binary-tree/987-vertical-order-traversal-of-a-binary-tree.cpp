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
    void helper(TreeNode* root,int levl,map<int,map<int,vector<int>>>&m,int row){
        if(!root)return;
        m[levl][row].push_back(root->val);
        helper(root->left,levl-1,m,row+1);
        helper(root->right,levl+1,m,row+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        int levl=0,row=0;
        map<int,map<int,vector<int>>>m;
        helper(root,levl,m,row);
        
        vector<vector<int>>ans;
        
         
        for(auto it:m){
            vector<int>col;
            for(auto vec:it.second){
                sort(vec.second.begin(),vec.second.end());
                col.insert(col.end(),vec.second.begin(),vec.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
    
      
    
};