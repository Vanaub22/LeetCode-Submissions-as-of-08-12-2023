// https://leetcode.com/problems/to-lower-case

class Solution {
public:
    string toLowerCase(string s) {
        // for(int i=0;i<s.size();i++)
        // s[i]=tolower(s[i]);
        transform(s.begin(),s.end(),s.begin(),::tolower);
        return(s);
    }
};