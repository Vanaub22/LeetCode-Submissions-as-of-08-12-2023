// https://leetcode.com/problems/largest-3-same-digit-number-in-string

class Solution {
    public String largestGoodInteger(String num) {
        int i,start=-1,n=num.length();
        for(i=0;i<n-2;) {
            if(num.charAt(i)==num.charAt(i+1) && num.charAt(i)==num.charAt(i+2)) {
                // Pattern matches
                if(start==-1) start=i; // First Match
                else { // Any other match (Checking if it is better match)
                    if(num.charAt(i)>num.charAt(start)) start=i;
                }
                i+=3;
            }
            else i++;
        }
        System.out.println(start);
        return start==-1?"":num.substring(start,start+3);
    }
}