// https://leetcode.com/problems/course-schedule

class Solution {
public:
    // Using Kahn's Algorithm and Topological Sort using BFS for Cycle Detection
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses,0);
        vector<int> adjList[numCourses];
        // Calculating In-degrees and creating Adjacency List
        for(vector<int>& prerequisite:prerequisites) {
            adjList[prerequisite[0]].emplace_back(prerequisite[1]);
            indegree[prerequisite[1]]++;
        }
        queue<int> q;
        // Pushing in-degree = 0 vertices into queue
        for(int i=0;i<numCourses;i++) if(indegree[i]==0) q.push(i);
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
        return count==numCourses;
    }
};