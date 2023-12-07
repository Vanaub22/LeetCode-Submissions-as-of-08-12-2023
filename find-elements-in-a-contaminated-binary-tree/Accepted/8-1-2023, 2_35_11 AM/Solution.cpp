// https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree

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
class FindElements {
public:
    TreeNode* newRoot;
    FindElements(TreeNode* root) {
        contaminate(root);
        recover(root,0);
        newRoot=root;
    }
    bool find(int target) {
        return dfs(newRoot,target);
    }
    bool dfs(TreeNode* root, int target){
        if(!root) return false;
        else if(root->val==target) return true;
        else return dfs(root->left,target) || dfs(root->right,target);
    }
    void recover(TreeNode* node, int x){
        if(!node) return;
        node->val=x;
        recover(node->left,2*x+1);
        recover(node->right,2*x+2);        
    }
    void contaminate(TreeNode* node){
        if(!node) return;
        node->val=-1;
        contaminate(node->left);
        contaminate(node->right);        
    }
};
/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */