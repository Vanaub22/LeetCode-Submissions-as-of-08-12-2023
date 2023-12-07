// https://leetcode.com/problems/k-closest-points-to-origin

class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        int dist_a=pow(a[0],2)+pow(a[1],2),dist_b=pow(b[0],2)+pow(b[1],2);
        return dist_a<dist_b;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(),points.end(),comp);
        return(vector<vector<int>>(points.begin(),points.begin()+k));
    }
};