// https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>> merged;
        int i=0,j=0,m=a.size(),n=b.size();
        while(i<m && j<n){
            if(a[i][0]==b[j][0])
            merged.push_back({a[i][0],a[i++][1]+b[j++][1]});
            else if(a[i][0]<b[j][0])
            merged.push_back(a[i++]);
            else
            merged.push_back(b[j++]);
        }
        while(i<m)
        merged.push_back(a[i++]);
        while(j<n)
        merged.push_back(b[j++]);
        return(merged);
    }
};