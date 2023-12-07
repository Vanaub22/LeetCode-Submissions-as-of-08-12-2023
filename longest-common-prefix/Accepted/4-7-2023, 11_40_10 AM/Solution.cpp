// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& words) {
        string longestCommon="";
        int n=words.size(),highestPref=min(words[0].length(),words[n-1].length());
        sort(words.begin(),words.end());
        for(int i=0;i<highestPref;i++)
        if(words[0][i]==words[n-1][i])
        longestCommon+=words[0][i];
        else
        break;
        return(longestCommon);        
    }
};