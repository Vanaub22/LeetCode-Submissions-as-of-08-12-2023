// https://leetcode.com/problems/possible-bipartition

class Solution {
public:
    bool dfs_colour_check(int start, int colour, int colours[], vector<int> adj[]) {
        colours[start]=colour;
        for(int i:adj[start]) {
            if(colours[i]==-1) {
                if(!dfs_colour_check(i,!colour,colours,adj)) return false;
            }
            else if(colours[i]==colour) return false;
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        // We will convert this into a graph and check if it is Bi-Partite
        // Dislikes will be edges and people will be nodes
        // Bi-directional OR Undirected Graph will be used
        // this is because if a hates b OR vice-versa, a cannot be put into the same group as b
        vector<int> adj[n+1];
        for(auto dislike:dislikes) {
            adj[dislike[0]].push_back(dislike[1]);
            adj[dislike[1]].push_back(dislike[0]);
        }
        int colours[n+1];
        memset(colours,-1,sizeof(colours)); // -1 => not coloured (we have 2 colours 0 and 1)
        for(int i=1;i<=n;i++) {
            if(colours[i]==-1) {
                if(!dfs_colour_check(i,0,colours,adj)) return false;
            }
        }
        return true;
    }
};