// https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int n=points.size(),maxWidth=-1;
        for(int i=0;i<n-1;i++) maxWidth=max(maxWidth,abs(points[i][0]-points[i+1][0]));
        return maxWidth;
    }
};