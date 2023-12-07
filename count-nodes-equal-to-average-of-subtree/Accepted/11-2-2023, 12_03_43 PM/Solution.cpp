// https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree

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
    // To calculate the subtree average of nodes
    int findAvgInSubtree(TreeNode* root) {
        if(!root) return 0;
        int sum_subtree=0,count_subtree=0;
        calcSubtree(root,count_subtree,sum_subtree);
        return sum_subtree/count_subtree;
    }
    // To count the number of nodes and sum of node values in the subtree
    void calcSubtree(TreeNode* root, int& node_count, int& node_sum) {
        if(!root) return;
        node_sum+=root->val;
        node_count+=1;
        calcSubtree(root->left,node_count,node_sum);
        calcSubtree(root->right,node_count,node_sum);
    }
    // To check for each node and find the count
    void checkSubtreeAvg(TreeNode* root, int& count) {
        if(!root) return;
        if(root->val==findAvgInSubtree(root)) count++;
        checkSubtreeAvg(root->left,count);
        checkSubtreeAvg(root->right,count);
    }
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        checkSubtreeAvg(root,count);
        return count;
    }
};