// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start=0,end,maxSubLength=INT_MIN,zeroes=0,n=nums.size();
        for(int end=0;end<n;end++){
            if(nums[end]==0) zeroes++;
            while(zeroes>1){
                if(nums[start]==0) zeroes--;
                start++;
            }
            maxSubLength=max(end-start,maxSubLength);
        }
        return maxSubLength;
    }
};