// https://leetcode.com/problems/clone-graph

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*> nodeMapping;
    Node* cloneGraph(Node* node) {
        if(!node) return node;
        if(nodeMapping.find(node)!=nodeMapping.end()) return nodeMapping[node];
        Node* cloned_node=new Node(node->val);
        nodeMapping[node]=cloned_node;
        for(Node* neighbour:node->neighbors)
        cloned_node->neighbors.emplace_back(cloneGraph(neighbour));
        return cloned_node;
    }
};