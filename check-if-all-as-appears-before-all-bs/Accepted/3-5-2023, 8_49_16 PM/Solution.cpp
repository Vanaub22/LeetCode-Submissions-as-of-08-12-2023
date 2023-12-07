// https://leetcode.com/problems/check-if-all-as-appears-before-all-bs

class Solution {
public:
    bool checkString(string s) {
        int b_index;
        for(int i=0;i<s.length();i++)
        if(s[i]=='b'){
        b_index=i;
        break;
        }
        for(int i=b_index+1;i<s.length();i++)
        if(s[i]=='a')
        return(false);
        return(true);
    }
};