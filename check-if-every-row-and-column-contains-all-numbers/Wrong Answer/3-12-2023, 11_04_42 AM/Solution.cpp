// https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers

class Solution {
public:
    bool complete(unordered_map<int,int>& umap, int size){
        for(int i=1;i<=size;i++)
        if(umap[i]!=2)
        return(false);
        return(true);
    }
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_map<int,int> umap;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                umap[matrix[i][j]]++;
                umap[matrix[j][i]]++;
            }
            if(!complete(umap,matrix.size()))
            return(false);
            umap.clear();
        }
        return(true);
    }
};