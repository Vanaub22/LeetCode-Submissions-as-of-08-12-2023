// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix

class Solution(object):
    def countNegatives(self, grid):
        neg=0
        for lst in grid:
            for i in range(len(lst)-1,-1,-1):
                if(lst[i]>=0):
                    break
                else:
                    neg+=1
        return(neg)

