// https://leetcode.com/problems/minimum-size-subarray-sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),left=0,right=0,sum=0,minLength=INT_MAX;
        for(;right<n;right++){
            sum+=nums[right];
            while(sum>=target){
                minLength=min(minLength,right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        return(minLength==INT_MAX?0:minLength);
    }
};