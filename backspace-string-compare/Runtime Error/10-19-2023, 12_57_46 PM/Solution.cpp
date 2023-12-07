// https://leetcode.com/problems/backspace-string-compare

class Solution {
public:
    // To process the backspaces in the string and return the final string for comparison
    string process(string str) {
        stack<char> stk;
        for(char c:str) c=='#'?stk.pop():stk.push(c);
        string result="";
        while(!stk.empty()) {
            result+=stk.top();
            stk.pop();
        }
        return result; // There's no need to reverse becuase we only need to return true or false
    }
    bool backspaceCompare(string s, string t) {
        return process(s)==process(t);
    }
};