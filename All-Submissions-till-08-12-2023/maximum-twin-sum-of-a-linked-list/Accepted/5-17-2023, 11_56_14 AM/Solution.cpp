// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list

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
    int pairSum(ListNode* ptr) {
        vector<int> list;
        while(ptr){
            list.push_back(ptr->val);
            ptr=ptr->next;
        }
        int n=list.size(),maxTwinSum=INT_MIN;
        for(int i=0;i<n/2;i++)
        maxTwinSum=max(maxTwinSum,list[i]+list[n-i-1]);
        return(maxTwinSum);
    }
};