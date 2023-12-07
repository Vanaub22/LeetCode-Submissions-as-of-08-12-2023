// https://leetcode.com/problems/matrix-diagonal-sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int primary_diag=0,secondary_diag=0;
        for(int i=0;i<mat.size();i++){
            primary_diag+=mat[i][i];
            secondary_diag+=mat[mat.size()-1-i][i];
        }
        return(mat.size()%2==0?(primary_diag+secondary_diag):(primary_diag+secondary_diag-mat[mat.size()/2][mat.size()/2]));
    }
};