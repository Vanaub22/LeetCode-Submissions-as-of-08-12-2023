// https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int n=startTime.size(),count=0;
        for(int i=0;i<n;i++) if(queryTime>=startTime[i] && queryTime<=endTime[i]) count++;
        return count;
    }
};