// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        string final="";
        stk.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(!stk.empty() && s[i]==stk.top())
            stk.pop();
            else
            stk.push(s[i]);
        }
        while(!stk.empty()){
            final+=stk.top();
            stk.pop();
        }
        reverse(final.begin(),final.end());
        return(final);
    }
};