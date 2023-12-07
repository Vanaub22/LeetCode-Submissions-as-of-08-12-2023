// https://leetcode.com/problems/restore-the-array-from-adjacent-pairs

class Solution {
public:
    // Using Iterative Approach, following Trail
    vector<int> restoreArray(vector<vector<int>>& adjPairs) {
        int n=adjPairs.size(),start,curr,curr_idx=0,prev;
        // Generating Adjacency List
        unordered_map<int,vector<int>> adjList;
        for(auto& edge:adjPairs) {
            adjList[edge[0]].emplace_back(edge[1]);
            adjList[edge[1]].emplace_back(edge[0]);
        }
        // Finding the first element
        for(auto& it:adjList) if(it.second.size()==1) {
            start=curr=it.first;
            break;
        }
        vector<int> arr={start}; // To store the restored array
        // Reconstructing the array
        while(curr_idx<n) {
            if(adjList[curr][0]!=prev) arr.emplace_back(adjList[curr][0]);
            else arr.emplace_back(adjList[curr][1]);
            prev=curr;
            curr_idx++;
            curr=arr[curr_idx];
        }
        return arr;
    }
};