// https://leetcode.com/problems/create-binary-tree-from-descriptions

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
    // It has not been mentioned as a constraint but all node values are unique here
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*> nodeOfValue;
        set<int> notRoot; // set to store all node values that are not the root node
        for(auto& desc:descriptions) {
            int p_val=desc[0],chld_val=desc[1],isLeft=desc[2];
            notRoot.insert(chld_val); // If it is the child of some other node, it is not the root node
            if(nodeOfValue.find(p_val)==nodeOfValue.end()) {
                // The parent node has to be created
                TreeNode* par=new TreeNode(p_val);
                nodeOfValue[p_val]=par;
            }
            if(nodeOfValue.find(chld_val)==nodeOfValue.end()) {
                // The child node has to created
                TreeNode* chld=new TreeNode(chld_val);
                nodeOfValue[chld_val]=chld;
            }
            // Linking discrete components
            if(isLeft) nodeOfValue[p_val]->left=nodeOfValue[chld_val];
            else nodeOfValue[p_val]->right=nodeOfValue[chld_val];
        }
        // The root node is not a child of any other node
        for(auto it:nodeOfValue) if(notRoot.find(it.first)==notRoot.end()) return it.second;
        return nullptr;
    }
};