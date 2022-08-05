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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* head=new ListNode(-1);
        ListNode* tail=head;
        while(l1 || l2){
            int val1=l1?l1->val:0;
            int val2=l2?l2->val:0;
            int sum=val1+val2+carry;
            carry=sum/10;
            sum=sum%10;
          ListNode* tmp=new ListNode(sum);
            tail->next=tmp;
            tail=tmp;
            l1=l1?l1->next:l1;
            l2=l2?l2->next:l2;
        }
        if(carry){
             ListNode* tmp=new ListNode(carry);
            tail->next=tmp;
            tail=tmp;
        }
        return head->next;
    }
};