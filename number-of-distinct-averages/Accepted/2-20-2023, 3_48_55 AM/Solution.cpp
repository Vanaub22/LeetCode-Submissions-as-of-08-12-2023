// https://leetcode.com/problems/number-of-distinct-averages

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
      unordered_map<int,int> umap;
      sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size()/2;i++)
      umap[nums[i]+nums[nums.size()-1-i]]++;
      return(umap.size());  
    }
};