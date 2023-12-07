// https://leetcode.com/problems/course-schedule

class Solution {
public:
    // Using Kahn's Algorithm and Topological Sort using BFS for Cycle Detection
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> indegree(n,0);
        vector<int> adjList[n];
        // Calculating In-degrees and creating Adjacency List
        for(vector<int>& prerequisite:prerequisites) {
            adjList[prerequisite[1]].emplace_back(prerequisite[0]);
            indegree[prerequisite[0]]++;
        }
        queue<int> q;
        // Pushing in-degree = 0 vertices into queue
        for(int i=0;i<n;i++) if(indegree[i]==0) q.push(i);
        int count=0; // to keep a count of vertices in Topological Sort
        // Performing BFS
        while(!q.empty()) {
            int node=q.front();
            count++;
            q.pop();
            for(int i:adjList[node]) {
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }   
        }
        // checking if the Topological Sort was successful, i.e. if it was DAG
        return count==n;
    }
};