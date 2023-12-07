// https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones

class Solution {
    public boolean checkOnesSegment(String s) {
        for(int i=0;i<s.length()-1;i++)
        if(s.charAt(i)=='1' && s.charAt(i+1)=='1')
        return(true);
        return(s.length()==1?true:false);
    }
}