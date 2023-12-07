// https://leetcode.com/problems/delete-greatest-value-in-each-row

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),high,answer=0;
        for(int i=0;i<m;i++)
        sort(grid[i].begin(),grid[i].end());
        for(int i=0;i<n;i++){
            high=INT_MIN;
            for(int j=0;j<m;j++)
            high=max(high,grid[j][i]);
            answer+=high;
        }
        return(answer);
    }
};