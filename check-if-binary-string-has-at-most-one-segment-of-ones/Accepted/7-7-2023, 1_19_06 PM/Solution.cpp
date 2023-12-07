// https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones

class Solution {
public:
    bool checkOnesSegment(string s) {
        char state=s[0];
        int transitions=0;
        for(char c:s)
        if(c!=state){
            state=c;
            transitions++;
        }
        return(transitions<=1);
    }
};