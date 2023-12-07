// https://leetcode.com/problems/regular-expression-matching

class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.empty()) return s.empty();
        int m=s.length(),n=p.length();
        if(n>=2 && p[1]=='*')
        return isMatch(s,p.substr(2)) || ((!s.empty() && (s[0]==p[0] || p[0]=='.')) && isMatch(s.substr(1),p));
        else return (!s.empty() && (s[0]==p[0] || p[0]=='.')) && isMatch(s.substr(1),p.substr(1));
    }
};