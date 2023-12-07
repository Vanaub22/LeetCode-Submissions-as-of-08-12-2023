// https://leetcode.com/problems/find-bottom-left-tree-value

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
    int findBottomLeftValue(TreeNode* root) {
        int leftmost;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=1;i<=n;i++){
                if(q.front()->left)
                q.push(q.front()->left);
                if(q.front()->right)
                q.push(q.front()->right);
                if(i==1)
                leftmost=q.front()->val;
                q.pop();
            }
        }
        return(leftmost);
    }
};