// https://leetcode.com/problems/minimum-time-visiting-all-points

class Solution {
    // For optimal time, we will move diagonally first and reach the reqd. row / column
    // After that we will move horizontally / vertically to reach the exact point
    public int minTimeToVisitAllPoints(int[][] points) {
        int curr[]=points[0],time=0;
        for(int point[]:points) {
            int dx=Math.abs(curr[0]-point[0]),dy=Math.abs(curr[1]-point[1]);
            time+=Math.max(dx,dy);
            curr=point;
        }
        return time;
    }
}