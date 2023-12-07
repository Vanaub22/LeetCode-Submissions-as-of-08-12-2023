// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head||!head->next)
        return(head);
        map<int,int> val_freq;
        ListNode* temp=head,*prev;
        while(temp){
            val_freq[temp->val]++;
            temp=temp->next;
        }
        temp=head;
        for(auto it:val_freq){
            if(it.second==1){
                temp->val=it.first;
                prev=temp;
                temp=temp->next;
            }
        }
        temp->next=NULL;
        prev->next=temp->next;
        delete(temp);
        return(head);
    }
};