// https://leetcode.com/problems/toeplitz-matrix

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int row=0;row<matrix.size()-1;row++)
        for(int col=0;col<matrix[0].size()-1;col++)
        if(matrix[row][col]!=matrix[row+1][col+1])
        return(false);
        return(true);
    }
};