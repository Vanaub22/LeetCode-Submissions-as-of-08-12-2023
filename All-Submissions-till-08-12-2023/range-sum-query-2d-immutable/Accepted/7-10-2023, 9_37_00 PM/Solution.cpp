// https://leetcode.com/problems/range-sum-query-2d-immutable

class NumMatrix {
public:
    vector<vector<long>> prefixSum;
    NumMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        prefixSum=vector<vector<long>>(m+1,vector<long>(n+1,0));
        for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        prefixSum[i][j]=prefixSum[i-1][j]+prefixSum[i][j-1]+matrix[i-1][j-1]-prefixSum[i-1][j-1];
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefixSum[row2+1][col2+1]-prefixSum[row2+1][col1]-prefixSum[row1][col2+1]+prefixSum[row1][col1];
    }
};
/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */