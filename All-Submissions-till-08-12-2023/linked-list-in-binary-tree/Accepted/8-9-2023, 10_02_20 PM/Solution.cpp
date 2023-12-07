// https://leetcode.com/problems/linked-list-in-binary-tree

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    void dfsPaths(TreeNode*& root, vector<int>& path, vector<vector<int>>& allPaths){
        if(!root){ 
            allPaths.push_back(path);
            return;
        }
        path.push_back(root->val);
        dfsPaths(root->left,path,allPaths);
        dfsPaths(root->right,path,allPaths);
        path.pop_back();
    }
    bool hasMatchingSubArray(vector<vector<int>>& allPaths, vector<int>& subpath){
        for(vector<int> path:allPaths)
        if(isSubArray(path,subpath)) return true;
        return false;
    }
    bool isSubArray(vector<int>& arr, vector<int> subarray){
        int m=subarray.size(),n=arr.size();
        if(m>n) return false;
        for(int i=0;i<=n-m;i++){
            bool isSub=true;
            for(int j=0;j<m;j++)
            if(arr[i+j]!=subarray[j]){
                isSub=false;
                break;
            }
            if(isSub) return true;
        }
        return false;
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        vector<int> subpath,path;
        ListNode* temp=head;
        while(temp){
            subpath.push_back(temp->val);
            temp=temp->next;
        }
        vector<vector<int>> allPaths;
        dfsPaths(root,path,allPaths);
        return hasMatchingSubArray(allPaths,subpath);
    }
};