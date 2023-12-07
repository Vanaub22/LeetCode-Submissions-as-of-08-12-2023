// https://leetcode.com/problems/split-linked-list-in-parts

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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> partitions;
        ListNode* temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        int big_groups=n%k;
        temp=head;
        for(int i=0;i<k;i++){
            int size=big_groups?n/k+1:n/k;
            ListNode* partition_head=nullptr,*partition_tail=nullptr;
            for(int j=0;j<size;j++){
                if(!partition_head) partition_head=partition_tail=temp;
                else{
                    partition_tail->next=temp;
                    partition_tail=partition_tail->next;
                }
                if(temp) temp=temp->next;
            }
            if(partition_tail) partition_tail->next=nullptr;
            partitions.push_back(partition_head);
            if(big_groups>0) big_groups--;
        }
        return partitions;
    }
};