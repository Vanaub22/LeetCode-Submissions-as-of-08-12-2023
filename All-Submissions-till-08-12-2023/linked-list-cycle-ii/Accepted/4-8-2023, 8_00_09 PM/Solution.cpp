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
        set<ListNode*> nodeAddresses={head};
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            if(nodeAddresses.find(temp)!=nodeAddresses.end())
            return(temp);
            nodeAddresses.insert(temp);
        }
        return(NULL);
    }
};