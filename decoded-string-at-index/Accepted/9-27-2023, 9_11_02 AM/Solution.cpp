// https://leetcode.com/problems/decoded-string-at-index

class Solution {
public:
    string decodeAtIndex(string s, int k) {
        int n=s.length();
        long long len=0;
        string val;
        for(char c:s) if(isdigit(c)) len*=(c-'0');
        else len++;
        for(int i=n-1;i>=0;--i) {
            k%=len;
            if((k==0 || k==len) && isalpha(s[i])) { 
                val.push_back(s[i]);
                break;
            }
            if(isdigit(s[i])) len/=(s[i]-'0');
            else len--;
        }
        return val;
    }
};