// https://leetcode.com/problems/check-if-n-and-its-double-exist

class Solution(object):
    def checkIfExist(self, arr):
        lst=[]
        for i in arr:
            if(float(i*2)or float(i/2) in lst):
                return(True)
            lst.append(i)
        return(False)