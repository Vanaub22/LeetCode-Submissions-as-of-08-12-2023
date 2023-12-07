// https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points

class Solution(object):
    def maxWidthOfVerticalArea(self, points):
        points.sort()
        maxWidth=-1
        for i in range(len(points)-1):
            maxWidth=max(maxWidth,abs(points[i][0]-points[i+1][0]))
        return maxWidth