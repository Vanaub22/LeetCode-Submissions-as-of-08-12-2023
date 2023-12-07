// https://leetcode.com/problems/find-the-duplicate-number

class Solution(object):
    def findDuplicate(self, nums):
        low,high=1,len(nums)-1
        while(low<=high):
            mid=low+(high-low)/2
            cnt=0
            for i in nums:
                if(i<=mid):
                    cnt+=1
            if(cnt<=mid):
                low=mid+1
            else:
                high=mid-1
        return low