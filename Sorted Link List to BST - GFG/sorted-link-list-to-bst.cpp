// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; 

void preOrder(TNode* node)  
{  
    if (node == NULL)  
        return;  
    cout<<node->data<<" ";  
    preOrder(node->left);  
    preOrder(node->right);  
} 


 // } Driver Code Ends
//User function Template for C++


//User function Template for C++

/* 
//Linked List
struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

//Tree
struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; */
class Solution{
  public:
  TNode* buildtree(vector<int>&vec,int s,int e){
      if(s>e)return NULL;
    //   if(e==s)return new TNode(vec[s]);
      
    //   int mid=(s+e)%2!=0?(s+e+1)/2:(s+e)/2;
      int mid = ceil(((double)s + e)/2);
      TNode* nd=new TNode(vec[mid]);
     nd->left= buildtree(vec,s,mid-1);
     nd->right= buildtree(vec,mid+1,e);
     return nd;
      
  }
    TNode* sortedListToBST(LNode *head) {
        //code here
        vector<int>vec;
        while(head!=NULL){
            vec.push_back(head->data);
            head=head->next;
        }
      return  buildtree(vec,0,vec.size()-1);
    }

//   TNode* buildtree(vector<int> &vec, int s, int e){
//         if(s > e){
//             return NULL;
//         }
//         int mid = ceil(((double)s + e)/2);
//         TNode* root = new TNode(vec[mid]);
//         root->left = buildtree(vec, s, mid - 1);
//         root->right = buildtree(vec, mid + 1, e);
//         return root;
//     }
    
    
//     TNode* sortedListToBST(LNode *head) {
//         vector<int> sortedVec ;
//         while(head != NULL){
//             sortedVec.push_back(head->data);
//             head = head->next;
//         }
//         TNode* root = buildtree(sortedVec, 0, sortedVec.size() - 1);
//         return root;
    // }  
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        LNode *head = new LNode(data);
        LNode *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new LNode(data);
            tail = tail->next;
        }
        Solution ob;
        TNode* Thead = ob.sortedListToBST(head);
        preOrder(Thead);
        cout<<"\n";
        
    }
    return 0;
}
  // } Driver Code Ends