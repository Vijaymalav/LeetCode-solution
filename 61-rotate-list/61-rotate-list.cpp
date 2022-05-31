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
        
        int len=0;
        ListNode* curr=head;
        while(curr){
            len++;
            curr=curr->next;
        }
        if(len==0)return head;
        k=k%len;
        if(k==0 || len==0 )return head;
        int cnt=len-k-1;
        curr=head;
        while(cnt--){
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