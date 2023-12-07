// https://leetcode.com/problems/spiral-matrix-iv

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int[][] spiralMatrix(int m, int n, ListNode head) {
        int mat[][]=new int[m][n];
        for(int i=0;i<m;i++) Arrays.fill(mat[i],-1); // Filling matrix with -1's
        ListNode temp=head;
        int r=0,c=0,rlim=m-1,clim=n-1;
        // Implementing labelled breaking
        Outer: 
        while(temp!=null) {
            // Move right
            for(int i=r;i<=clim;i++) {
                if(temp==null) break Outer;
                mat[r][i]=temp.val;
                temp=temp.next;
            }
            r++; // The uppermost row has been visited
            // Move Down
            for(int i=r;i<=rlim;i++) {
                if(temp==null) break Outer;
                mat[i][clim]=temp.val;
                temp=temp.next;
            }
            clim--; // The rightmost column has been visited
            // Move Left
            for(int i=clim;i>=c;i--) {
                if(temp==null) break Outer;
                mat[rlim][i]=temp.val;
                temp=temp.next;
            }
            rlim--; // The lowermost row has been visited
            // Move Up
            for(int i=rlim;i>=r;i--) {
                if(temp==null) break Outer;
                mat[i][c]=temp.val;
                temp=temp.next;
            }
            c++; // The leftmost column has been visited
        }
        return mat;
    }
}