// https://leetcode.com/problems/minimum-time-difference

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size(),minDiff=INT_MAX;
        vector<int> minuteFormat;
        for(string timePoint:timePoints) minuteFormat.push_back(stoi(timePoint.substr(0,2))*60+stoi(timePoint.substr(3,2)));
        sort(minuteFormat.begin(),minuteFormat.end(),greater<int>());
        for(int i=0;i<n-1;i++){
            int diff=min(minuteFormat[i]-minuteFormat[i+1],1440-(minuteFormat[i]-minuteFormat[i+1]));
            if(diff<minDiff) minDiff=diff;
        }
        return minDiff;
    }
};