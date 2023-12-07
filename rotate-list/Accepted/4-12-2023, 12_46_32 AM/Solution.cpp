// https://leetcode.com/problems/rotate-list

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
        return(NULL);
        int n=0;
        ListNode *temp=head,*end;
        while(temp){
            n++;
            end=temp;
            temp=temp->next;
        }
        k=k%n;
        if(k==0)
        return(head);
        k=n-k;
        temp=head;
        ListNode *prev=head;
        while(k){
            k--;
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        end->next=head;
        return(temp);
    }
};