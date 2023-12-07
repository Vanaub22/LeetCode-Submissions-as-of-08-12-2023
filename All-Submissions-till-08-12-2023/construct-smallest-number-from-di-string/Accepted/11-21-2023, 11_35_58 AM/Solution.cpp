// https://leetcode.com/problems/construct-smallest-number-from-di-string

class Solution {
public:
    string smallestNumber(string pattern) {
        int n=pattern.length();
        stack<int> stk;
        string smallestNumber="";
        for(int i=0;i<=n;i++) {
            stk.push(i+1);
            // Reversing in between 'I's, otherwise proceeding in order
            if(i==n || pattern[i]=='I') {
                while(!stk.empty()) {
                    smallestNumber+=to_string(stk.top());
                    stk.pop();
                }
            }
        }
        return smallestNumber;
    }
};