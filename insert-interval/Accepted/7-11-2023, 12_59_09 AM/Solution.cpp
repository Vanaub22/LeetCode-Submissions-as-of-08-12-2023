// https://leetcode.com/problems/insert-interval

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        int n=intervals.size();
        if(n==1) return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            int L=ans.size();
            if(ans[L-1][1]>=intervals[i][0]) ans[L-1][1]=max(intervals[i][1],ans[L-1][1]);
            else ans.push_back(intervals[i]);
        }
        return ans;
    }
};