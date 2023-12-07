// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char c:s){
            if(c=='('||c=='{'||c=='[')
            stk.push(c);
            else{
                if(!stk.empty() & ((stk.top()=='(' && c==')') || (stk.top()=='{' && c=='}') || (stk.top()=='[' && c==']')))
                stk.pop();
                else
                stk.push(c);
            }
        }
        return(stk.empty());
    }
};