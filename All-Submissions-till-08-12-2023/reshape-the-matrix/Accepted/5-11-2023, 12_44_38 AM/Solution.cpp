// https://leetcode.com/problems/reshape-the-matrix

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int row, int col) {
        int m=mat.size(),n=mat[0].size(),r=0,c=0;
        if(m*n!=row*col)
        return(mat);
        vector<vector<int>> r_matrix(row,vector<int>(col,0));
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            r_matrix[r][c]=mat[i][j];
            c++;
            if(c>=col){
                r++;
                c=0;
            }
        }
        return(r_matrix);
    }
};