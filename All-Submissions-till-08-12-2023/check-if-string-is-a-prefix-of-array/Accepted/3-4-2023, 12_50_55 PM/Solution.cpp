// https://leetcode.com/problems/check-if-string-is-a-prefix-of-array

class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string add="";
        for(string word:words){
            add+=word;
            if(add==s)
            return(true);
        }
        return(false);
    }
};