// https://leetcode.com/problems/remove-letter-to-equalize-frequency

class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int> freq;
        for(char c:word) freq[c]++;
        int uniqueCharacters=freq.size();
        for(auto it:freq){
            char c=it.first;
            freq[c]--;
            if(freq[c]==0) uniqueCharacters--;
            if(uniqueCharacters==1 || checkEqualFreq(freq)) return true;
            freq[c]++;
            if(freq[c]==1) uniqueCharacters++;
        }
        return false;
    }
    bool checkEqualFreq(unordered_map<char,int>& freq){
        int f=freq.begin()->second;
        for(auto it:freq) if(it.second && it.second!=f) return false;
        return true;
    }
};