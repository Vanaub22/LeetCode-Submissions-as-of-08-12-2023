// https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // All garbage trucks will start at house 0 
        // However, they will only go as far as the last house containing that type of garbage
        // Using a prefix sum array to store time taken to reach each house from house 0
        int n=garbage.size(),house=0,prefSum[n];
        memset(prefSum,0,sizeof(prefSum));
        for(int i=0;i<n-1;i++) prefSum[i+1]=prefSum[i]+travel[i];
        // cout<<"The prefSum array is as follows: ";
        // for(int i:prefSum) cout<<i<<" ";
        // cout<<endl;
        return timeToPick(garbage,prefSum,'P',n)+timeToPick(garbage,prefSum,'G',n)+timeToPick(garbage,prefSum,'M',n);
    }
    int timeToPick(vector<string>& garbage, int prefSum[], char garbageType, int n) {
        int t=0,lastHouse=-1;
        for(int i=0;i<n;i++) {
            for(char g:garbage[i]) if(g==garbageType) {
                lastHouse=i;
                t++;
            }
        }
        if(lastHouse!=-1) t+=prefSum[lastHouse];
        // cout<<"Time taken for picking "<<garbageType<<" garbage is "<<t<<endl;
        return t;
    }
};