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
    // int ind=0;
    // int find(vector<int>vec,int st,int end,int val){
    //     if(st>end)return -1;
    //     for(int i=st;i<=end;i++){
    //         if(vec[i]==val)return i;
    //     }
    //     return -1;
    // }
//     TreeNode* buildTree(vector<int>pre,vector<int>ino ,int st,int end){
//          if(st>end)return NULL;
//         int val=pre[ind];
//         ind++;
//         TreeNode* root=new TreeNode(val);
//       int mid=find(ino,st,end,val);
//         if(ind==-1)return NULL;
//         root->left=buildTree(pre,ino,st,mid-1);
//         root->right=buildTree(pre,ino,mid+1,end);
//         return root;
        
//     }
//     TreeNode* bstFromPreorder(vector<int>& pre) {
//      vector<int>ino=pre;
//         sort(ino.begin(),ino.end());
//         return buildTree(pre,ino,0,pre.size()-1);
//     }

    TreeNode* bstFromPreorder(vector<int>& preorder, int max_val = INT_MAX) {
        if (i == preorder.size() || preorder[i] > max_val) return NULL;
        
        TreeNode* root = new TreeNode(preorder[i++]);
        
        root->left = bstFromPreorder(preorder, root->val);
        root->right = bstFromPreorder(preorder, max_val);
        
        return root;
    }
    
private:
    int i = 0;

};