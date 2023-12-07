// https://leetcode.com/problems/determine-if-two-strings-are-close

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int> charFreq1,charFreq2;
        map<int,int> freqMap;
        set<char> letters;
        for(char c:word1) charFreq1[c]++;
        for(char c:word2) charFreq2[c]++;
        for(auto it:charFreq1){
            letters.insert(it.first);
            freqMap[it.second]++;
        }
        for(auto it:charFreq2){
            if(letters.find(it.first)==letters.end()) return false;
            if(freqMap[it.second]==0) return false;
            else freqMap[it.second]--;
        }
        return true;
    }
};