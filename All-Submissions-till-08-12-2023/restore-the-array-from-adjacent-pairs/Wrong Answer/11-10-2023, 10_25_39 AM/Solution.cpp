// https://leetcode.com/problems/restore-the-array-from-adjacent-pairs

class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjPairs) {
        int n=adjPairs.size(),start=0,curr=0,curr_idx=0;
        // Using Iterative Approach, following Trail
        // Generating Adjacency List
        unordered_map<int,vector<int>> adjList;
        for(auto& edge:adjPairs) {
            adjList[edge[0]].emplace_back(edge[1]);
            adjList[edge[1]].emplace_back(edge[0]);
        }
        // Finding the 0th element
        for(auto& it:adjList) if(it.second.size()==1) {
            start=curr=it.first;
            break;
        }
        vector<int> arr={start};
        while(curr_idx<n) {
            if(curr_idx==0 || curr_idx==n-1) arr.emplace_back(adjList[curr][0]); // Only 1 neighbour
            else arr.emplace_back(adjList[curr][0]==arr[curr_idx-1]?adjList[curr][1]:adjList[curr][0]);
            curr_idx++;
            curr=arr[curr_idx];
        }
        return arr;
    }
};