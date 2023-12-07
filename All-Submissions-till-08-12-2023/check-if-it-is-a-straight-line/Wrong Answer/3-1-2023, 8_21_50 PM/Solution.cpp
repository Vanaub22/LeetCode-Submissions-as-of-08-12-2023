// https://leetcode.com/problems/check-if-it-is-a-straight-line

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& pts) {
     double new_slope,slope=(double)((double)(pts[1][1]-pts[0][1])/(double)(pts[1][0]-pts[0][0]));
     for(int i=1;i<pts.size();i++){
         new_slope=(double)((double)(pts[i][1]-pts[0][1])/(double)(pts[i][0]-pts[0][0]));
     if(slope!=new_slope && new_slope!=0)
     return(false);
     }
     return(true);   
    }
};