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
class Solution {
public:
    // Using Segmented Tree Concept
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0}); // Pushing in the root node
        // Performing Level-Order Traversal
        int maxWidth=0;
        while(!q.empty()) {
            int rmin=q.front().second,L=q.size(),first,last;
            for(int i=1;i<=L;i++){
                TreeNode* node=q.front().first;
                int idx=q.front().second; // Segmented Index
                q.pop();
                if(i==1) first=idx;
                if(i==L) last=idx;
                // In case of Long Skewed Trees, value might Overflow
                if(node->left) q.push({node->left,(long long)2*idx+1});
                if(node->right) q.push({node->right,(long long)2*idx+2});
            }
            maxWidth=max(maxWidth,last-first+1);
        }
        return maxWidth;
    }
};