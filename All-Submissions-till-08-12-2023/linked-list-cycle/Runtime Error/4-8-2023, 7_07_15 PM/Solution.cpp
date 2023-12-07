// https://leetcode.com/problems/linked-list-cycle

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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
        return(false);
        if(head->next==head)
        return(true);
        ListNode *slow=head,*fast=head->next;
        while(fast!=NULL){
            if(slow!=fast){
                slow=slow->next;
                fast=fast->next->next;
            }
            else
            return(true);
        }
        return(false);
    }
};