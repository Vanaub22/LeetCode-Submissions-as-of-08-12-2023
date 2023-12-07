// https://leetcode.com/problems/minimum-time-visiting-all-points

class Solution {
    public int minTimeToVisitAllPoints(int[][] points) {
        int start[]=points[0],time=0;
        for(int point[]:points) time+=travelTime(start,point);
        return time;
    }
    // For optimal time, we will move diagonally first and reach the reqd. row / column
    // After that we will move horizontally / vertically to reach the exact point
    int travelTime(int start[], int point[]) {
        int t=0;
        // Move diagonally first
        while(start[0]!=point[0] && start[1]!=point[1]) {
            if(start[0]<point[0]) start[0]++;
            else start[0]--;
            if(start[1]<point[1]) start[1]++;
            else start[1]--;
            t++;
        }
        // We will have to move to move horizontally / vertically for the rest of the path
        return t+Math.abs(start[0]-point[0])+Math.abs(start[1]-point[1]);
    }
}