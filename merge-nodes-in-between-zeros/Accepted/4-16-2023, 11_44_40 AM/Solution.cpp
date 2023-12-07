// https://leetcode.com/problems/merge-nodes-in-between-zeros

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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp=head->next,*newNode,*newHead,*prev;
        bool first=true;
        int sum=0;
        while(temp){
            sum+=temp->val;
            if(temp->val==0){
                newNode=new ListNode(sum);
                sum=0;
                if(first){
                    prev=newNode;
                    newHead=newNode;
                    first=false;
                    }
                else{
                    prev->next=newNode;
                    prev=newNode;
                }
            }
            temp=temp->next;
        }
        return(newHead);
    }
};