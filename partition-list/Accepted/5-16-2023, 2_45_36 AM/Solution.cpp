// https://leetcode.com/problems/partition-list

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
    ListNode* partition(ListNode* head, int x) {
        if(!head||!head->next)
        return(head);
        vector<int> nodeValues,partitioned;
        ListNode *temp=head;
        bool flag=false;
        int i=0,pivot_index=0;
        while(temp){
            nodeValues.push_back(temp->val);
            if(temp->val==x && !flag){
                pivot_index=i;
                flag=true;
            }
            temp=temp->next;
            i++;
        }
        for(int i=0;i<pivot_index;i++)
        if(nodeValues[i]<x)
        partitioned.push_back(nodeValues[i]);
        for(int i=pivot_index;i<nodeValues.size();i++)
        if(nodeValues[i]<x)
        partitioned.push_back(nodeValues[i]);
        for(int i=0;i<pivot_index;i++)
        if(nodeValues[i]>x)
        partitioned.push_back(nodeValues[i]);
        for(int i=pivot_index;i<nodeValues.size();i++)
        if(nodeValues[i]>=x)
        partitioned.push_back(nodeValues[i]);
        nodeValues=partitioned;
        partitioned.clear();
        i=0;
        temp=head;
        while(temp){
            temp->val=nodeValues[i++];
            temp=temp->next;
        }
        return(head);
    }
};