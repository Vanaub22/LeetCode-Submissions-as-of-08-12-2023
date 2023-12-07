// https://leetcode.com/problems/remove-letter-to-equalize-frequency

class Solution {
public:
    bool equalFrequency(string word) {
        int charFreq[26]={0};
        for(char c:word) charFreq[c-'a']++;
        for(int i=0;i<26;i++){
            if(charFreq[i]>0){
                charFreq[i]--;
                if(checkEqualFreq(charFreq)) return true;
                charFreq[i]++;
            }
        }
        return false;
    }
    bool checkEqualFreq(int charFreq[26]){
        set<int> uniqueFreq;
        for(int i=0;i<26;i++){
            if(charFreq[i]>0) uniqueFreq.insert(charFreq[i]);
            if(uniqueFreq.size()>1) return false;
        }
        return true;
    }
};