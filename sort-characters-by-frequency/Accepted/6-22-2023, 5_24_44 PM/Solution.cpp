// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    static bool comp(pair<char,int>& a, pair<char,int>& b){
        return(a.second>b.second);
    }
    string frequencySort(string s) {
        unordered_map<char,int> charFreq;
        string sorted="";
        for(char c:s)
        charFreq[c]++;
        vector<pair<char,int>> freqPairs(charFreq.begin(),charFreq.end());
        sort(freqPairs.begin(),freqPairs.end(),comp);
        for(pair<char,int> p:freqPairs)
        sorted+=string(p.second,p.first);
        return(sorted);
    }
};