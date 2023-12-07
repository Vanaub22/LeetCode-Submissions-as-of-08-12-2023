// https://leetcode.com/problems/hamming-distance

class Solution {
public:
    int hammingDistance(int x, int y) {
      vector<int> x_bin,y_bin;
      int hamming_distance=0;
      while(x>0 || y>0){
          y_bin.push_back(y%2);
          x_bin.push_back(x%2);
          x/=2;
          y/=2;
      }  
      reverse(x_bin.begin(),x_bin.end());
      reverse(y_bin.begin(),y_bin.end());
      for(int i=0;i<x_bin.size();i++)
      if(x_bin[i]!=y_bin[i])
      hamming_distance++;
      return(hamming_distance);
    }
};