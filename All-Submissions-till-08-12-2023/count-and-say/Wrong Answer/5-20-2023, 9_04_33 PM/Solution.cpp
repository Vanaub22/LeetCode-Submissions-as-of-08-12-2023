// https://leetcode.com/problems/count-and-say

class Solution {
public:
    string freqPairConcat(string s){
        unordered_map<int,int> fPairs;
        for(int i=s.size()-1;i>=0;i--)
        fPairs[s[i]-'0']++;
        string say="";
        for(auto it:fPairs)
        say+=(to_string(it.second)+to_string(it.first));
        return(say);
    }
    string countAndSay(int n) {
        string say="1";
        for(int i=1;i<=n-1;i++)
        say=freqPairConcat(say);
        return(say);
    }
};