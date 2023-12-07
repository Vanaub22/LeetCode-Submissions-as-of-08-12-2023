// https://leetcode.com/problems/linked-list-cycle-ii

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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
        return(head);
        set<ListNode*> nodeAddresses={head};
        ListNode* temp=head->next;
        while(temp){
            if(nodeAddresses.find(temp)==nodeAddresses.end())
            nodeAddresses.insert(temp);
            else
            return(temp);
            temp=temp->next;
        }
        return(NULL);
    }
};