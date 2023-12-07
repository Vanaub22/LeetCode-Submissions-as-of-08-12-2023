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
        ListNode* temp=l1,*res,*head;
        long long num1=0,num2=0;
        int i=1,n;
        string sum;
        while(temp){
            num1=(num1*10)+temp->val;
            temp=temp->next;
        }
        temp=l2;
        while(temp){
            num2=(num2*10)+temp->val;
            temp=temp->next;
        }
        sum=to_string(num1+num2);
        n=sum.length();
        res=new ListNode(sum[0]-'0'),head=res;
        while(i<n){
            ListNode* node=new ListNode(sum[i]-'0');
            res->next=node;
            res=res->next;
            i++;
        }
        return head;
    }
};