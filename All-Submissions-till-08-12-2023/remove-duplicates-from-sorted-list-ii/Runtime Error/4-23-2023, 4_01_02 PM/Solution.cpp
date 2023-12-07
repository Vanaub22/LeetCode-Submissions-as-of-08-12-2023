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
        map<int,int> val_freq;
        ListNode* temp=head;
        while(temp){
            val_freq[temp->val]++;
            temp=temp->next;
        }
        temp=head;
        for(auto it:val_freq){
            if(it.second==1){
                temp=temp->next;
                temp->val=it.first;
            }

        }
        temp->next=NULL;
        return(head->next);
    }
};