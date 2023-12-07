// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero

class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        # we need to find the maximum length subarray with sum = (total - x)
        # this result would give us the minimum deletions from both ends
        n,reqdSum,left,right,subArraySum,maxLength=len(nums),sum(nums)-x,0,0,0,-1
        while(right<n):
            subArraySum+=nums[right]
            right+=1
            while(left<=right and subArraySum>reqdSum):
                subArraySum-=nums[left]
                left+=1
            if(subArraySum==reqdSum):
                maxLength=max(maxLength,right-left)
        return -1 if maxLength==-1 else n-maxLength        