// https://leetcode.com/problems/n-th-tribonacci-number

class Solution {
public:
    int tribonacci(int n) {
      if(n==0)
      return(0);
      else
      return((n==1||n==2)?(1):(tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3)));  
    }
};