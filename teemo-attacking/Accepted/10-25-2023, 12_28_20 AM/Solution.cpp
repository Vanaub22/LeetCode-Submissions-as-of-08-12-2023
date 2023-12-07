// https://leetcode.com/problems/teemo-attacking

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size(),poisonedTime=0;
        if(n==0) return 0;
        for(int i=0;i<n-1;i++) poisonedTime+=min(timeSeries[i+1]-timeSeries[i],duration);
        poisonedTime+=duration;
        return poisonedTime;
    }
};