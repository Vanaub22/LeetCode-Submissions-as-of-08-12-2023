// https://leetcode.com/problems/n-ary-tree-postorder-traversal

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;
    Node() {}
    Node(int _val) {
        val = _val;
    }
    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    void traversal(Node* root, vector<int>& postorder){
        if(!root)
        return;
        for(int i=0;i<root->children.size();i++)
        traversal(root->children[i],postorder);
        postorder.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> postorder;
        traversal(root,postorder);
        return(postorder);
    }
};