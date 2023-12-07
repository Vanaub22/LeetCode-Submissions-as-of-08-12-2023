// https://leetcode.com/problems/gas-station

class Solution {
public:
    bool tryToComplete(int start, int n, vector<int>& gas, vector<int>& cost) {
        // fill at start station
        int tank=gas[start];
        // travel from start station to the end
        for(int i=start+1;i<n;i++) {
            tank-=cost[i-1];
            if(tank<0) return false;
            tank+=gas[i]; 
        }
        // travel from last station to first station
        tank-=cost[n-1];
        if(tank<0) return false;
        tank+=gas[0];
        // travel from first station to the start station
        for(int i=1;i<=start;i++) {
            tank-=cost[i-1];
            if(tank<0) return false;
            tank+=gas[i];
        }
        return true;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=cost.size();
        for(int start=0;start<n;start++) if(tryToComplete(start,n,gas,cost)) return start;
        return -1;
    }
};