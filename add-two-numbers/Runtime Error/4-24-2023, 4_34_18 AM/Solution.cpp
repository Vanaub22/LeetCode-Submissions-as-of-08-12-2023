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
// conversion won't work...test cases contain number which won't even fit in long long
class Solution {
public:
    int Carry(int a, int b, int c){
        return(a+b+c>9?1:0);
    }
    int Sum(int a, int b, int c){
        return(a+b+c>9?(a+b+c)%10:a+b+c);
    }
    void removeLeadZero(ListNode* &head){
        ListNode *temp=head,*prev;
        while(temp->next){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete(temp);
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0,s;
        ListNode *head=new ListNode();
        ListNode *temp=head;
        while(l1&&l2){
            s=Sum(l1->val,l2->val,c);
            c=Carry(l1->val,l2->val,c);
            temp->val=s;
            ListNode *newNode=new ListNode();
            temp->next=newNode;
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            if(c){
                temp->val=Sum(l1->val,0,c);
                c=Carry(l1->val,0,c);
            }
            else
            temp->val=l1->val;
            ListNode *newNode=new ListNode();
            temp->next=newNode;
            temp=temp->next;
            l1=l1->next;
        }
        while(l2){
            if(c){
                temp->val=Sum(l2->val,0,c);
                c=Carry(l2->val,0,c);
            }
            else
            temp->val=l1->val;
            ListNode *newNode=new ListNode();
            temp->next=newNode;
            temp=temp->next;
            l2=l2->next;
        }
        if(c)
        temp->val=c;
        else
        removeLeadZero(head);
        return(head);
    }
};