// https://leetcode.com/problems/find-the-town-judge

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int trusted=trust[0][1];
        for(int i=1;i<trust.size();i++)
        if(trust[i][1]!=trusted)
        return(-1);  
        return(trusted);   
    }
};