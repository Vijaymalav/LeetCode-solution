/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL)return NULL;
    unordered_map<Node*,Node*>m;
       
              Node* newnd=new Node(node->val,{});
                m[node]=newnd;
         queue<Node*>q;
        q.push(node);
        while(!q.empty()){
            Node* tmp=q.front();q.pop();
 
            for(auto it:tmp->neighbors){
                if(m.find(it)==m.end())
                {
                    q.push(it);
                Node* newnd=new Node(it->val,{});
                   m[it]=newnd;
                }
                m[tmp]->neighbors.push_back(m[it]);
            }
            
        }
        return m[node];
    }
};