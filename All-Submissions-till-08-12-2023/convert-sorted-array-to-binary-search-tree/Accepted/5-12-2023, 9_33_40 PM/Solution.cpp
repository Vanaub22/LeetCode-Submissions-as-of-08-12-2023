// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree

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
    TreeNode* recArrtoBST(vector<int> arr,int start,int end){
        if(start>end)
        return(NULL);
        int mid=start+(end-start)/2;
        TreeNode* root=new TreeNode(arr[mid]);
        root->left=recArrtoBST(arr,start,mid-1);
        root->right=recArrtoBST(arr,mid+1,end);
        return(root);
    }
    TreeNode* sortedArrayToBST(vector<int>& arr) {
        return(recArrtoBST(arr,0,arr.size()-1));
    }
};