// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer

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
    int getDecimalValue(ListNode* head) {
        int exp=0,decimalValue=0;
        ListNode* temp=head;
        while(temp!=NULL){
            decimalValue+=pow(2,exp)*temp->val;
            temp=temp->next;
            exp++;
        }
        return(decimalValue);
    }
};