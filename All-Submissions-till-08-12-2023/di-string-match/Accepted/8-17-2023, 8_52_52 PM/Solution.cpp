// https://leetcode.com/problems/di-string-match

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low=0,high=s.size();
        vector<int> perm;
        for(char c:s) perm.push_back(c=='I'?low++:high--);
        perm.push_back(high);
        return perm;
    }
};