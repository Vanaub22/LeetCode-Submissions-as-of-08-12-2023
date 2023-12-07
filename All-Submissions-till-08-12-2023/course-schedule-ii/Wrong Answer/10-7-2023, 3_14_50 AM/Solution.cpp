// https://leetcode.com/problems/course-schedule-ii

class Solution {
public:
    // Using Kahn's Algorithm (Topological Sort + BFS)
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<int> order;
        queue<int> q;
        // Creating the Adjacency List and calculating in-degrees
        vector<int> adj[n];
        vector<int> indegree(n,0);
        for(vector<int>& preq:prerequisites) {
            adj[preq[1]].emplace_back(preq[0]);
            indegree[preq[0]]++;
        }
        // Adding the elements with In-degree = 0 to Queue
        for(int i=0;i<n;i++) if(indegree[i]==0) q.push(i);
        // Performing BFS
        while(!q.empty()) {
            int node=q.front();
            order.emplace_back(node);
            q.pop();
            for(auto neighbour:adj[node]) {
                indegree[neighbour]--;
                if(indegree[neighbour]==0) q.push(neighbour);
            }
        }
        return order;
    }
};