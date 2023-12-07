// https://leetcode.com/problems/find-if-path-exists-in-graph

class Solution {
public:
    void dfs(int source, vector<int> adj[], bool visited[]) {
        visited[source]=true;
        for(int node:adj[source]) if(!visited[node]) dfs(node,adj,visited);
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        bool visited[n];
        // fill(visited,visited+n,false);
        memset(visited,false,sizeof(visited));
        for(auto edge:edges) {
            // adj[edge[0]].push_back(edge[1]);
            // adj[edge[1]].push_back(edge[0]);
            adj[edge[0]].emplace_back(edge[1]);
            adj[edge[1]].emplace_back(edge[0]);
        }
        dfs(source,adj,visited);
        return visited[destination];
    }
};