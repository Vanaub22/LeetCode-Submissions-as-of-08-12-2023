// https://leetcode.com/problems/candy

class Solution {
public:
    int candy(vector<int>& ratings) {
      int n=ratings.size(),candies=0;
      vector<int> candy(n,1);
      for(int i=0;i<n-1;i++) if(ratings[i]>ratings[i+1]) candy[i]++;
      for(int i=n-1;i>0;i--) if(ratings[i]>ratings[i-1]) candy[i]=max(candy[i-1]+1,candy[i]);
      for(int c:candy) candies+=c;
      return candies;
    }
};