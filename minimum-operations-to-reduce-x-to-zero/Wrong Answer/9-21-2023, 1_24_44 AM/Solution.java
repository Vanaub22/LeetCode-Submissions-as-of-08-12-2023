// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero

class Solution {
    // using the sliding window approach
    public int minOperations(int[] nums, int x) {
        // we need to find the maximum length subarray with sum = (total - x)
        // this result would give us the minimum deletions from both ends
        int left=0,right=0,n=nums.length,reqdSum=findSum(nums,n)-x,subArraySum=0,maxLength=-1;
        while(right<n){
            while(left<=right && subArraySum>reqdSum) subArraySum-=nums[left++];
            if(subArraySum==reqdSum) maxLength=Math.max(maxLength,right-left);
            subArraySum+=nums[right++];
        }
        return maxLength==-1?-1:n-maxLength;
    }
    int findSum(int[] nums, int n) {
        int total=0;
        for(int i=0;i<n;i++) total+=nums[i];
        return total;         
    }
}