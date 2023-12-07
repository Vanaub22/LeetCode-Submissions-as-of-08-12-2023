// https://leetcode.com/problems/linked-list-components

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
    int numComponents(ListNode* head, vector<int>& nums) {
        set<int> values;
        for(int i:nums) values.insert(i);
        ListNode* temp=head;
        bool connection=false;
        int components=0;
        while(temp) {
            if(values.find(temp->val)!=values.end() && !connection) {
                connection=true;
                components++;            
            }
            else if(values.find(temp->val)==values.end() && connection) connection =false;
            temp=temp->next;
        }
        return components;
    }
};