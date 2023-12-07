// https://leetcode.com/problems/number-of-operations-to-make-network-connected

class Solution {
public:
    void dfs(int start, bool visited[], vector<int> adj[]) {
        visited[start]=true;
        for(int node:adj[start]) 
        if(!visited[node]) dfs(node,visited,adj);
    }
    int makeConnected(int V, vector<vector<int>>& connections) {
        // V computers cannot be connected with less than V-1 cpnnection lines
        int n=connections.size();
        if(n<V-1) return -1;
        // Create the Adjacency List
        vector<int> adj[V];
        for(auto connection:connections) {
            // Undirected Graph => Connections will be made on both ends
            adj[connection[0]].emplace_back(connection[1]);
            adj[connection[1]].emplace_back(connection[0]); 
        }
        bool visited[V];
        fill(visited,visited+V,false);
        // Find the number of components using DFS
        int components=0;
        for(int i=0;i<V;i++) {
            if(!visited[i]) {
                dfs(0,visited,adj);
                components++; // counting the number of components
            }
        }
        return components-1;
    }
};