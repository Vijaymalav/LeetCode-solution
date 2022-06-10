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
    int ind=0;
    int find(int val,vector<int>ino,int st,int end){
     if(st>end)return -1;
        for(int i=st;i<=end;i++){
            if(ino[i]==val){
                return i;
            }
        }
        return -1;
        
    }
    TreeNode* build(vector<int>& pre, vector<int>& ino,int st,int end){
        if(st>end)return NULL;
        int val=pre[ind];
        ind++;
        
        int idx=find(val,ino,st,end);
        if(idx==-1)return NULL;
        TreeNode* nod=new TreeNode(val);
        nod->left=build(pre, ino, st, idx-1);
        nod->right=build( pre,  ino, idx+1, end);
        return nod;
 
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& ino) {
        return build(pre,ino,0,ino.size()-1);
        
    }
};