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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int ans=0;
        queue<pair<TreeNode*,int>>q;   // pair<TreeNode*,index>
        q.push({root,0});
        while(!q.empty()){
            int n=q.size();
            int mn=q.front().second;
            int first,last;
            for(int i=0;i<n;i++){
                long long int ind=q.front().second-mn;
                TreeNode* nd=q.front().first;
                q.pop();
                if(i==0)first=ind;
                if(i==n-1)last=ind;
                if(nd->left)q.push({nd->left,ind*2+1});
                if(nd->right)q.push({nd->right,ind*2+2});
            }
            ans=max(ans, last-first+1);
            
        }
        return ans;
    }
};