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
    ListNode* partition(ListNode* head, int x) {
        if(!head)return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* curr=dummy,*newhead=NULL,*tail=NULL;
        while(curr){
            if(curr->next and curr->next->val<x){
                ListNode* nd=curr->next;
                curr->next=nd->next;
                nd->next=NULL;
                if(newhead==NULL){
                    newhead=nd;
                    tail=nd;
                }
                else {
                    tail->next=nd;
                    tail=nd;
                }
            }
            else curr=curr->next;
            
        }
        if(!tail)return head;
        tail->next=dummy->next;
        return newhead;
    }
};