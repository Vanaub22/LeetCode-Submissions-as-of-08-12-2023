// https://leetcode.com/problems/maximum-score-after-splitting-a-string

class Solution {
public:
    int maxScore(string s) {
        int zeroes=0,max_score,right,left=(s[0]=='0')?1:0;
        for(char c:s)
        if(c=='0')
        zeroes++;
        right=(s[0]=='1')?(s.length()-zeroes-1):(s.length()-zeroes);
        max_score=left+right;
        for(int i=1;i<s.length()-1;i++){
        if(s[i]=='0')
        left++;
        else
        right--;
        max_score=max(max_score,left+right);
        }
        return(max_score);
    }
};