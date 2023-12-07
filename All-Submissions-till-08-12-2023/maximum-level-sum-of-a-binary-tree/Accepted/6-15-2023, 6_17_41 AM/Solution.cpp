// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree

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
    int maxLevelSum(TreeNode* root) {
        int level=0,max_level_sum=INT_MIN,level_no;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size(),level_sum=0;
            for(int i=1;i<=n;i++){
                if(q.front()->left)
                q.push(q.front()->left);
                if(q.front()->right)
                q.push(q.front()->right);
                level_sum+=q.front()->val;
                q.pop();
            }
            level++;
            if(level_sum>max_level_sum){
                max_level_sum=level_sum;
                level_no=level;
            }
        }
        return(level_no);
    }
};