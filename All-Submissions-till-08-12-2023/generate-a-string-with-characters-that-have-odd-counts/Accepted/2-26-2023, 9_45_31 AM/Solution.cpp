// https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts

class Solution {
public:
    string generateTheString(int n) {
        string result="";
        for(int i=1;i<n;i++)
        result+='x';
        return((result.length()%2!=0)?(result+'y'):(result+'x')); 
    }
};