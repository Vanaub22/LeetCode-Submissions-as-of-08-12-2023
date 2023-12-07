// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid

class Solution {
public:
    // Using Simple Stack Implementation
    int minAddToMakeValid(string s) {
       // There is no mention of strings that start with ')' and hence invalid (Not Handling Edge Case)
       stack<char> stk;
       for(char c:s) {
           if(stk.empty() || !(stk.top()=='(' && c==')')) stk.push(c);
           else if(stk.top()=='(' && c==')') stk.pop();
       }
       return stk.size(); // The remaining members need to be adjusted by one more bracket each
    }
};