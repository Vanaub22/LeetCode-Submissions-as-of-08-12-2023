// https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>> merged;
        int i=0,j=0;
        while(i<a.size() && j<b.size()){
            if(a[i][0]==b[j][0])
            merged.push_back({a[i][0],a[i++][1]+b[j++][1]});
            else if(a[i][0]<b[j][0])
            merged.push_back(a[i++]);
            else
            merged.push_back(b[j++]);
        }
        while(i<a.size())
        merged.push_back(a[i++]);
        while(j<b.size())
        merged.push_back(b[j++]);
        return(merged);
    }
};