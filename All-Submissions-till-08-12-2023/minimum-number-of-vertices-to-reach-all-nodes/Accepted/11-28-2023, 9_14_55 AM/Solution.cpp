// https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> vertices;
        // If a node has incoming edges, it is reachable from some other node
        // We will just find the nodes with no incoming edges
        set<int> reachable;
        for(auto edge:edges) reachable.insert(edge[1]);
        for(int i=0;i<n;i++) if(reachable.find(i)==reachable.end()) vertices.push_back(i);
        return vertices;
    }
};