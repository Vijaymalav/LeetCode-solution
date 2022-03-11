/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return NULL;
           ListNode* curr=head; 
        int cnt=0;
        while(curr){
            cnt++;
            curr=curr->next;
        }
        k=k%cnt;
        if(k==0)return head;
        int n=cnt-k-1;
        curr=head;
        while(n--){
            curr=curr->next;
        }
          ListNode* newhead=curr->next;
        curr->next=NULL;
        curr=newhead;
        while(curr->next){
            curr=curr->next;
        }
        curr->next=head;
        return newhead;
        
    }
};