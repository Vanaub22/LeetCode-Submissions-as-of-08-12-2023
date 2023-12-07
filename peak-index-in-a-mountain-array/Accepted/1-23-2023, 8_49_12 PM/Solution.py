// https://leetcode.com/problems/peak-index-in-a-mountain-array

class Solution(object):
    def peakIndexInMountainArray(self, arr):
        for i in range(1,len(arr)):
            if(max(arr[i],arr[i-1],arr[i+1])==arr[i]):
                return(i)