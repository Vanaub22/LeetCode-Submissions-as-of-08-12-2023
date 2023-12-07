// https://leetcode.com/problems/delete-columns-to-make-sorted

class Solution {
    public int minDeletionSize(String[] strs) {
        int m=strs.length,n=strs[0].length(),deletions=0;
        for(int i=0;i<n;i++) {
            char threshold=strs[0].charAt(i);
            boolean delCol=false;
            for(int j=0;j<m;j++)
            if(strs[j].charAt(i)>=threshold) threshold=strs[j].charAt(i);
            else {
                delCol=true;
                break;
            }
            if(delCol) deletions++;
        }
        return deletions;
    }
}