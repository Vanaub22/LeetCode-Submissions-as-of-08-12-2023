// https://leetcode.com/problems/non-overlapping-intervals

class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        return(a[1]<b[1]);
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int remove=0,leastEndTime=INT_MIN;
        sort(intervals.begin(),intervals.end(),comp);
        for(vector<int> interval:intervals)
        if(interval[0]>=leastEndTime) leastEndTime=interval[1];
        else remove++;
        return remove;
    }
};