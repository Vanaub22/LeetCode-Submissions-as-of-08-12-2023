// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int climbStairs(int n) {
        //recursive solution gives TLE, trying memoization
        array<int,46> ways={0};
        ways[1]=1,ways[2]=2;
        for(int i=45;i>=3;i--)
        ways[i]=ways[i-1]+ways[i-2];
        return(ways[n]);
    }
};