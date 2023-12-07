// https://leetcode.com/problems/regular-expression-matching

class Solution {
public:
    bool isMatch(string s, string p) {
        if(p=="") return s=="";
        bool start=s!="" && (s[0]==p[0] || p[0]=='.');
        int m=s.length(),n=p.length();
        if(n>=2 && p[1]=='*')
        return isMatch(s,p.substr(2,n-2)) || (start && isMatch(s.substr(1,m-1),p));
        else return start && isMatch(s.substr(1,m-1),p.substr(1,n-1));
    }
};