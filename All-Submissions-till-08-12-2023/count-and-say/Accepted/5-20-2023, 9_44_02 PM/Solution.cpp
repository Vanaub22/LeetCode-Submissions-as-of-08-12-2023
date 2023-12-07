// https://leetcode.com/problems/count-and-say

class Solution {
public:
    vector<pair<int,int>> countPair(string s){
        vector<pair<int,int>> countPairs;
        char c=s[0];
        int continuousFreq=0;
        for(int i=0;i<s.size();i++){
           if(s[i]==c)
           continuousFreq++;
           else{
               countPairs.push_back({continuousFreq,c-'0'});
               continuousFreq=1;
               c=s[i];
           }
        }
        countPairs.push_back({continuousFreq,c-'0'});
        return(countPairs);
    }
    string pairConcat(vector<pair<int,int>>& fPairs){
        string say="";
        for(auto it:fPairs)
        say+=(to_string(it.first)+to_string(it.second));
        return(say);
    }
    string countAndSay(int n) {
        string say="1";
        for(int i=1;i<=n-1;i++){
            vector<pair<int,int>> countPairs=countPair(say);
            say=pairConcat(countPairs);
        }
        return(say);
    }
};