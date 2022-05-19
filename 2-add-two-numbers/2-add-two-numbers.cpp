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
        ListNode* head=NULL;
        ListNode* tail=NULL;
            
        while(l1 || l2){
            int a=l1?l1->val:0;
            int b=l2?l2->val:0;
            int sum=a+b+carry;
            carry=sum/10;
            sum=sum%10;
            if(!head){
                head=new ListNode(sum);
                tail=head;
            }
            else {
                tail->next=new ListNode(sum);
                tail=tail->next;
            }
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
            
        }
        if(carry>0){
             tail->next=new ListNode(carry);
        }
        return head;
    }
};