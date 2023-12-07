// https://leetcode.com/problems/smallest-range-i

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maximum=*max_element(nums.begin(),nums.end()),minimum=*min_element(nums.begin(),nums.end());
        return((maximum-minimum-2*k)>=0?(maximum-minimum-2*k):0);
    }
};