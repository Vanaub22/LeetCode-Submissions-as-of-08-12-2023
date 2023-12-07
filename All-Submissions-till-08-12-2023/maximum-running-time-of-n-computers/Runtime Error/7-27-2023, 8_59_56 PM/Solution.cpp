// https://leetcode.com/problems/maximum-running-time-of-n-computers

class Solution {
public:
    long long maxRunTime(int computers, vector<int>& batteries) {
        int n=batteries.size(),powerLeft=0;
        vector<int> inUse;
        sort(batteries.begin(),batteries.end());
        for(int i=0;i<n;i++)
        if(i<n-computers) powerLeft+=batteries[i];
        else inUse.push_back(batteries[i]);
        for(int i=0;i<computers-1;i++){
            if(powerLeft<(i+1)*(inUse[i+1]-inUse[i])) return inUse[i]+powerLeft/(i+1);
            powerLeft-=(i+1)*(inUse[i+1]-inUse[i]);
        }
        return inUse[computers-1]+powerLeft/computers;
    }
};