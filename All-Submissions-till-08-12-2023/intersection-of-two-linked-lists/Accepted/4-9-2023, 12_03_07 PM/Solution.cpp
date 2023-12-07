// https://leetcode.com/problems/intersection-of-two-linked-lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> nodeAddresses;
        ListNode *temp=headA,*intersection=NULL;
        while(temp){
            nodeAddresses.insert(temp);
            temp=temp->next;
        }
        temp=headB;
        while(temp){
            if(nodeAddresses.find(temp)!=nodeAddresses.end()){
                intersection=temp;
                break;
            }
            temp=temp->next;
        }
        return(intersection);
    }
};