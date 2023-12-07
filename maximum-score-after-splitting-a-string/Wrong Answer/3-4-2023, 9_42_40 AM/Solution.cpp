// https://leetcode.com/problems/maximum-score-after-splitting-a-string

class Solution {
public:
    int maxScore(string s) {
        int zeroes=0,max_score=INT_MIN,right,left=0;
        for(char c:s)
        if(c=='0')
        zeroes++;
        right=s.length()-zeroes;
        for(char c:s){
        if(c=='0')
        left++;
        else
        right--;
        max_score=max(max_score,left+right);
        }
        return(max_score);
    }
};