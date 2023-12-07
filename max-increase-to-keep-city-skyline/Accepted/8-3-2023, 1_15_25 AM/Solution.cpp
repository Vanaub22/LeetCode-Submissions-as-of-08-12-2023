// https://leetcode.com/problems/max-increase-to-keep-city-skyline

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),increase=0;
        vector<int> maxHeightRow,maxHeightColumn;
        for(vector<int> row:grid) maxHeightRow.push_back(*max_element(row.begin(),row.end()));
        for(int i=0;i<n;i++){
            int maxHt=INT_MIN;
            for(int j=0;j<m;j++) maxHt=max(maxHt,grid[j][i]);
            maxHeightColumn.push_back(maxHt);
        }
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) 
        increase+=(min(maxHeightRow[i],maxHeightColumn[j])-grid[i][j]);
        return increase;
    }
};