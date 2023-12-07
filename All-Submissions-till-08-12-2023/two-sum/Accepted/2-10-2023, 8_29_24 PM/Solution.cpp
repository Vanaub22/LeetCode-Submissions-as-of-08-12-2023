// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> umap;
       for(int i=0;i<nums.size();i++)
       umap[nums[i]]=i;
       for(int i=0;i<nums.size();i++)
       if(umap[target-nums[i]]!=i && umap[target-nums[i]]!=NULL)
       return{umap[target-nums[i]],i};
       return{-1,-1};
    }
};