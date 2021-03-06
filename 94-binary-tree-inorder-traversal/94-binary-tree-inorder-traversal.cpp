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
    // void ino(vector<int>&ans,TreeNode* root){
    //     if(!root)return;
    //     ino(ans,root->left);
    //     ans.push_back(root->val);
    //     ino(ans,root->right);
    // }
    vector<int> inorderTraversal(TreeNode* root) {
        // vector<int>ans;
        // ino(ans,root);
        // return ans;
        if(!root)return {};
        
        vector<int>ans;
        stack<TreeNode*>stk;
        // stk.push(root);
       do{
            if(root){
                stk.push(root);
                root=root->left;
            }
            else {
           
                ans.push_back(stk.top()->val);
              
                root=stk.top()->right;
                
                   stk.pop();
            }
        } while(!stk.empty() or root); 
        return ans;
        
    }
};