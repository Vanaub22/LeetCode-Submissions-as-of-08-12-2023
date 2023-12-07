// https://leetcode.com/problems/removing-stars-from-a-string

class Solution {
public:
    // Simple Stack Implementation
    string removeStars(string s) {
        stack<char> stk;
        for(char c:s) if(c=='*') stk.pop(); // Mentioned: Operation always Possible
        else stk.push(c);
        s="";
        while(!stk.empty()) {
            s+=stk.top();
            stk.pop();
        }
        reverse(s.begin(),s.end()); // Reversing to obtain the correct result
        return s;
    }
};