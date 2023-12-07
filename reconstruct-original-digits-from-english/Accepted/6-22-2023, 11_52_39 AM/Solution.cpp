// https://leetcode.com/problems/reconstruct-original-digits-from-english

class Solution {
public:
    void construct(unordered_map<char,int>& charFreq, string num, char dist, string& ans, char digit){
        int count=charFreq[dist];
        for(char c:num){
            if(c==dist)
            charFreq[c]=0;
            else
            charFreq[c]-=count;
        }
        ans+=string(count,digit);
    }
    string originalDigits(string s) {
        unordered_map<char,int> charFreq;
        for(char c:s)
        charFreq[c]++;
        string ans="";
        construct(charFreq,"zero",'z',ans,'0');
        construct(charFreq,"two",'w',ans,'2');
        construct(charFreq,"four",'u',ans,'4');
        construct(charFreq,"six",'x',ans,'6');
        construct(charFreq,"eight",'g',ans,'8');
        construct(charFreq,"three",'t',ans,'3');
        construct(charFreq,"five",'f',ans,'5');
        construct(charFreq,"seven",'v',ans,'7');
        construct(charFreq,"nine",'i',ans,'9');
        ans+=string(charFreq['o'],'1');
        sort(ans.begin(),ans.end());
        return(ans);
    }
};