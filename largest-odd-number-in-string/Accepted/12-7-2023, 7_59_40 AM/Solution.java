// https://leetcode.com/problems/largest-odd-number-in-string

class Solution {
    public String largestOddNumber(String num) {
        // Traverse backwards to find the last odd digit and then concatenate the rest
        int n=num.length();
        String oddNum="";
        for(int i=n-1;i>=0;i--)
        if((num.charAt(i)-'0')%2!=0 || oddNum!="") oddNum=num.charAt(i)+oddNum;
        return oddNum;
    }
}