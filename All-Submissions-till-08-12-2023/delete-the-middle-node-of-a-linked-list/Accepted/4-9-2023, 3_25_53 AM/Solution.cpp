// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list

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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next)
        return(NULL);
        int nodeCount=0;
        ListNode* temp=head,*prev=head;
        while(temp){
            temp=temp->next;
            nodeCount++;
        }
        temp=head;
        nodeCount/=2;
        while(nodeCount--){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        return(head);
    }
};