// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    int modifiedBinSearch(vector<int>& nums,int target, bool findLowest) {
        int start=0,end=nums.size()-1,mid=start+(end-start)/2,pos=-1;
        while(start<=end) {
            if(nums[mid]==target) {
                pos=mid;
                if(findLowest) end=mid-1;
                else start=mid+1;
            }
            else if(target<nums[mid]) end=mid-1;
            else start=mid+1;
            mid=start+(end-start)/2;
        }
        return pos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {modifiedBinSearch(nums,target,true),modifiedBinSearch(nums,target,false)};
    }
};