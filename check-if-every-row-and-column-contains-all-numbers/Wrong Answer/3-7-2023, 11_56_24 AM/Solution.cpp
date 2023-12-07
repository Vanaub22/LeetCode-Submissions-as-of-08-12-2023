// https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        umap[matrix[i][j]]++;
        for(auto it:umap)
        if(it.second!=n)
        return(false);
        return(true);      
    }
};