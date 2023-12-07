// https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank

class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // After collision, the position of two ants are just swapped.
        // The 1st ant will be in the position that the 2nd ant would have been had there been no collision and vice versa.
        // Therefore, we can simply find out the maximum time for the L-R moving and the R-L moving ants to fall off the plank.
        int maxTime=-1;
        for(int rightMoving:right) maxTime=max(n-rightMoving,maxTime);
        for(int leftMoving:left) maxTime=max(leftMoving,maxTime);
        return maxTime;
    }
};