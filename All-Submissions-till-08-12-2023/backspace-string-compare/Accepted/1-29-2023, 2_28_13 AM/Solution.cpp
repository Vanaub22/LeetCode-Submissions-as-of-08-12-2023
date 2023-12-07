// https://leetcode.com/problems/backspace-string-compare

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk1,stk2;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(stk1.empty())
                continue;
                else
                stk1.pop();
            }
            else
            stk1.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(stk2.empty())
                continue;
                else
                stk2.pop();
            }
            else
            stk2.push(t[i]);
        }
        return(stk1==stk2);
    }
};