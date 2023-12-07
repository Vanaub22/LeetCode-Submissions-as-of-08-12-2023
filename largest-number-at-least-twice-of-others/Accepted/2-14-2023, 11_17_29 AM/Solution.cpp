// https://leetcode.com/problems/largest-number-at-least-twice-of-others

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        for(int i:nums){
            if(i>max/2 & i!=max)
            return(-1);
        }
        return(find(nums.begin(),nums.end(),max)-nums.begin());
    }
};