// https://leetcode.com/problems/count-hills-and-valleys-in-an-array

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        if(nums[i+1]==nums[i]){
            nums.erase(nums.begin()+i+1);
            i--;
        }
        if(nums.size()<2)
        return(0);
        int hill_valley=0;
        for(int i=1;i<nums.size()-1;i++)
        if((nums[i]<nums[i-1]&&nums[i]<nums[i+1])||(nums[i]>nums[i-1]&&nums[i]>nums[i+1]))
        hill_valley++;
        return(hill_valley);
    }
};