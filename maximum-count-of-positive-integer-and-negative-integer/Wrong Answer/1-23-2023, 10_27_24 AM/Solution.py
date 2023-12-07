// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer

class Solution(object):
    def maximumCount(self, nums):
        first_zero=-1
        first_pos=-1
        if(nums[-1]<0 or nums[0]>0 or (nums[0]==0 and nums[-1]==0)):
            return(len(nums))
        else:
            for i in range(len(nums)):
                if((nums[i])==0):
                    first_zero=i
                    break
            for i in range(len(nums)):
                if(nums[i]>0):
                    first_pos=i
                    break
            if(first_zero==-1):
                return(max(first_pos,len(nums)-first_pos))
            else:
                return(max(first_zero,len(nums)-first_pos))