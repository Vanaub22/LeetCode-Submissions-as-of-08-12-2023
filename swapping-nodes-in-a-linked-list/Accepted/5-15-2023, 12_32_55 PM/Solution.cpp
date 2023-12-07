// https://leetcode.com/problems/swapping-nodes-in-a-linked-list

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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==NULL)
        return(head);
        ListNode *temp=head,*node1,*node2;
        int n=1,i=0;
        while(temp){
            temp=temp->next;
            n++;
        }
        k=k%n;
        temp=head;
        while(temp){
            i++;
            if(i==k)
            node1=temp;
            if(i==n-k)
            node2=temp;
            temp=temp->next;
        }
        swap(node1->val,node2->val);
        return(head);
    }
};