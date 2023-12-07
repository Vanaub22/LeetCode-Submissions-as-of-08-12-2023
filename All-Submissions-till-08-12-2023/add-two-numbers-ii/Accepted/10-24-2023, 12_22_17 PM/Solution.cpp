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
        ListNode* sum=new ListNode();
        while(!stk1.empty() || !stk2.empty()) {
            if(!stk1.empty()) {
                sum->val+=stk1.top();
                stk1.pop();
            }
            if(!stk2.empty()) {
                sum->val+=stk2.top();
                stk2.pop();
            }
            ListNode* node=new ListNode(sum->val/10); // Handling Carry
            sum->val%=10;
            node->next=sum;
            sum=node;
        }
        return sum->val==0?sum->next:sum;
    }
};