// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        unordered_map<char,int> charFreq;
        for(char c:chars) charFreq[c]++;
        for(string word:words) if(isGoodString(word)) ans+=word.length();
        return ans;
    }
    bool isGoodString(string word, unordered_map<char,int> charFreq) {
        for(char c:word) if(charFreq[c]) charFreq[c]--;
        else return false;
        return true;
    }
};