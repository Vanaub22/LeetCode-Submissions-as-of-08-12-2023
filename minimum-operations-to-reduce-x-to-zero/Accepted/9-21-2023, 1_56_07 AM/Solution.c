// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero

// using the sliding window approach
int findSum(int*,int);
int minOperations(int* nums, int numsSize, int x){
    // we need to find the maximum length subarray with sum = (total - x)
    // this result would give us the minimum deletions from both ends
    int left=0,right=0,maxLength=INT_MIN,reqdSum=findSum(nums,numsSize)-x,subArraySum=0;
    while(right<numsSize){
        subArraySum+=nums[right++];
        while(subArraySum>reqdSum && left<right) subArraySum-=nums[left++];
        if(subArraySum==reqdSum) maxLength=maxLength>right-left?maxLength:right-left;
    }
    return maxLength==INT_MIN?-1:numsSize-maxLength;
}
int findSum(int* nums, int numsSize){
    int total=0,i;
    for(i=0;i<numsSize;i++) total+=nums[i];
    return total;
}