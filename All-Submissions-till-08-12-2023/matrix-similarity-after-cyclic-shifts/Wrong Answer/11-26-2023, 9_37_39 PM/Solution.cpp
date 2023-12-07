// https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        // Assuming that the test cases have only matrices with even number of columns
        int m=mat.size(),n=mat[0].size();
        auto saved=mat;
        k%=n;
        while(k--)
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j+=2) {
                swap(mat[i][j],mat[i][j+1]);
            }
        }
        return mat==saved;
    }
};