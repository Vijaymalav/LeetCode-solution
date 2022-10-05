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
  TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    if(depth==1)
    {
                TreeNode *temp1=new TreeNode(val);
                 
                temp1->left=root;
                temp1->right=NULL;
                return temp1;
                
    }
     
    queue<pair<TreeNode*,int>>q;
    q.push({root,1});
    while(q.size()>0)
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            TreeNode *curr=q.front().first;int l=q.front().second;q.pop();
            if(l==depth-1)
            {
                TreeNode *temp1=new TreeNode(val);
                TreeNode *temp2=new TreeNode(val);
                temp1->left=curr->left;
                curr->left=temp1;
                temp1->right=NULL;
                temp2->right=curr->right;
                curr->right=temp2;
                temp2->left=NULL;
            }
            else
            {
                if(curr->left)
                    q.push({curr->left,l+1});
                if(curr->right)
                    q.push({curr->right,l+1});
            }
        }
    }
    
    return root;
    
}
};