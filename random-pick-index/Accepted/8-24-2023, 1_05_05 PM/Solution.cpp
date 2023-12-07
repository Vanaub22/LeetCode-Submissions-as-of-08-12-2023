// https://leetcode.com/problems/random-pick-index

class Solution {
public:
    unordered_map<int,vector<int>> indices;
    Solution(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++) this->indices[nums[i]].push_back(i);
    }
    int pick(int target) {
        return indices[target][rand()%indices[target].size()];       
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */