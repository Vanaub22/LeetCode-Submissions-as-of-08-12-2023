// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal{{1}};
        if(numRows==1)
        return(pascal);
        pascal.push_back({1,1});
        if(numRows==2)
        return(pascal);
        for(int row=2;row<numRows;row++){
            vector<int> pascalRow{1};
            for(int i=1;i<row;i++)
            pascalRow.push_back(pascal[row-1][i-1]+pascal[row-1][i]);
            pascalRow.push_back(1);
            pascal.push_back(pascalRow);
        }
        return(pascal);
    }
};