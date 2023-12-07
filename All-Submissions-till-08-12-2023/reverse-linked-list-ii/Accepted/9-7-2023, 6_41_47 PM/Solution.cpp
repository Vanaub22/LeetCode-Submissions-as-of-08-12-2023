// https://leetcode.com/problems/reverse-linked-list-ii

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *temp=head;
        vector<int> values;
        while(temp){
            values.push_back(temp->val);
            temp=temp->next;
        }
        reverse(values.begin()+left-1,values.begin()+right);
        temp=head;
        int i=0;
        while(temp){
            temp->val=values[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};