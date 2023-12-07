// https://leetcode.com/problems/zigzag-conversion

class Solution {
public:
    string convert(string s, int n) {
        if(s.length()<n||n<3>)
        return(s);
        vector<vector<char>> zigzagRows(n);
        bool flag=true;
        int row=-1;
        string output="";
        for(char c:s){
            row=flag?row+1:row-1;
            zigzagRows[row].push_back(c);
            if(row==0)
            flag=true;
            if(row==n-1)
            flag=false;
        }
        for(vector<char> row:zigzagRows){
            string rowSum="";
            for(char c:row)
            rowSum+=c;
            output+=rowSum;
        }
        return(output);
    }
};