// https://leetcode.com/problems/merge-two-sorted-lists

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
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        if(!h1||!h2)
        return(h1?h1:h2);
        ListNode *head=h2;
        if(h1->val<h2->val){
            head->val=h1->val;
            h1=h1->next;
        }
        else
        h2=h2->next;
        ListNode *temp=head;
        while(h1&&h2){
            if(h1->val<h2->val){
                temp->next=h1;
                temp=temp->next;
                temp->val=h1->val;
                h1=h1->next;
            }
            else{
                temp->next=h2;
                temp=temp->next;
                temp->val=h2->val;
                h2=h2->next;
            }
        }
        while(h1){
            temp->next=h1;
            temp=temp->next;
            temp->val=h1->val;
            h1=h1->next;
        }
        while(h2){
            temp->next=h2;
            temp=temp->next;
            temp->val=h2->val;
            h2=h2->next;
        }
        return(head);
    }
};