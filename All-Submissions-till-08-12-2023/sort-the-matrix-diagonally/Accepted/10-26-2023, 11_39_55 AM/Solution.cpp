// https://leetcode.com/problems/sort-the-matrix-diagonally

class Solution {
public:
    void sortDiagonal(int row, int col, int m, int n, vector<vector<int>>& mat) {
        int i=row,j=col,k=0,L;
        vector<int> diag;
        // Collecting and sorting diagonal elements
        while(i<m && j<n) diag.push_back(mat[i++][j++]);
        sort(diag.begin(),diag.end());
        i=row,j=col,L=diag.size();
        while(i<m && j<n && k<L) mat[i++][j++]=diag[k++]; // Putting them back
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        for(int i=0;i<m;i++) sortDiagonal(i,0,m,n,mat);
        for(int i=1;i<n;i++) sortDiagonal(0,i,m,n,mat);
        return mat;
    }
};