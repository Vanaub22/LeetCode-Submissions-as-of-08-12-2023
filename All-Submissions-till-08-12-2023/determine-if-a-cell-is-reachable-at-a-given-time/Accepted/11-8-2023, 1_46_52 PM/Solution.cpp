// https://leetcode.com/problems/determine-if-a-cell-is-reachable-at-a-given-time

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy) return t!=1; // If t=1 then we can move to the adjacent cell but we cannot move back in time
        int x_dist=abs(sx-fx),y_dist=abs(sy-fy);
        return t>=max(x_dist,y_dist);
    }
};