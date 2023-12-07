// https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums

class Solution {
    public int[][] restoreMatrix(int[] rowSum, int[] colSum) {
        int m=rowSum.length,n=colSum.length;
        int[][] mat=new int[m][n];
        for(int i=0;i<m;i++) for(int j=0;j<n;j++){
            mat[i][j]=Math.min(rowSum[i],colSum[j]);
            rowSum[i]-=mat[i][j];
            colSum[j]-=mat[i][j];            
        }
        return mat;
    }
}