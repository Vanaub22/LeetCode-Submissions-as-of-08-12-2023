// https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color

class Solution {
    public boolean winnerOfGame(String colours) {
        int a_groups=0,b_groups=0,n=colours.length();
        for(int i=1;i<n-1;i++)
        if(colours.charAt(i-1)==colours.charAt(i) && colours.charAt(i)==colours.charAt(i+1)) {
            if(colours.charAt(i)=='A') a_groups++;
            else b_groups++;
        }
        return a_groups>b_groups;
    }
}