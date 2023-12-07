// https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero

class Solution {
public:
    vector<int> sumZero(int n) {
      vector<int> unique;
      for(int i=1;i<n;i++)
      unique.push_back(i);
      unique.push_back((-1)*accumulate(unique.begin(),unique.end(),0));
      return(unique);
    }
};