// https://leetcode.com/problems/even-odd-tree

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
    bool isEvenOddTree(TreeNode* root) {
       queue<TreeNode*> q;
       q.push(root);
       int levels=0;
       while(!q.empty()){
           int n=q.size(),maximum=INT_MAX,minimum=INT_MIN;
           for(int i=1;i<=n;i++){
               if(q.front()->left)
               q.push(q.front()->left);
               if(q.front()->right)
               q.push(q.front()->right);
               int value=q.front()->val;
               if(levels%2==0){
                   if(value<=minimum || value%2==0)
                   return(false);
                   minimum=value;
               }
               else{
                   if(value>=maximum || value%2!=0)
                   return(false);
                   maximum=value;
               }
               q.pop();
           }
           levels++;
       }
       return(true); 
    }
};