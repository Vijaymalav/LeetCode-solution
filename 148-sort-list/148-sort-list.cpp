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
    ListNode* findmid(ListNode* head){
        ListNode* s=head;
        ListNode* f=head->next;
        while(f and f->next){
            s=s->next;
            f=f->next->next;
        }
        ListNode* mid=s->next;
        s->next=NULL;
        return mid;
    }
    
    ListNode* merge(ListNode* left,ListNode* right){
        if(!left and !right)return NULL;
        if(left==NULL)return right;
        if(right==NULL)return left;
        if(left->val>right->val){
            right->next=merge(left,right->next);
            return right;
        }
        else{
            left->next=merge(left->next,right);
            return left;
        }
    }
    
    
    ListNode* mergesort(ListNode* head){
        if(head->next==NULL)return head;
        ListNode* mid=findmid(head);
        ListNode* left=mergesort(head);
        ListNode* right=mergesort(mid);
        return merge(left,right);
    } 
    ListNode* sortList(ListNode* head) {
        if(head==NULL)return NULL;
        // Brueteforce approach
//         vector<int>vec;
//         ListNode* curr=head;
//        while(curr){
//            vec.push_back(curr->val);
//            curr=curr->next;
           
//        }
//         sort(vec.begin(),vec.end());
//         curr=head;
//         int i=0;
//         while(curr){
//             curr->val=vec[i++];
//             curr=curr->next;
//         }
//         return head;
        return mergesort(head);
        
        
        
        
    }
};