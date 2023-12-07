// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int negatives=0;
        for(vector<int> r:grid)
        for(int i:r)
        if(i<0)
        negatives++;
        return(negatives);
    }
};