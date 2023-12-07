// https://leetcode.com/problems/maximum-difference-between-increasing-elements

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
      int max_diff=-1;
      for(int i=0;i<nums.size()-1;i++)
      for(int j=i+1;j<nums.size();j++)
      if(nums[j]-nums[i]>max_diff)
      max_diff=nums[j]-nums[i];
      return((max_diff==0)?(-1):(max_diff));
    }
};