// https://leetcode.com/problems/maximum-sum-of-an-hourglass

class Solution {
public:
    int hgsum(vector<vector<int>>& grid,int i,int j){
        return(grid[i][j-1]+grid[i][j]+grid[i][j+1]+grid[i+1][j]+grid[i+2][j]+grid[i+2][j-1]+grid[i+2][j+1]);
    }
    int maxSum(vector<vector<int>>& grid) {
        int maxhg=INT_MIN,rows=grid.size(),cols=grid[0].size();
        for(int i=0;i<rows-2;i++)
        for(int j=1;j<cols-1;j++)
        maxhg=max(maxhg,hgsum(grid,i,j));
        return(maxhg);
    }
};