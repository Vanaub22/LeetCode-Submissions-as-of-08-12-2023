// https://leetcode.com/problems/count-number-of-homogenous-substrings

#define MOD ((int)1e9+7)
class Solution {
public:
    int countHomogenous(string s) {
        int subLength=1,n=s.length(),homogenous=1;
        for(int i=1;i<n;i++) {
            if(s[i]==s[i-1]) subLength++;
            else subLength=1; // Reset to 1
            // A n-letter homogenous substring has n homogenous substrings within
            // 'aaa' has 'a', 'aa' and 'aaa' within it 
            homogenous=(homogenous+subLength)%MOD;
        }
        return homogenous;
    }
};