// https://leetcode.com/problems/find-the-duplicate-number

class Solution:
    # solving using constant extra space
    def findDuplicate(self, nums: List[int]) -> int:
        low,high=1,len(nums)-1
        while(low<=high):
            mid=int(low+(high-low)/2)
            cnt=0
            # counting no. of elements lesser than or equal to mid
            for i in nums:
                if(i<=mid):
                    cnt+=1
            # technically, mid should have mid no. of elements lesser than or equal to mid
            if(cnt<=mid):
                low=mid+1
            else:
                high=mid-1
        return low
        