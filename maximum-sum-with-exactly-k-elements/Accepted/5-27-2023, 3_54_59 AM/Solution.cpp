// https://leetcode.com/problems/maximum-sum-with-exactly-k-elements

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        return((*max_element(nums.begin(),nums.end())*k)+(k*(k-1)/2));
    }
};