// https://leetcode.com/problems/distance-between-bus-stops

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int fwd_dist=0,rev_dist;
        if(start>destination)
        swap(start,destination);
        for(int i=start;i<destination;i++)
        fwd_dist+=distance[i];
        rev_dist=accumulate(distance.begin(),distance.end(),0)-fwd_dist;

        return((fwd_dist<rev_dist)?(fwd_dist):(rev_dist));  
    }
};