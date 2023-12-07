// https://leetcode.com/problems/find-lucky-integer-in-an-array

class Solution {
public:
    int findLucky(vector<int>& arr) {
      int lucky=-1;
      unordered_map<int,int> umap;
      for(int i:arr)
      umap[i]++;
      for(auto it:umap)
      if(it.first==it.second)
      lucky=max(lucky,it.first);
      return(lucky);  
    }
};