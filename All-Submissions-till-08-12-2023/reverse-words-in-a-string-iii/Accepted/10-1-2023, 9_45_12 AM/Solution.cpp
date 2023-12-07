// https://leetcode.com/problems/reverse-words-in-a-string-iii

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string res="",word;
        while(ss>>word){
            reverse(word.begin(),word.end());
            res+=" "+word;
        }
        return res.substr(1,res.length()-1);
    }
};