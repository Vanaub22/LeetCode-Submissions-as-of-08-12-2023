// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(),start=0,end=n-1,mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]>nums[0])
            start=mid+1;
            else
            end=mid-1;
        }
        return(mid==n-1||mid==0?min(nums[0],nums[n-1]):nums[mid]);
    }
};