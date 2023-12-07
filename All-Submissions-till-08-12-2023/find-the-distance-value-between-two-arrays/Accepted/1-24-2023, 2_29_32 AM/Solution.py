// https://leetcode.com/problems/find-the-distance-value-between-two-arrays

class Solution(object):
    def findTheDistanceValue(self, arr1, arr2, d):
        dist=0
        for i in arr1:
            flag=0
            for j in arr2:
                if(abs(i-j)<=d and flag==0):
                    flag=1
                    dist+=1
        return(len(arr1)-dist)