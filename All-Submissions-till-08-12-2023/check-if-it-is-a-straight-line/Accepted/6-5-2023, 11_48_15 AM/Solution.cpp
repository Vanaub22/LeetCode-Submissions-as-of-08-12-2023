// https://leetcode.com/problems/check-if-it-is-a-straight-line

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& pts) {
        double new_slope,slope=((double)(pts[1][1]-pts[0][1])/(double)(pts[1][0]-pts[0][0]));
        if(pts[0][0]==0 && pts[1][0]==0){
            for(int i=2;i<pts.size();i++)
            if(pts[i][0]!=0)
            return(false);
            return(true);
        }
        for(int i=1;i<pts.size();i++){
            new_slope=((double)(pts[i][1]-pts[0][1])/(double)(pts[i][0]-pts[0][0]));
            if(slope!=new_slope)
            return(false);
        }
        return(true);   
    }
};