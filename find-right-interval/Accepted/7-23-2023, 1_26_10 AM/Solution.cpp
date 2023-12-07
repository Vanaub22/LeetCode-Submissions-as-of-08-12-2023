// https://leetcode.com/problems/find-right-interval

class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> rightIntervals;
        map<int,int> firstIndex;
        for(int i=0;i<intervals.size();i++) firstIndex[intervals[i][0]]=i;
        for(auto interval:intervals){
            auto it=firstIndex.lower_bound(interval[1]);
            if(it==firstIndex.end()) rightIntervals.push_back(-1);
            else rightIntervals.push_back(it->second);
        }
        return rightIntervals;
    }
};