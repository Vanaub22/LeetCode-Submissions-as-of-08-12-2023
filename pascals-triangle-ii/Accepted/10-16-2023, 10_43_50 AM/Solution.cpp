// https://leetcode.com/problems/pascals-triangle-ii

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascalTriangle{{1}};
        if(rowIndex==0) return pascalTriangle[0];
        pascalTriangle.push_back({1,1});
        if(rowIndex==1) return pascalTriangle[1];
        for(int row=2;row<=rowIndex;row++){
            vector<int> pascalRow{1}; // Starting with 1
            for(int i=1;i<row;i++) pascalRow.push_back(pascalTriangle[row-1][i-1]+pascalTriangle[row-1][i]); // Standard relation between elements
            pascalRow.push_back(1); // Ending with 1
            pascalTriangle.push_back(pascalRow); // Inserting Row into Pascal's Triangle
        }
        return pascalTriangle[rowIndex];
    }
};