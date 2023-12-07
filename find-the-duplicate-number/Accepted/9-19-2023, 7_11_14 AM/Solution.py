// https://leetcode.com/problems/find-the-duplicate-number

class Solution(object):
    # solving using constant space
    def findDuplicate(self, nums):
        low,high=1,len(nums)-1
        while(low<=high):
            mid=low+(high-low)/2
            cnt=0
            # counting no. of elements less than or equal to mid
            for i in nums:
                if(i<=mid):
                    cnt+=1
            # technically, mid should have mid no. of elements lesser than or equal to mid
            if(cnt<=mid):
                low=mid+1
            else:
                high=mid-1
        return low