// https://leetcode.com/problems/search-in-rotated-sorted-array-ii

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size(),low=0,high=n-1,mid=low+(high-low)/2;
        while(low<high){
            if(nums[mid]==target) return true;
            if(nums[mid]==nums[high] && nums[mid]==nums[low]){
                high--;
                low--;
            }
            if(nums[low]<=nums[mid]){
                if(target<nums[low] || target>nums[mid]) low=mid+1;
                else high=mid-1;
            }
            else if(nums[mid]<=nums[high]){
                if(target>nums[high] || target<nums[mid]) high=mid-1;
                else low=mid+1;
            }
            mid=low+(high-low)/2;
        }
        return false;;
    }
};