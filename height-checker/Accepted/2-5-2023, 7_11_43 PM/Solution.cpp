// https://leetcode.com/problems/height-checker

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        int mistakes=0,min;
        expected=heights;
        sort(expected.begin(),expected.end());
        for(int i=0;i<expected.size();i++)
        if(heights[i]!=expected[i])
        mistakes++;
        return(mistakes);
    }
};