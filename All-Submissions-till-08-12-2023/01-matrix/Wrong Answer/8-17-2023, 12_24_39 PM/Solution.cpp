// https://leetcode.com/problems/01-matrix

class Solution {
public:
    int nearestZero(int dist, int i, int j, int m, int n, vector<vector<int>>& mat){
        if(mat[i][j]==0) return dist;
        if(i>0) return nearestZero(dist+1,i-1,j,m,n,mat);
        else if(j>0) return nearestZero(dist+1,i,j-1,m,n,mat);
        else if(i<m-1) return nearestZero(dist+1,i+1,j,m,n,mat);
        else return nearestZero(dist+1,i,j+1,m,n,mat);
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>> result(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        result[i][j]=mat[i][j]==0?0:nearestZero(0,i,j,m,n,mat);
        return result;
    }
};