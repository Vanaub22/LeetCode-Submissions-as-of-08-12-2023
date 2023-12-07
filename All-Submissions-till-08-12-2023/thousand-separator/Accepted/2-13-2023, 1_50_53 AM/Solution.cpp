// https://leetcode.com/problems/thousand-separator

class Solution {
public:
    string thousandSeparator(int n) {
        if(n<=999)
        return(to_string(n));
        string num=to_string(n);
        for(int i=num.size()-3;i>=0;i-=3)
        num.insert(num.begin()+i,'.');
        if(num[0]=='.')
        num=num.substr(1,num.size()-1);
        return(num);
    }
};