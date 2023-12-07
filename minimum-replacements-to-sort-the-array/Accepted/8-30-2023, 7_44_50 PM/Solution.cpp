// https://leetcode.com/problems/minimum-replacements-to-sort-the-array

class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n=nums.size();
        long long replacements=0;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<=nums[i+1]) continue;
            int portions=nums[i]%nums[i+1]==0?nums[i]/nums[i+1]:(nums[i]/nums[i+1])+1;
            nums[i]/=portions;
            replacements+=portions-1;
        }
        return replacements;
    }
};