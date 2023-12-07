// https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat.size(),n=mat[0].size();
        for(int i=0;i<m;i++) for(int j=0;j<n;j++) if(mat[i][j]!=mat[i][(j+k)%n]) return false;
        return true;
    }
};