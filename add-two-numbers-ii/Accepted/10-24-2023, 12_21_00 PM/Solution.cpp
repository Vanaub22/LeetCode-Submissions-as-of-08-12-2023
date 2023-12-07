// https://leetcode.com/problems/add-two-numbers-ii

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Using Stacks for the Reversal
        stack<int> stk1,stk2;
        while(l1) {
            stk1.push(l1->val);
            l1=l1->next;
        }
        while(l2) {
            stk2.push(l2->val);
            l2=l2->next;
        }
        ListNode* addition=new ListNode();
        while(!stk1.empty() || !stk2.empty()) {
            if(!stk1.empty()) {
                addition->val+=stk1.top();
                stk1.pop();
            }
            if(!stk2.empty()) {
                addition->val+=stk2.top();
                stk2.pop();
            }
            ListNode* node=new ListNode(addition->val/10); // Handling Carry
            addition->val%=10;
            node->next=addition;
            addition=node;
        }
        return addition->val==0?addition->next:addition;
    }
};