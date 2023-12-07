// https://leetcode.com/problems/single-element-in-a-sorted-array

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1 || nums[0]!=nums[1]) return nums[0];
        int low=0,high=nums.size()-1,mid=low+(high-low)/2;
        if(nums[high]!=nums[high-1]) return nums[high];
        while(low<high){
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
            else if(nums[mid]!=nums[mid-1]){
                if(mid%2==0) low=mid+1;
                else high=mid-1;
            }
            else{
                if(mid%2==0) high=mid-1;
                else low=mid;
            }
            mid=low+(high-low)/2;
        }
        return nums[mid];
    }
};