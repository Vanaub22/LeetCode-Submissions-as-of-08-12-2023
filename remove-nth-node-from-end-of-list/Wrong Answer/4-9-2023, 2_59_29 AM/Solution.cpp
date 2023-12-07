// https://leetcode.com/problems/remove-nth-node-from-end-of-list

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int nodeCount=1;
        ListNode *temp=head,*prev;
        while(temp->next){
            prev=temp;
            temp=temp->next;
            nodeCount++;
        }
        if(nodeCount==1)
        return(NULL);
        if(n==1){
            prev->next=NULL;
            return(head);
        }
        temp=head;
        for(int i=0;i<nodeCount-n;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        return(head);
    }
};