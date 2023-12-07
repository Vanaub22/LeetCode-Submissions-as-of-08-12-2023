// https://leetcode.com/problems/find-and-replace-pattern

class Solution {
public:
    bool fitsPattern(string word, string pattern){
        unordered_map<char,char> mapping;
        set<char> charSet;
        int n=pattern.length();
        for(int i=0;i<n;i++)
        if(mapping.find(pattern[i])==mapping.end()){
            if(charSet.find(word[i])!=charSet.end()) return false;
            charSet.insert(word[i]);
            mapping[pattern[i]]=word[i];
        }
        else if(mapping[pattern[i]]!=word[i]) return false;
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> matching;
        for(string word:words) if(fitsPattern(word,pattern)) matching.push_back(word);
        return matching;
    }
};