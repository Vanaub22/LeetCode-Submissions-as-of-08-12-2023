// https://leetcode.com/problems/power-of-four

class Solution(object):
    def isPowerOfFour(self, n):
        return('1' not in str(bin(n))[3:] and len(str(bin(n)))%2!=0)