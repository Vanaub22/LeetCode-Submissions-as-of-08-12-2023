// https://leetcode.com/problems/next-greater-node-in-linked-list

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
    int findNextGreater(ListNode* &h){
        ListNode *temp=h->next;
        if(!temp)
        return(0);
        int nextGreater=0;
        while(temp){
            if(temp->val>h->val){
                nextGreater=temp->val;
                break;
                }
            temp=temp->next;
        }
        return(nextGreater);
    }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> nextGreater;
        if(head==NULL)
        return(nextGreater);
        ListNode *temp=head;
        while(temp){
            nextGreater.push_back(findNextGreater(temp));
            temp=temp->next;
        }
        return(nextGreater);
    }
};