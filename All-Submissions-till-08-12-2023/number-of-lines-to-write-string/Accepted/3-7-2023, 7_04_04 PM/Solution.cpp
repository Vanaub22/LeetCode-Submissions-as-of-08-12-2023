// https://leetcode.com/problems/number-of-lines-to-write-string

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int line_width=0,lines=1,n=0;
        while(n<s.size()){
            n++;
            line_width+=widths[s[n-1]-'a'];
            if(line_width>100){
                line_width=widths[s[n-1]-'a'];
                lines++;
                }
            }
        return {lines,line_width};
    }
};