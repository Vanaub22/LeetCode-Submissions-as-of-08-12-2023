// https://leetcode.com/problems/reconstruct-a-2-row-binary-matrix

class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int n=colsum.size();
        vector<vector<int>> mat(2,vector<int>(n,0));
        if(accumulate(colsum.begin(),colsum.end(),0)!=upper+lower) return {};
        for(int i=0;i<n;i++)
        if(colsum[i]==2){
            mat[0][i]=1;
            mat[1][i]=1;
            colsum[i]=0;
            upper--;
            lower--;
        }
        for(int i=0;i<n;i++)
        if(colsum[i]==1){
            if(upper>0){
                upper--;
                mat[0][i]=1;
            }
            else if(lower>0){
                lower--;
                mat[1][i]=1;
            }
        }
        return mat;
    }
};