// https://leetcode.com/problems/minimum-time-visiting-all-points

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n=points.size(),time=0;
        for(int i=0;i<n-1;i++){
            vector<int> first=points[i],second=points[i+1];
            if(first[0]==second[0] || first[1]==second[1]) time+=abs(first[0]-second[0])+abs(first[1]-second[1]);
            else time+=max(abs(first[0]-second[0]),abs(first[1]-second[1]));
        }
        return time;
    }
};