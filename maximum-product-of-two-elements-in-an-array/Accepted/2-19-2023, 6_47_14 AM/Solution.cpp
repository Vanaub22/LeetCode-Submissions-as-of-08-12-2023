// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array

class Solution {
public:
    int maxProduct(vector<int>& nums) {
     for(int i=0;i<nums.size();i++)
     --nums[i];
     sort(nums.begin(),nums.end(),greater<int>());
     return(nums[0]*nums[1]); 
    }
};