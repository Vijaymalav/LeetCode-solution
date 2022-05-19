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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL and n==1)return NULL;
        int len=0;
        ListNode* curr=head;
        while(curr){
            curr=curr->next;
            len++;
        }
      if(n==len)return head->next;
        int del=len-n-1;
        curr=head;
        while(del){
            curr=curr->next;
            del--;
        }
        curr->next=curr->next->next;
        return head;
    }
};