// https://leetcode.com/problems/course-schedule-iv

class Solution {
private:
    void dfs(int node, vector<vector<bool>>& isReachable, vector<int> adj[], vector<bool>& visited) {
        visited[node]=true;
        for(int i=0;i<adj[node].size();i++) {
            if(!visited[i]) {
                isReachable[node][i]=true;
                dfs(i,isReachable,adj,visited);
            }
        }
    }
public:
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<int> adj[n];
        vector<bool> visited(n,false);
        for(vector<int> preq:prerequisites) adj[preq[1]].emplace_back(preq[0]);
        vector<bool> isVisited(n,false);
        vector<vector<bool>> isReachable(n,vector<bool>(n,false));
        dfs(0,isReachable,adj,visited);
        vector<bool> answer;
        for(auto query:queries) answer.emplace_back(isReachable[query[0]][query[1]]);
        return answer;
    }
};