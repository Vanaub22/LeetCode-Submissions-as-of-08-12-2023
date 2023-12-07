// https://leetcode.com/problems/count-the-number-of-consistent-strings

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int consistent=0;
        set<char> allowedCharacters(allowed.begin(),allowed.end());
        for(string word:words) if(isConsistent(word,allowedCharacters)) consistent++;
        return consistent;
    }
    bool isConsistent(string word, set<char>& allowed){
        for(char c:word) if(allowed.find(c)==allowed.end()) return false;
        return true;
    }
};