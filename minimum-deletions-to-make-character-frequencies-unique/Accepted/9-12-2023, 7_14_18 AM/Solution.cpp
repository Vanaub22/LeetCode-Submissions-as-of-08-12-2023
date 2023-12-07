// https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique

class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> freq;
        for(char c:s) freq[c]++;
        int deletions=0;
        set<int> usedFreq;
        for(auto it:freq){
            int f=it.second;
            while(f && usedFreq.find(f)!=usedFreq.end()){
                deletions++;
                f--;
            }
            if(f) usedFreq.insert(f);
        }
        return deletions;
    }
};