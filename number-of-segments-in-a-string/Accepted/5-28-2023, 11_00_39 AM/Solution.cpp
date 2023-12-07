// https://leetcode.com/problems/number-of-segments-in-a-string

class Solution {
public:
    int countSegments(string s) {
        int segments=0;
        string word;
        stringstream ss(s);
        while(ss>>word)
        segments++;
        return(segments);
    }
};