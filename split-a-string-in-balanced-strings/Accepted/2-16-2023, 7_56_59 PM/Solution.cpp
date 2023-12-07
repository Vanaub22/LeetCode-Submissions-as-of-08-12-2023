// https://leetcode.com/problems/split-a-string-in-balanced-strings

class Solution {
public:
    int balancedStringSplit(string s) {
        int bal=0,l=0,r=0;
        for(char ch:s){
            if(ch=='L')
            l++;
            else
            r++;
            if(l!=0 && r!=0 && l==r){
            bal++;
            l=0;
            r=0;
            }
        }   
        return(bal);
    }
};