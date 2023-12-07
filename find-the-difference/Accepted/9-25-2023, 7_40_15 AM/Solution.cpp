// https://leetcode.com/problems/find-the-difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_sum=0,t_sum=0;
        for(char ch:s) s_sum+=ch;
        for(char ch:t) t_sum+=ch;
        return (char)(t_sum-s_sum);
    }
};