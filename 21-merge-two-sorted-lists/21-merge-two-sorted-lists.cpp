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
    
    ListNode* helper(ListNode* l1,ListNode* l2){
        if(!l1 and !l2)return NULL;
       if(l1 and !l2)return l1;
        if(!l1 and l2)return l2;
        if(l1->val>l2->val){
            l2->next=helper(l1,l2->next);
            return l2;
        }
     
         l1->next=helper(l1->next,l2);
     return l1;
   
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        return helper(list1,list2);
    }
};