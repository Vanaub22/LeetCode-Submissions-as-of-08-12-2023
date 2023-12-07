// https://leetcode.com/problems/reverse-nodes-in-k-group

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next)
        return(head);
        int count=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            count++;
        }
        if(count<=1 || k>count)
        return(head);
        temp=head;
        ListNode* new_head;
        int reversals=count/k,i=1;
        while(i<=reversals){
            stack<int> stk;
            ListNode* ans=temp;
            for(int i=0;i<k;i++){
                stk.push(temp->val);
                temp=temp->next;
            }
            if(i==1)
            new_head=ans;
            i++;
            while(!stk.empty()){
                ans->val=stk.top();
                stk.pop();
                ans=ans->next;
            }
        }
        return(new_head);
    }
};