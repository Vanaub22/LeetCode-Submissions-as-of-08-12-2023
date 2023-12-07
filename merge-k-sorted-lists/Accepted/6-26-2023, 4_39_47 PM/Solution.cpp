// https://leetcode.com/problems/merge-k-sorted-lists

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> fullList;
        for(ListNode* list:lists)
        while(list){
            fullList.push_back(list->val);
            list=list->next;
        }
        int n=fullList.size();
        if(n==0)
        return(NULL);
        sort(fullList.begin(),fullList.end());
        ListNode* head=new ListNode(fullList[0]),*curr=head;
        for(int i=1;i<n;i++){
            ListNode* node=new ListNode(fullList[i]);
            curr->next=node;
            curr=curr->next;
        }
        return(head);
    }
};