// https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),rowZeroes[m],rowOnes[m],colZeroes[n],colOnes[n];
        memset(rowZeroes,0,sizeof(rowZeroes));
        memset(rowOnes,0,sizeof(rowOnes));
        memset(colZeroes,0,sizeof(colZeroes));
        memset(colOnes,0,sizeof(colOnes));
        countOccurrencesInRowAndColumn(grid,m,n,rowZeroes,rowOnes,colZeroes,colOnes);
        vector<vector<int>> diff(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        diff[i][j]=rowOnes[i]+colOnes[j]-rowZeroes[i]-colZeroes[j];
        return diff;
    }
    void countOccurrencesInRowAndColumn(vector<vector<int>>& grid, int m, int n, int rowZeroes[], int rowOnes[], int colZeroes[], int colOnes[]) {
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        if(grid[i][j]==0) {
            rowZeroes[i]++;
            colZeroes[j]++;
        }
        else if(grid[i][j]==1) {
            rowOnes[i]++;
            colOnes[j]++;
        }
    }
};