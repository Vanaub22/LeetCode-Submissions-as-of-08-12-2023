// https://leetcode.com/problems/shuffle-the-array

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> new_nums;
    for(int i=0;i<n;i++){
    new_nums.push_back(nums[i]);
    new_nums.push_back(nums[n+i]);
    }
    return(new_nums);
    }
};