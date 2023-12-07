// https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree

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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrtoBST(vector<int> nodes,int start,int end){
        if(start>end)
        return(NULL);
        int mid=start+(end-start)/2;
        TreeNode* root=new TreeNode(nodes[mid]);
        root->left=sortedArrtoBST(nodes,start,mid-1);
        root->right=sortedArrtoBST(nodes,mid+1,end);
        return(root);
    }
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* temp=head;
        vector<int> nodeValues;
        while(temp){
            nodeValues.push_back(temp->val);
            temp=temp->next;
        }
        return(sortedArrtoBST(nodeValues,0,nodeValues.size()-1));
    }
};