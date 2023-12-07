// https://leetcode.com/problems/count-prefixes-of-a-given-string

class Solution {
public:
    int countPrefixes(vector<string>& prefixes, string s) {
        int yes_pref=0;
        for(string prefix:prefixes)
        if(s.substr(0,prefix.length())==prefix)
        yes_pref++;
        return(yes_pref);
    }
};