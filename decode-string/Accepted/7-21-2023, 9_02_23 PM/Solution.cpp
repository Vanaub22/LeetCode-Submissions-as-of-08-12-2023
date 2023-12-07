// https://leetcode.com/problems/decode-string

class Solution {
public:
    string decodeString(string s) {
        stack<char> stk;
        string decoded="";
        for(char c:s){
            string str="",multi="";
            int num=0,idx=0;
            if(c!=']') stk.push(c);
            else{
                while(!stk.empty() && isalpha(stk.top())){
                    str+=stk.top();
                    stk.pop();
                }
                reverse(str.begin(),str.end());
                stk.pop();
                while(!stk.empty() && isdigit(stk.top())){
                    num+=(stk.top()-'0')*pow(10,idx);
                    idx++;
                    stk.pop();
                }
                for(int i=0;i<num;i++) multi+=str;
                for(int i=0;i<multi.length();i++) stk.push(multi[i]);
            }
        }
        while(!stk.empty()){
            decoded+=stk.top();
            stk.pop();
        }
        reverse(decoded.begin(),decoded.end());
        return decoded;
    }
};