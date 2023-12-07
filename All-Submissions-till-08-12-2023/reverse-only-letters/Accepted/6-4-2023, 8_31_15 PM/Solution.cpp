// https://leetcode.com/problems/reverse-only-letters

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int fwd=0,rev=s.size()-1;
        while(fwd<rev)
        if(!isalpha(s[fwd]) && isalpha(s[rev]))
        fwd++;
        else if(isalpha(s[fwd]) && !isalpha(s[rev]))
        rev--;
        else{
            if(isalpha(s[fwd]) && isalpha(s[rev]))
            swap(s[fwd],s[rev]);
            fwd++;
            rev--;
        }
        return(s);
    }
};