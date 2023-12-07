// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            stk.push(s[i]);
            else{
                if(stk.empty()||(stk.top()=='(' && s[i]!=')')||(stk.top()=='{' && s[i]!='}')||(stk.top()=='[' && s[i]!=']'))
                return(false);
                stk.pop();
            }
        }
        return(stk.empty());
    }
};