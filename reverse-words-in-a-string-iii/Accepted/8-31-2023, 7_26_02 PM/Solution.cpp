// https://leetcode.com/problems/reverse-words-in-a-string-iii

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        s="";
        string word;
        while(ss>>word){
            reverse(word.begin(),word.end());
            s+=word+" ";
        }
        s.pop_back();
        return s;
    }
};