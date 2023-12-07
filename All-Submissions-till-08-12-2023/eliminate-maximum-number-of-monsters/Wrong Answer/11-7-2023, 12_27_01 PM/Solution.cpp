// https://leetcode.com/problems/eliminate-maximum-number-of-monsters

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float> arrivals;
        int n=dist.size(),kills=0;
        for(int i=0;i<n;i++) arrivals.emplace_back((float)dist[i]/speed[i]);
        for(int i=0;i<n;i++) {
            if(arrivals[i]<=i) break;
            kills++;
        }
        return kills;
    }
};