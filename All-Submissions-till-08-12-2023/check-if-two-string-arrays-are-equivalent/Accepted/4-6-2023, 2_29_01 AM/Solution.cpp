// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a="",b="";
        for(string s:word1)
        a+=s;
        for(string s:word2)
        b+=s;
        return(a==b);
    }
};