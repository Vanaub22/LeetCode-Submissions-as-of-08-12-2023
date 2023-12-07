// https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int low=0,high=nums.size()-1,pairs=0;
        while(low<high)
        if(nums[low]+nums[high]<target){
            pairs+=high-low;
            low++;
        }
        else high--;
        return pairs;
    }
};