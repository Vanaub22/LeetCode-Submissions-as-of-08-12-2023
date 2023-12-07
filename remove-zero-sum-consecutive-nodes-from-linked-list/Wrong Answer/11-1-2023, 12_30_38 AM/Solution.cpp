// https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list

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
    ListNode* removeZeroSumSublists(ListNode* head) {
        map<int,ListNode*> pref;
        // Attaching one extra node so that the reference is not lost even if the head node is removed
        ListNode* extra=new ListNode(0,head),*temp=extra;
        int prefSum=0;
        while(temp) {
            prefSum+=temp->val;
            if(pref.find(prefSum)==pref.end()) pref[prefSum]=temp;
            else pref[prefSum]->next=temp->next; // Removing all nodes in between
            temp=temp->next;
        }
        return extra->next;
    }
};