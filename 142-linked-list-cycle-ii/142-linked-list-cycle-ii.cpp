/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      ListNode* s=head,*f=head;
        while(f and f->next){
            s=s->next;
            f=f->next->next;
            if(s==f)break;
        }
        if(!f || f->next==NULL)return NULL;
        if(s==head)return s;
        f=head;
        while(s->next!=f->next){
          
            s=s->next;
            f=f->next;
        }
        return s->next;
    }
};