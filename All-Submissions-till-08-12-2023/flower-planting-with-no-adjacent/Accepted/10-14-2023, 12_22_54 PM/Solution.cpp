// https://leetcode.com/problems/flower-planting-with-no-adjacent

class Solution {
public:
    // Not checking for neighbouring nodes, simply changing colours
    void colouring_dfs(int start, vector<int> adj[], vector<int>& colours, int colour) {
        if(colours[start-1]!=-1) return;
        colours[start-1]=colour%4+1;
        for(int neighbour:adj[start]) colouring_dfs(neighbour,adj,colours,colour+1);
    }
    // Checking for neighbours and then assigning a different colour
    void check_colour_dfs(int start, vector<int> adj[], bool visited[], vector<int>& colours) {
        visited[start]=true;
        bool taken_colours[5]; // 1-indexed
        memset(taken_colours,false,sizeof(taken_colours));
        // Finding out which colours are taken up by the neighbours
        for(int neighbour:adj[start]) taken_colours[colours[neighbour-1]]=true;
        // Assigning the first colour not taken up by the neighbours
        for(int i=1;i<5;i++) if(!taken_colours[i]) {
            colours[start-1]=i;
            break;
        }
        for(int neighbour:adj[start]) if(!visited[neighbour]) check_colour_dfs(neighbour,adj,visited,colours);
    }
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        // Converting to Adjacency Matrix (1-indexed)
        vector<int> adj[n+1];
        for(auto path:paths) {
            adj[path[0]].push_back(path[1]);
            adj[path[1]].push_back(path[0]);
        }
        vector<int> colours(n,-1); // -1 from colours indices every time (0-indexed answer)
        // Everything else is 1-indexed
        // Performing DFS and assigning different colours
        for(int i=1;i<=n;i++) if(colours[i-1]<1) colouring_dfs(i,adj,colours,0);
        bool visited[n+1]; // 1-indexed
        memset(visited,false,sizeof(visited));
        for(int i=1;i<=n;i++) if(!visited[i]) check_colour_dfs(i,adj,visited,colours);
        return colours;
    }
};