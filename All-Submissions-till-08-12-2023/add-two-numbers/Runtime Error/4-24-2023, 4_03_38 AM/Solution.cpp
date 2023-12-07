// https://leetcode.com/problems/add-two-numbers

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
    ListNode* makeRevList(long long n){
        ListNode *head=new ListNode();
        ListNode *temp=head;
        while(true){
            temp->val=n%10;
            n/=10;
            if(n){
                ListNode *newNode=new ListNode();
                temp->next=newNode;
                temp=temp->next;
            }
            else
            break;
        }
        return(head);
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long a=0,b=0,exp=0;
        ListNode *temp=l1;
        while(temp){
            a+=(temp->val*pow(10,exp));
            exp++;
            temp=temp->next;
        }
        temp=l2;
        exp=0;
        while(temp){
            b+=(temp->val*pow(10,exp));
            exp++;
            temp=temp->next;
        }
        return(makeRevList(a+b));
    }
};