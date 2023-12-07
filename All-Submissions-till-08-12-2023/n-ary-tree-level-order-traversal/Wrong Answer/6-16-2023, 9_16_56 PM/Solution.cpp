// https://leetcode.com/problems/n-ary-tree-level-order-traversal

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
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)
        return {{}};
        queue<Node*> q;
        vector<vector<int>> levelOrderTraversal;
        q.push(root);
        while(!q.empty()){
            vector<int> level;
            int n=q.size();
            for(int i=0;i<n;i++){
                for(int j=0;j<q.front()->children.size();j++)
                q.push(q.front()->children[j]);
                level.push_back(q.front()->val);
                q.pop();
            }
            levelOrderTraversal.push_back(level);            
        }
        return(levelOrderTraversal);
    }
};