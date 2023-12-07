// https://leetcode.com/problems/remove-letter-to-equalize-frequency

class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int> freq;
        for(char c:word) freq[c]++;
        set<int> uniqueFreq;
        for(auto it:freq){
            uniqueFreq.insert(it.second);
            if(uniqueFreq.size()>2) return false;
        }
        if(uniqueFreq.size()==1) return *uniqueFreq.begin()==1;
        if(uniqueFreq.size()==0) return false;
        int first=*uniqueFreq.begin(),second=*next(uniqueFreq.begin());
        return abs(first-second)==1;
    }
};