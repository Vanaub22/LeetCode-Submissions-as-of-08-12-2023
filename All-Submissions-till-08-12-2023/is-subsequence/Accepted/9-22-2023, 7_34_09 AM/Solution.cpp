// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int t_pos=0,n=t.size();
        for(char c:s){
            while(t[t_pos]!=c && t_pos<n) t_pos++;
            if(t[t_pos]!=c) return false;
            t_pos++;
        }
        return true;
    }
};