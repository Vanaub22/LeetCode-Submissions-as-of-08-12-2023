// https://leetcode.com/problems/rotate-string

class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.length();i++){
            s=s[s.length()-1]+s.substr(0,s.length()-1);
            if(s==goal)
            return(true);
            }
        return(false);
    }
};