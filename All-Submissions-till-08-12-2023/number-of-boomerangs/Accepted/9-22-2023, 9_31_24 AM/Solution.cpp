// https://leetcode.com/problems/number-of-boomerangs

class Solution {
public:
    int euclidean_distance(vector<int>& p1, vector<int>& p2){
        return pow(p1[0]-p2[0],2)+pow(p1[1]-p2[1],2);
    }
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n=points.size(),boomerangs=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int> dist_freq;
            for(int j=0;j<n;j++) if(j==i) continue;
            else dist_freq[euclidean_distance(points[i],points[j])]++;
            for(auto it:dist_freq) boomerangs+=it.second*(it.second-1);
        }
        return boomerangs;
    }
};