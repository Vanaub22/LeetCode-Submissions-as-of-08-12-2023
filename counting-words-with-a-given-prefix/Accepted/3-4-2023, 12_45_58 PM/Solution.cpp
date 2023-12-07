// https://leetcode.com/problems/counting-words-with-a-given-prefix

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int yes_pref=0;
        for(string word:words)
        if(word.substr(0,pref.length())==pref)
        yes_pref++;
        return(yes_pref);
    }
};