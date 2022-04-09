// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


 // } Driver Code Ends
/*
// node structure:

struct Node
{
    int data;
    Node* left;
    Node* right;
};

*/

class Solution{
public:
 Node* jio = new Node() ;
    void inorder(Node* root,unordered_map<Node*,Node*>&mp ,int target ){
        if(!root){
            return ;
        }
        if(root->data == target){
            jio = root ;
        }
        mp[root->left] = root ;
        mp[root->right] = root ;
        inorder(root->left,mp,target) ;
        inorder(root->right,mp,target) ;
    }
    int sum_at_distK(Node* root, int target, int k)
    {
        // code here
        unordered_map<Node*,Node*>mp ;
        
        inorder(root,mp,target) ;
        queue<pair<Node*,int>>Q ;
        Q.push({jio,0}) ;
        int sol =0 ;
        //cout<<jio->data<<"\n";
        unordered_map<Node*,int>visited ;
        visited[jio] = 1;
        while(!Q.empty()){
            auto it = Q.front() ;
            Node* repo = it.first ;
            sol += repo->data ;
            //cout<<repo->data<<" "<<sol<<"\n";
            int count = it.second ;
            Q.pop() ;
            if(repo->left && visited[repo->left] == 0 && count<k ){
                Q.push({repo->left,count+1}) ;
                visited[repo->left] =1 ;
            }
            if( repo->right && visited[repo->right] == 0 && count<k ){
                Q.push({repo->right,count+1});
                visited[repo->right] =1 ;
            }
            if(mp.find(repo)!=mp.end() && visited[mp[repo]] == 0 && count<k ){
                auto it1 = mp[repo] ;
                Q.push({it1,count+1});
                visited[it1] = 1 ;
            }
        }
        return sol ;
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        
        int target,k;
        cin>> target >> k;
        getchar();
        
        Solution ob;
        cout<< ob.sum_at_distK(root,target,k) << endl;
    }
	return 0;
}

  // } Driver Code Ends