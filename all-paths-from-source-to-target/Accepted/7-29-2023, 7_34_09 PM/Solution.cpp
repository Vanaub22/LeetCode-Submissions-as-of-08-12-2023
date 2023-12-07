// https://leetcode.com/problems/all-paths-from-source-to-target

class Solution {
public:
    void dfsPaths(vector<vector<int>>& graph, int node_index, vector<int>& path, vector<vector<int>>& paths){
        path.push_back(node_index);
        if(node_index==graph.size()-1) paths.push_back(path);
        else for(int node:graph[node_index]) dfsPaths(graph,node,path,paths);
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> path;
        vector<vector<int>> paths;
        dfsPaths(graph,0,path,paths);
        return paths;
    }
};