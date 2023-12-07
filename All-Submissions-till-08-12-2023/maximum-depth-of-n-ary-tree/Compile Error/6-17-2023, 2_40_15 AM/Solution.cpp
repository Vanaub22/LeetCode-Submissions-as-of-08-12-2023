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
    static int maxDepth(const Node* root) {
        if (!root) return 0;
        int max_child = 0;
        for (const Node* child : root->children) {
            max_child = max(max_child, maxDepth(child));
        }
        return 1 + max_child;
    }