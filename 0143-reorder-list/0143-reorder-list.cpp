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
    ListNode* splitAtMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;

        while(fast != NULL && fast->next != NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;

        }
        if(prev != NULL){
            prev->next= NULL; //split at middle

        }
        return slow;
    }

    ListNode* reverse(ListNode* head){
        ListNode* prev= NULL;
        ListNode* curr=head;
        ListNode* next= NULL;

        while(curr != NULL){
            next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        return prev; // prev is the head of reversed linked list ;
    }
    void reorderList(ListNode* head) {
        ListNode* rightHead=splitAtMid(head);
        ListNode* rightHeadRev=reverse(rightHead);

        ListNode* left=head;
        ListNode* right=rightHeadRev;
        ListNode* tail=right;
        
        while(left != NULL && right != NULL){
            ListNode* leftNext=left->next;
            ListNode* rightNext=right->next;

            left->next=right;
            right->next=leftNext;

            tail=right;

            left=leftNext;
            right=rightNext;

        }

        if(right){
            tail->next=right;
        }
  
    }
};