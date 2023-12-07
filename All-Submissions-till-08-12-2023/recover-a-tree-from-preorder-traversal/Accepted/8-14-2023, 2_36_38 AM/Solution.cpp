// https://leetcode.com/problems/recover-a-tree-from-preorder-traversal

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
    TreeNode* recoverFromPreorder(string traversal) {
        unordered_map<int,TreeNode*> nodeAtDepth;
        int i=0,n=traversal.size();
        while(i<n){
            int depth=0;
            string val="";
            while(i<n && traversal[i]=='-'){
                i++;
                depth++;
            }
            while(i<n && isdigit(traversal[i])){
                val+=traversal[i];
                i++;
            }
            TreeNode* newNode=new TreeNode(stoi(val));
            if(depth>0){
                if(!nodeAtDepth[depth-1]->left) nodeAtDepth[depth-1]->left=newNode;
                else nodeAtDepth[depth-1]->right=newNode;
            }
            nodeAtDepth[depth]=newNode;
        }
        return nodeAtDepth[0];
    }
};