// https://leetcode.com/problems/n-th-tribonacci-number

class Solution {
public:
    int tribonacci(int n) {
      vector<int> T;
      T.push_back(0);
      for(int i=1;i<=37;i++)
      T.push_back((i==1||i==2)?(1):(T[i-1]+T[i-2]+T[i-3]));  
      return(T[n]);
    }
};