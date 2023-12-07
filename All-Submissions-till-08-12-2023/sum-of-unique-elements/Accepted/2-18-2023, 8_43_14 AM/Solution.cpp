// https://leetcode.com/problems/sum-of-unique-elements

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
      unordered_map<int,int> umap;
      int sum=0;
      for(int i:nums)
      umap[i]++;
      for(auto it:umap)
      if(it.second==1)
      sum+=it.first;
      return(sum); 
    }
};