// https://leetcode.com/problems/buddy-strings

class Solution {
public:
    string swapPos(string str, int a, int b){
        swap(str[a],str[b]);
        return(str);
    }
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length())
        return(false);
        for(int i=0;i<s.length()-1;i++)
        for(int j=i+1;j<s.length();j++)
        if(goal==swapPos(s,i,j))
        return(true);
        return(false);
    }
};