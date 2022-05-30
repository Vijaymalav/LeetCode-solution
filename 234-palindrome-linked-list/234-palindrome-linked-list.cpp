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
    ListNode* rev(ListNode* head){
        ListNode* pre=NULL,*curr=head,*aft=NULL;
        while(curr){
            aft=curr->next;
            curr->next=pre;
            pre=curr;
            curr=aft;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        
        ListNode* curr=head;
        
      
        ListNode* s=head,*f=head;
        while(f and f->next){
            s=s->next;
            f=f->next->next;
        }
        
        s=rev(s);
        while(s and curr){
            if(s->val!=curr->val)return false;
            s=s->next;
            curr=curr->next;
        }
        return true;
    }
};