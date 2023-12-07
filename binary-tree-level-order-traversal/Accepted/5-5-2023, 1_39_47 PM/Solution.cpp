// https://leetcode.com/problems/binary-tree-level-order-traversal

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
//using a queue to store levels - BFS
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> traversal;
        if(!root)
        return(traversal);
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            vector<int> level;
            int n=Q.size();
            for(int i=1;i<=n;i++){
                if(Q.front()->left)
                Q.push(Q.front()->left);
                if(Q.front()->right)
                Q.push(Q.front()->right);
                level.push_back(Q.front()->val);
                Q.pop();
            }
            traversal.push_back(level);
            level.clear();
        }
        return(traversal);
    }
};