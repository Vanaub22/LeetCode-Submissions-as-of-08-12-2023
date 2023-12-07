// https://leetcode.com/problems/rearrange-spaces-between-words

class Solution {
public:
    string reorderSpaces(string text) {
        string word,res="";
        int n=0,space=0,eq;
        stringstream ss(text);
        while(ss>>word) n++;
        for(char c:text) if(c==' ') space++;
        eq=n>1?space/(n-1):space;
        ss.clear();
        ss.str(text);
        while(ss>>word) res+=(word+string(eq,' '));
        res=res.substr(0,res.length()-eq);
        return(res+string(space-((n-1)*eq),' '));
    }
};