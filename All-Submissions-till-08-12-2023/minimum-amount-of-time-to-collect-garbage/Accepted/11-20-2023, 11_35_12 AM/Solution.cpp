// https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // Each garbage truck will start at house 0 and travel only as far as the last house containing that type of garbage
        int n=garbage.size(),house=0,prefSum[n];
        memset(prefSum,0,sizeof(prefSum));
        // Storing time taken to travel to each house from house 0 using a prefix sum array
        for(int i=0;i<n-1;i++) prefSum[i+1]=prefSum[i]+travel[i];
        return timeToPick(garbage,prefSum,'G',n)+timeToPick(garbage,prefSum,'M',n)+timeToPick(garbage,prefSum,'P',n);
    }
    int timeToPick(vector<string>& garbage, int prefSum[], char garbageType, int n) {
        int t=0,lastHouse=-1;
        for(int i=0;i<n;i++) for(char g:garbage[i]) if(g==garbageType) {
            lastHouse=i;
            t++;
        }
        if(lastHouse!=-1) t+=prefSum[lastHouse]; // Last house visited by this truck
        return t;
    }
};