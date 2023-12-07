// https://leetcode.com/problems/occurrences-after-bigram

class Solution(object):
    def findOcurrences(self, text, first, second):
        L=list(text.split())
        thirds=[]
        for i in range(len(L)-2):
            if(L[i]==first and L[i+1]==second):
                thirds.append(L[i+2])
        return(thirds)

