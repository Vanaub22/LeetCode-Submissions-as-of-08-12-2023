// https://leetcode.com/problems/remove-linked-list-elements

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
    ListNode* removeElements(ListNode* head, int x) {
       if(head==NULL)
       return(NULL);
       ListNode *temp=head,*prev=head;
       while(temp){
           if(temp->val==x){
               if(temp==head){
                   head=head->next;
                   temp=head;
                   prev=head;
               }
               else{
                   temp=temp->next;
                   prev->next=temp;
               }
           }
           else{
               prev=temp;
           temp=temp->next;}
       }
       return(head); 
    }
};