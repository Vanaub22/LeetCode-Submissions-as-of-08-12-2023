// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero

class Solution {
public:
    // using sliding window approach
    int minOperations(vector<int>& nums, int x) {
        int left=0,right=0,maxLength=-1,n=nums.size(),reqdSum=accumulate(nums.begin(),nums.end(),0)-x,subArraySum=0;
        while(right<n){
            while(subArraySum<reqdSum && right<n) subArraySum+=nums[right++];
            if(subArraySum==reqdSum) maxLength=max(maxLength,right-left);
            subArraySum-=nums[left++];
        }
        return maxLength==-1?-1:n-maxLength;
    }
};