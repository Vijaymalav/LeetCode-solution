/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        vector<int>curr;
        if(!root)return ans;
        queue<Node*>q;
        q.push(root);
   
        while(!q.empty()){
            int n=q.size();
            // ans.emplace_back();
          if(curr.size()!=0)  ans.push_back(curr);
            curr.clear();
            while(n--){
                Node* tmp=q.front();
                q.pop();
              
                 // ans.back().push_back(tmp->val);
            curr.push_back(tmp->val);
                for(auto nd:tmp->children){
                   
                        q.push(nd);
                    
                }
               
            }
        
        }
        ans.push_back(curr);
        return ans;
    }
    //        if (root == nullptr) return {};
    //     queue<Node*> q;
    //     q.push(root);
    //     vector<vector<int>> ans;
    //     while (!q.empty()) {
    //         ans.emplace_back();
    //         for (int i = q.size(); i >= 1; i--) {
    //             Node* curr = q.front(); q.pop();
    //             ans.back().push_back(curr->val);
    //             for (Node* child : curr->children) {
    //                 q.push(child);
    //             }
    //         }
    //     }
    //     return ans;
    // }
};