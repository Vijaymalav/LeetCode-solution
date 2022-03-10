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
        ListNode* curr1=l1,*curr2=l2,*newhead=NULL,*tail=NULL;
        
        while(curr1 || curr2){
            int a=curr1?curr1->val:0;
            int b=curr2?curr2->val:0;
            int sum=a+b+carry;
            carry=sum/10;
            sum=sum%10;
            if(newhead==NULL){
                newhead=new ListNode(sum);
                tail=newhead;
            }
            else{
                tail->next=new ListNode(sum);
                tail=tail->next;
            }
            if(curr1)curr1=curr1->next;
            if(curr2)curr2=curr2->next;
            
        }
        if(carry!=0){
            tail->next=new ListNode(carry);
            
        }
        return newhead;
        
    }
};