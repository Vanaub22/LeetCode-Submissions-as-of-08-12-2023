// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> umap;
       vector<int> ans;
       for(int i=0;i<nums.size();i++)
       umap[nums[i]]=i;
       for(int i=0;i<nums.size();i++)
       if(umap[target-nums[i]]!=i && umap[target-nums[i]]!=NULL){
           ans.push_back(umap[target-nums[i]]);
           ans.push_back(i);
           break;
       }
       return(ans);
    }
};