// https://leetcode.com/problems/convert-1d-array-into-2d-array

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n!=original.size())
        return{};
        int r=0,c=0;
        vector<vector<int>> reshaped(m,vector<int>(n,0));
        for(int i:original){
            reshaped[r][c]=i;
            c++;
            if(c>=n){
                c=0;
                r++;
            }
        }
        return(reshaped);
    }
};