// https://leetcode.com/problems/all-possible-full-binary-trees

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
    unordered_map<int,vector<TreeNode*>> fbtMap;
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n%2==0) return {};
        if(n==1) return {new TreeNode()};
        if(fbtMap.find(n)!=fbtMap.end()) return fbtMap[n];
        vector<TreeNode*> fbtList;
        for(int i=1;i<n;i+=2){
            vector<TreeNode*> leftSide=allPossibleFBT(i),rightSide=allPossibleFBT(n-i-1);
            for(TreeNode* leftSubTree:leftSide)
            for(TreeNode* rightSubTree:rightSide)
            fbtList.push_back(new TreeNode(0,leftSubTree,rightSubTree));
        }
        fbtMap[n]=fbtList;
        return fbtList;
    }
};