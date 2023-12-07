// https://leetcode.com/problems/largest-odd-number-in-string

class Solution {
    public String largestOddNumber(String num) {
        // Traverse backwards to find the last odd digit and then concatenate the rest
        int i,n=num.length();
        String oddNum="";
        for(i=n-1;i>=0;i--) if((num.charAt(i)-'0')%2!=0) break;
        return num.substring(0,i+1);
    }
}