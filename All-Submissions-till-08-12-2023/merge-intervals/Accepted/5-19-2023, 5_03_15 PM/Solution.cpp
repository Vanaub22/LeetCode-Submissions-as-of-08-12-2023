// https://leetcode.com/problems/merge-intervals

class Solution {
public:
    static bool comp(vector<int>& a,vector<int>& b){
        return(a[0]==b[0]?a[1]<b[1]:a[0]<=b[0]);
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i-1][1]>=intervals[i][0]){
                intervals[i-1][1]=intervals[i-1][1]>=intervals[i][1]?intervals[i-1][1]:intervals[i][1];
                intervals.erase(intervals.begin()+i);
                i--;
            }
        }
        return(intervals);
    }
};