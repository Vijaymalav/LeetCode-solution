// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




 // } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    // Node* insertionSort(struct Node* head_ref)
    // {
    //     Node* head=head_ref;
    //     head->next=NULL;
   
    //     Node* curr=head_ref->next;
    //     while(curr->next){
    //         Node* nd=curr;
    //         curr=curr->next;
    //         nd->next=NULL;
    //         Node* tmp=head;
    //         if(head->data>=nd->data){
    //             nd->next=head;
    //             head=nd;
    //         }
    //         else{
    //         while(tmp->next){
    //             if(tmp->next->data>=nd->data){
    //                 nd->next=tmp->next;
    //                 tmp->next=nd;
    //                 break;
    //             }
    //             if(tmp->next==NULL){
    //                 tmp->next=nd;
    //             }
    //             tmp=tmp->next;
    //         }
    //         }
    //     }
    //     return head;
    // }
     Node* insertionSort(struct Node* root)
    {
           
       for(Node* i = root; i!= NULL; i = i->next){
           Node*key = i; 
           Node*curr = key->next;
           
           while(curr!=NULL){
           
             if(key->data > curr->data){
             
                 int temp = key->data;
                 key->data = curr->data;
                 curr->data = temp;
             }
            curr =  curr->next;
           }
       }
       return root;
               
    }
    
};

// { Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}  // } Driver Code Ends