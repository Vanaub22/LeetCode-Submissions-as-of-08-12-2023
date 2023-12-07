// https://leetcode.com/problems/set-matrix-zeroes

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows_columns;
        for(int i=0;i<matrix.size();i++)
        for(int j=0;j<matrix[0].size();j++)
        if(matrix[i][j]==0){
            rows_columns.insert(i);
            rows_columns.insert(j);
        }
        for(int i=0;i<matrix.size();i++)
        for(int j=0;j<matrix[0].size();j++)
        if(rows_columns.find(i)!=rows_columns.end()||rows_columns.find(j)!=rows_columns.end())
        matrix[i][j]=0;
    }
};