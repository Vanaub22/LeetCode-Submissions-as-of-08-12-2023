// https://leetcode.com/problems/thousand-separator

class Solution {
public:
    string thousandSeparator(int n) {
        if(n<=999)
        return(to_string(n));
        string num=to_string(n),before=num.substr(0,num.size()-3),after=num.substr(num.size()-3,3);
        string new_str=before+"."+after;
        return(new_str);
    }
};