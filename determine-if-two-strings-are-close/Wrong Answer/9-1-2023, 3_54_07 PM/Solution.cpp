// https://leetcode.com/problems/determine-if-two-strings-are-close

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int> charFreq1,charFreq2;
        for(char c:word1) charFreq1[c]++;
        for(char c:word2) charFreq2[c]++;
        set<char> letters1,letters2,frequencies1,frequencies2;
        for(auto it:charFreq1){
            letters1.insert(it.first);
            frequencies1.insert(it.second);
        }
        for(auto it:charFreq2){
            letters2.insert(it.first);
            frequencies2.insert(it.second);
        }
        return letters1==letters2 && frequencies1==frequencies2;
    }
};