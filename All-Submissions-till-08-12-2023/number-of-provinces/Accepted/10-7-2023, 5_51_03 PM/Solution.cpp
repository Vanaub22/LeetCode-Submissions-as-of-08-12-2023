// https://leetcode.com/problems/number-of-provinces

class Solution {
public:
    void dfs(int start, bool visited[], vector<int> adj[]) {
        visited[start]=true;
        for(int i:adj[start]) if(!visited[i]) dfs(i,visited,adj);
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(),provinces=0;
        vector<int> adj[n];
        bool visited[n];
        memset(visited,false,sizeof(visited));
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(isConnected[i][j]) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        for(int i=0;i<n;i++) {
            if(!visited[i]) {
                dfs(i,visited,adj);
                provinces++;
            }
        }
        return provinces;
    }
};