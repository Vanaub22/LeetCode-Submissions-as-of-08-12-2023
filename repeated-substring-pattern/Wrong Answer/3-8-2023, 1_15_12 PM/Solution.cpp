// https://leetcode.com/problems/repeated-substring-pattern

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int repeat=0;
        if(s.length()==1)
        return(false);
        for(char c:s)
        if(c==s[0])
        repeat++;
        if(s.length()%repeat!=0)
        return(false);
        string check="",pattern=s.substr(0,s.length()/repeat);
        for(int i=0;i<repeat;i++)
        check+=pattern;
        return(check==s);
    }
};