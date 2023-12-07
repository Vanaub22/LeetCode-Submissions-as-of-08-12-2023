// https://leetcode.com/problems/thousand-separator

class Solution {
public:
    string thousandSeparator(int n) {
        if(n<=999)
        return(to_string(n));
        string num=to_string(n);
        vector<string> before;
        for(int i=num.size()-3;i>=0;i-=3)
        num.insert(num.begin()+i,'.');
        // before.push_back(num.substr(num.size()-i,3));
        // string new_str="";
        // string bef=num.substr(0,(num.size()-(before.size()*3)));
        // for(int i=0;i<before.size();i++)
        // new_str=("."+before[i])+new_str;
        // return(bef+new_str);
        if(num[0]=='.')
        num=num.substr(1,num.size()-1);
        return(num);
    }
};