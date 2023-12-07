// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int climbStairs(int n) {
        //recursive solution gives TLE, trying memoization
        if(n==1||n==2)
        return(n);
        array<int,46> ways={0};
        ways[1]=1;
        ways[2]=2;
        for(int i=3;i<=n;i++)
        ways[i]=ways[i-1]+ways[i-2];
        return(ways[n-1]+ways[n-2]);
    }
};