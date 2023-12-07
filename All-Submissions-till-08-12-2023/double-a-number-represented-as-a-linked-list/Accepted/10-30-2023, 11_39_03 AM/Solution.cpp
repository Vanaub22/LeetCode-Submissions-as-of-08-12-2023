// https://leetcode.com/problems/double-a-number-represented-as-a-linked-list

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
    // Using a Stack of node pointers for reversal
    ListNode* doubleIt(ListNode* head) {
        stack<ListNode*> nodeStack; // Storing the node pointers directly in the stack
        ListNode* temp=head;
        while(temp) {
            nodeStack.push(temp);
            temp=temp->next;
        }
        int carry=0;
        while(!nodeStack.empty()) {
            ListNode* node=nodeStack.top();
            node->val*=2;
            node->val+=carry;
            if(node->val/10==0) carry=0;
            else {
                carry=node->val/10;
                node->val=node->val%10;
            }
            nodeStack.pop();
        }
        if(carry) {
            ListNode* newNode=new ListNode(carry);
            newNode->next=head;
            head=newNode;
        }
        return head;
    }
};