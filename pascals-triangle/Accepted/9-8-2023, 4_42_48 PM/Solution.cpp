// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle{{1}};
        if(numRows==1) return pascalTriangle;
        pascalTriangle.push_back({1,1});
        if(numRows==2) return pascalTriangle;
        for(int row=2;row<numRows;row++){
            vector<int> pascalRow{1};
            for(int i=1;i<row;i++) pascalRow.push_back(pascalTriangle[row-1][i-1]+pascalTriangle[row-1][i]);
            pascalRow.push_back(1);
            pascalTriangle.push_back(pascalRow);
        }
        return pascalTriangle;
    }
};