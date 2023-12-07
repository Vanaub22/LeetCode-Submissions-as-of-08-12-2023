// https://leetcode.com/problems/truncate-sentence

class Solution {
public:
    string truncateSentence(string s, int k) {
        int i;
        for(i=1;i<s.length();i++){
            if(s[i]==' ')
            k--;
            if(k==0)
            break;
        }   
        return(s.substr(0,i));
    }
};