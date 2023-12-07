// https://leetcode.com/problems/most-frequent-subtree-sum

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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> freqtreeSums;
        unordered_map<int,int> subtreeSumFreq;
        dfs(root,subtreeSumFreq);
        int maxFreq=-1;
        for(auto& sumFreq:subtreeSumFreq) {
            if(maxFreq<=sumFreq.second) {
                if(maxFreq<sumFreq.second) {
                    maxFreq=sumFreq.second;
                    freqtreeSums.clear();
                }
                freqtreeSums.emplace_back(sumFreq.first);
            }
        }
        return freqtreeSums;
    }
    int subtreeSum(TreeNode* root) {
        return root?root->val+subtreeSum(root->left)+subtreeSum(root->right):0;
    }
    void dfs(TreeNode* root, unordered_map<int,int>& subtreeSumFreq) {
        if(!root) return;
        subtreeSumFreq[subtreeSum(root)]++;
        dfs(root->left,subtreeSumFreq);
        dfs(root->right,subtreeSumFreq);
    }
};