// https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list

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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head->next) return head;
        ListNode* temp=head,*succ=head->next;
        while(temp && succ) {
            ListNode* gcd_node=new ListNode(gcd(temp->val,temp->next->val),succ);
            temp->next=gcd_node;
            temp=succ;
            succ=succ->next;
        }
        return head;
    }
    int gcd(int a, int b) {
        return b==0?a:gcd(b,a%b);
    }
};