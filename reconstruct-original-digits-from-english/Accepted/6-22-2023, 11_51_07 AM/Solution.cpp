// https://leetcode.com/problems/reconstruct-original-digits-from-english

class Solution {
public:
    void create(unordered_map<char,int>& charFreq, string num, char dist, string& ans, char digit){
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
        create(charFreq,"zero",'z',ans,'0');
        create(charFreq,"two",'w',ans,'2');
        create(charFreq,"four",'u',ans,'4');
        create(charFreq,"six",'x',ans,'6');
        create(charFreq,"eight",'g',ans,'8');
        create(charFreq,"three",'t',ans,'3');
        create(charFreq,"five",'f',ans,'5');
        create(charFreq,"seven",'v',ans,'7');
        create(charFreq,"nine",'i',ans,'9');
        ans+=string(charFreq['o'],'1');
        sort(ans.begin(),ans.end());
        return(ans);
    }
};