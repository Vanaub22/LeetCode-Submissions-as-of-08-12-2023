// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    int findFirst(vector<int>& nums,int target){
        int start=0,end=nums.size()-1,mid=start+(end-start)/2,pos=-1;
        while(start<=end){
            if(nums[mid]==target){
                pos=mid;
                end=mid-1;
            }
            else if(target<nums[mid])
            end=mid-1;
            else
            start=mid+1;
            mid=start+(end-start)/2;
        }
        return(pos);
    }
    int findLast(vector<int>& nums,int target){
        int start=0,end=nums.size()-1,mid=start+(end-start)/2,pos=-1;
        while(start<=end){
            if(nums[mid]==target){
                pos=mid;
                start=mid+1;
            }
            else if(target<nums[mid])
            end=mid-1;
            else
            start=mid+1;
            mid=start+(end-start)/2;
        }
        return(pos);
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return{findFirst(nums,target),findLast(nums,target)};
    }
};