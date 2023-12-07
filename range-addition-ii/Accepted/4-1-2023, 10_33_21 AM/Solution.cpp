// https://leetcode.com/problems/range-addition-ii

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_row=INT_MAX,min_col=INT_MAX;
        for(auto entry:ops){
            min_row=min(min_row,entry[0]);
            min_col=min(min_col,entry[1]);
        }
        if(min_row!=INT_MAX&&min_col!=INT_MAX)
        return(min_row*min_col);
        return(m*n);
    }
};