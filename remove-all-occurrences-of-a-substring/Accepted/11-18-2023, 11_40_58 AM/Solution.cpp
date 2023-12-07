// https://leetcode.com/problems/remove-all-occurrences-of-a-substring

class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=part.length();
        stack<char> stk;
        for(char c:s) {
            stk.push(c);
            // c matches the last character of part => Could be a matching pattern
            if(c==part[n-1]) {
                stack<char> temp=stk;
                string check="";
                // Popping out and checking pattern
                while(!temp.empty() && check.size()<n) {
                    check+=temp.top();
                    temp.pop();
                }
                reverse(check.begin(),check.end());
                // If pattern matches, it will be popped out of the stack
                if(check==part) stk=temp;
            }
        }
        s="";
        while(!stk.empty()) {
            s+=stk.top();
            stk.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};