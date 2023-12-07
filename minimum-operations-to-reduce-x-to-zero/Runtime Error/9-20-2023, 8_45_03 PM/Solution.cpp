// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero

class Solution {
public:
    // using sliding window approach
    int minOperations(vector<int>& nums, int x) {
        int left=0,right=0,maxLength=INT_MIN,n=nums.size(),reqdSum=accumulate(nums.begin(),nums.end(),0)-x,subArraySum=0;
        while(right<n){
            subArraySum+=nums[right++];
            while(subArraySum>reqdSum && left<=right) subArraySum-=nums[left++];
            if(subArraySum==reqdSum) maxLength=max(maxLength,right-left);
        }
        return maxLength==INT_MIN?-1:n-maxLength;
    }
};