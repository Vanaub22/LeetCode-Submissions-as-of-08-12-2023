// https://leetcode.com/problems/find-the-difference

class Solution {
    public char findTheDifference(String s, String t) {
        int s_sum=0,t_sum=0,m=s.length(),n=t.length();
        for(int i=0;i<n;i++){
            if(i<m) s_sum+=(int)s.charAt(i);
            t_sum+=(int)t.charAt(i);
        }
        return (char)(t_sum-s_sum);
    }
}