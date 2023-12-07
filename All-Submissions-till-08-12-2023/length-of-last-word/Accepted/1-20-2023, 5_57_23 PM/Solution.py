// https://leetcode.com/problems/length-of-last-word

class Solution(object):
    def lengthOfLastWord(self, s):
        l=[]
        l=s.split()
        return(len(l[-1]))
