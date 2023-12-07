// https://leetcode.com/problems/count-lattice-points-inside-a-circle

class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        set<pair<int,int>> lattice_points;
        for(auto& circle:circles) {
            int x=circle[0],y=circle[1],radius=circle[2];
            for(int i=x-radius;i<=x+radius;i++)
            for(int j=y-radius;j<=y+radius;j++)
            if(pow(i-x,2)+pow(j-y,2)<=pow(radius,2)) lattice_points.insert(make_pair(i,j));
        }
        return lattice_points.size();
    }
};