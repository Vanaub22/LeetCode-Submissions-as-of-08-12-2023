// https://leetcode.com/problems/count-and-say

class Solution {
public:
    string countPairConcat(string s){
        string say="";
        vector<pair<int,int>> countPairs;
        char c=s[0];
        int continuousFreq=0;
        for(int i=0;i<s.size();i++)
        if(s[i]==c)
        continuousFreq++;
        else{
            countPairs.push_back({continuousFreq,c-'0'});
            continuousFreq=1;
            c=s[i];
        }
        countPairs.push_back({continuousFreq,c-'0'});
        for(auto it:countPairs)
        say+=(to_string(it.first)+to_string(it.second));
        return(say);
    }
    string countAndSay(int n) {
        string say="1";
        for(int i=1;i<=n-1;i++)
        say=countPairConcat(say);
        return(say);
    }
};