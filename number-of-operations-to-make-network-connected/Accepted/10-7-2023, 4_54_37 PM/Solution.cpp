// https://leetcode.com/problems/number-of-operations-to-make-network-connected

class Solution {
public:
    void dfs(int start, bool visited[], vector<int> adj[]) {
        visited[start]=true;
        for(int node:adj[start]) if(!visited[node]) dfs(node,visited,adj);
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        // n computers cannot be connected with less than n-1 connection lines
        if(connections.size()<n-1) return -1;
        // Create the Adjacency List
        vector<int> adj[n];
        for(auto connection:connections) {
            // Undirected Graph => Connections will be made on both ends
            adj[connection[0]].emplace_back(connection[1]);
            adj[connection[1]].emplace_back(connection[0]); 
        }
        bool visited[n];
        fill(visited,visited+n,false);
        // Find the number of components using DFS
        int components=0;
        for(int i=0;i<n;i++) {
            if(!visited[i]) {
                dfs(i,visited,adj);
                components++; // counting the number of components
            }
        }
        return components-1;
    }
};