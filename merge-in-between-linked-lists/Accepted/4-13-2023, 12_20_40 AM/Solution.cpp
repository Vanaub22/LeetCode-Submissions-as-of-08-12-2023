// https://leetcode.com/problems/merge-in-between-linked-lists

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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int i=1;
        ListNode *prev,*extra,*temp=list1,*rest;
        while(i<=a){
            i++;
            prev=temp;
            temp=temp->next;
        }
        prev->next=list2;
        while(i<=b){
            i++;
            prev=temp;
            temp=temp->next;
            delete(prev);
        }
        rest=temp->next;
        temp=list2;
        while(temp->next){
            temp=temp->next;            
        }
        temp->next=rest;
        return(list1);
    }
};