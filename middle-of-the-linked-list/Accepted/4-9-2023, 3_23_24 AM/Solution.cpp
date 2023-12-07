// https://leetcode.com/problems/middle-of-the-linked-list

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
    ListNode* middleNode(ListNode* head) {
        if(!head->next)
        return(head);
        int nodeCount=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            nodeCount++;
        }
        temp=head;
        nodeCount/=2;
        while(nodeCount--)
        temp=temp->next;
        return(temp);
    }
};