// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    static bool comp(pair<char,int>& a, pair<char,int>& b){
        return(a.second>=b.second);
    }
    string frequencySort(string s) {
        unordered_map<char,int> charFreq;
        vector<pair<char,int>> freqPairs;
        string sorted="";
        for(char c:s)
        charFreq[c]++;
        for(auto it:charFreq)
        freqPairs.push_back(it);
        sort(freqPairs.begin(),freqPairs.end(),comp);
        for(pair<char,int>& p:freqPairs)
        for(int i=0;i<p.second;i++)
        sorted+=p.first;
        return(sorted);
    }
};