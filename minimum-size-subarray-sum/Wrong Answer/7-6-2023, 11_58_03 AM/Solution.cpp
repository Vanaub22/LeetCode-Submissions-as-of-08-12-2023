// https://leetcode.com/problems/minimum-size-subarray-sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),left=0,right=0,sum=0,minLength=n;
        for(;right<n;right++){
            sum+=nums[right];
            while(sum>target){
                sum-=nums[left];
                left++;
            }
            if(sum>=target) minLength=min(minLength,right-left+1);
        }
        return(minLength==n?0:minLength);
    }
};