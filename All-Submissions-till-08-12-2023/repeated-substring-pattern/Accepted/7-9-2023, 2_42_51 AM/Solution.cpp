// https://leetcode.com/problems/repeated-substring-pattern

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string comp=s+s;
        comp=comp.substr(1,comp.length()-2);
        return(comp.find(s)!=-1);
    }
};