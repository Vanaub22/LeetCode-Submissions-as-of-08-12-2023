// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int> sorted_nums=nums;
       map<int,int> mp;
       sort(sorted_nums.begin(),sorted_nums.end());
       for(int i=nums.size()-1;i>=0;i--)
       mp[sorted_nums[i]]=i;
       for(int i=nums.size()-1;i>=0;i--)
       nums[i]=mp[nums[i]];
       return(nums);
    }
};