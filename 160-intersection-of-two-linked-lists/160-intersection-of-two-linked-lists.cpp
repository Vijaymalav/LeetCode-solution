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
    int len(ListNode* head){
        int cnt=0;
        ListNode* curr=head;
        while(curr){
            curr=curr->next;
            cnt++;
        }
        return cnt;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=len(headA);
        int len2=len(headB);
        if(len1>len2){
            int dif=(len1-len2);
            while(dif){
                headA=headA->next;
                dif--;
            }
        }
        else {
             int dif=(len2-len1);
            while(dif){
                headB=headB->next;
                dif--;
            }
        }
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};