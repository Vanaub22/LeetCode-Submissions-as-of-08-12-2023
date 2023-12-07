// https://leetcode.com/problems/insertion-sort-list

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
    ListNode* insertionSortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* temp=head;
        int n=0,i=0;
        vector<int> lst;
        while(temp){
            n++;
            lst.push_back(temp->val);
            temp=temp->next;
        }
        while(++i<n){
            int temp=lst[i];
            int j=i;
            while(--j>=0){
                if(lst[j]>temp) lst[j+1]=lst[j];
                else break;
            }
            lst[j+1]=temp;
        }
        i=0;
        temp=head;
        while(temp){
            temp->val=lst[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};