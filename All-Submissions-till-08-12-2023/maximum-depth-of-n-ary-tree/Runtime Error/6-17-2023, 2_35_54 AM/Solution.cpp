// https://leetcode.com/problems/maximum-depth-of-n-ary-tree

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
    int maximum_depth(Node* root, int maximumDepth) {
        if(!root)
        return(0);
        for(int i=0;i<root->children.size();i++)
        maximumDepth=max(1+maxDepth(root->children[i]),maximumDepth);
        return(maximumDepth);
    }
    int maxDepth(Node* root){
        return(maximum_depth(root,1));
    }
};