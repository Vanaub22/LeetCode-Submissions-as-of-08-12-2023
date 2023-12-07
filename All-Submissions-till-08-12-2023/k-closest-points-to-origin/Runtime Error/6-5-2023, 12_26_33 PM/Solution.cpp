// https://leetcode.com/problems/k-closest-points-to-origin

class Solution {
public:
    struct point{
        vector<int> coordinates;
        double dist;
    };
    static bool comp(point& a, point& b){
        return(a.dist<=b.dist);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        vector<point> pts(n);
        for(int i=0;i<n;i++){
            pts[i].coordinates=points[i];
            pts[i].dist=sqrt(pow(points[i][0],2)+pow(points[i][1],2));
        }
        sort(pts.begin(),pts.end(),comp);
        points.clear();
        for(int i=0;i<k;i++)
        points.push_back(pts[i].coordinates);
        return(points);
    }
};