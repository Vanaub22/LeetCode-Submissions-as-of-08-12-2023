// https://leetcode.com/problems/removing-stars-from-a-string

class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        for(char c:s){
            if(c=='*' && !stk.empty())
            stk.pop();
            else
            stk.push(c);
        }
        s="";
        while(!stk.empty()){
            s+=stk.top();
            stk.pop();
        }
        reverse(s.begin(),s.end());
        return(s);
    }
};