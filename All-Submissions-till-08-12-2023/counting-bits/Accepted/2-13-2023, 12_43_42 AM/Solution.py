// https://leetcode.com/problems/counting-bits

class Solution(object):
    def countBits(self, n):
        L=[]
        for i in range(n+1):
            char_n=str(bin(i))
            occ=0
            for ch in char_n:
                if(ch=="1"):
                    occ+=1
            L.append(occ)
        return(L)
        1