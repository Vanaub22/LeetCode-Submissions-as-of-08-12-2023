// https://leetcode.com/problems/find-peak-element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=0,end=nums.size()-1,mid=start+(end-start)/2;
        if(end==0) return(end);
        if(end==1) return(nums[start]>=nums[end]?start:end);
        if(nums[start]>nums[start+1]) return(start);
        if(nums[end]>nums[end-1]) return(end);
        while(start<end){
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]) return(mid);
            else if(nums[mid-1]>nums[mid] && nums[mid]>nums[mid+1]) end=mid-1;
            else if(nums[mid-1]<nums[mid] && nums[mid]<nums[mid+1]) start=mid+1;
            else end=mid+1;
            mid=start+(end-start)/2;
        }
        return -1;
    }
};