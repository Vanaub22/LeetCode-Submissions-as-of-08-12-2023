// https://leetcode.com/problems/crawler-log-folder

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth=0;
        for(string& log:logs) if(log=="./") continue;
        else if(log=="../") depth=depth==0?depth:depth-1;
        else depth++;
        return depth;
    }
};