// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid

class Solution {
public:
    // Using Simple Stack Implementation
    int minAddToMakeValid(string s) {
       stack<char> stk;
       for(char c:s) if(stk.empty() || !(stk.top()=='(' && c==')')) stk.push(c);
       else if(stk.top()=='(' && c==')') stk.pop(); // Valid Component
       return stk.size(); // The remaining members need to be adjusted by one more bracket each
    }
};