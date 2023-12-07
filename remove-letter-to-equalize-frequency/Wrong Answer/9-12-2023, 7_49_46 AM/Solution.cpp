// https://leetcode.com/problems/remove-letter-to-equalize-frequency

class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int> freq;
        for(char c:word) freq[c]++;
        for(auto it:freq){
            char c=it.first;
            freq[c]--;
            if(checkEqualFreq(freq)) return true;
            freq[c]++;
        }
        return false;
    }
    bool checkEqualFreq(unordered_map<char,int>& freq){
        int f=(*freq.begin()).second;
        for(auto it:freq) if(it.second!=f) return false;
        return true;
    }
};