// https://leetcode.com/problems/replace-elements-in-an-array

class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int n=nums.size();
        unordered_map<int,int> hasIndex;
        for(int i=0;i<n;i++) hasIndex[nums[i]]=i;
        for(vector<int> operation:operations){
            int idx=hasIndex[operation[0]];
            nums[idx]=operation[1];
            hasIndex.erase(operation[0]);
            hasIndex[operation[1]]=idx;
        }
        return nums;
    }
};