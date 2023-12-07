// https://leetcode.com/problems/three-divisors

class Solution {
public:
    bool isThree(int n) {
      int div=2;
      if(n==1||n==2)
      return(false);
      for(int i=2;i<n;i++)
      if(n%i==0)
      div++;
      return(div==3);
    }
};