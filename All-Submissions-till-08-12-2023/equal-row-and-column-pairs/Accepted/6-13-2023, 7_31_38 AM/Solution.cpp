// https://leetcode.com/problems/equal-row-and-column-pairs

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),pairs=0;
        map<vector<int>,int> hashmap;
        for(int i=0;i<m;i++)
        hashmap[grid[i]]++;
        for(int i=0;i<n;i++){
            vector<int> col;
            for(int j=0;j<m;j++)
            col.push_back(grid[j][i]);
            pairs+=hashmap[col];
        }
        return(pairs);
    }
};