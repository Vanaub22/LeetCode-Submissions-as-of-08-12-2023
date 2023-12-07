// https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_map<int,int> umap;
        for(int i=0;i<matrix.size();i++)
        for(int j=0;j<matrix.size();j++)
        umap[matrix[i][j]]++;
        for(auto it:umap)
        if(it.second!=matrix.size())
        return(false);
        return(true);      
    }
};