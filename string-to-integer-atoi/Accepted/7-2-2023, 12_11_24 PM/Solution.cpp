// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string s) {
        int n=s.size(),idx=0;
        double num=0;
        bool positive=true;
        while(idx<n)
        if(s[idx]==' ') idx++;
        else break;
        if(s[idx]=='-' || s[idx]=='+'){
            positive=s[idx]=='-'?false:positive;
            idx++;
        }
        while(idx<n){
            if(s[idx]<='9' && s[idx]>='0')
            num=(num*10)+(s[idx]-'0');
            else break;
            idx++;
        }
        if(!positive) num*=(-1);
        if(num>INT_MAX) return(INT_MAX);
        if(num<INT_MIN) return(INT_MIN);
        return((int)num);
    }
};