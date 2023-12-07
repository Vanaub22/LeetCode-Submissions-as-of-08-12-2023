// https://leetcode.com/problems/maximum-width-of-binary-tree

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
#define ll long long
class Solution {
public:
    // Using Segmented Tree Concept
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        q.push({root,0}); // Pushing in the root node
        // Performing Level-Order Traversal
        int maxWidth=0;
        while(!q.empty()) {
            int L=q.size(),first,last;
            for(int i=1;i<=L;i++){
                TreeNode* node=q.front().first;
                int idx=q.front().second; // Segmented Index
                q.pop();
                if(i==1) first=idx; // Segmented index of first node in level
                if(i==L) last=idx; // Segmented index of last node in level
                if(node->left) q.push({node->left,(ll)2*idx+1});
                if(node->right) q.push({node->right,(ll)2*idx+2});
            }
            maxWidth=max(maxWidth,last-first+1);
        }
        return maxWidth;
    }
};