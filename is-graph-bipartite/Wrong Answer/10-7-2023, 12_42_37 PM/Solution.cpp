// https://leetcode.com/problems/is-graph-bipartite

class Solution {
private:
    bool dfs_colour_check(int start, vector<vector<int>>& graph, int colour, int colours[]) {
        colours[start]=colour;
        // paint all the unpainted neighbours with a different colour
        // if any of the neighbours have the same colour, the graph is not a Bipartite Graph
        for(int neighbour:graph[start])
        if(colours[neighbour]==-1) dfs_colour_check(neighbour,graph,!colour,colours);
        else if(colours[neighbour]==colours[start]) return false;
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        // Graph may not be connected, i.e. multiple components may exist
        int V=graph.size(),colours[V];
        fill(colours,colours+V,-1); // not coloured (I have two colours 0 and 1)
        for(int i=0;i<V;i++) if(!dfs_colour_check(0,graph,0,colours)) return false;
        return true;
    }
};