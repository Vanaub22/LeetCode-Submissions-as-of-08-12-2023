// https://leetcode.com/problems/height-checker

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        int mistakes=0,min;
        expected=heights;
        for(int i=0;i<expected.size()-1;i++)
        {
            min=i;
            for(int j=i+1;j<expected.size();j++){
                if(expected[j]<expected[min])
                min=j;
            }
            swap(expected[min],expected[i]);
        }
        for(int i=0;i<expected.size();i++)
        if(heights[i]!=expected[i])
        mistakes++;
        return(mistakes);
    }
};