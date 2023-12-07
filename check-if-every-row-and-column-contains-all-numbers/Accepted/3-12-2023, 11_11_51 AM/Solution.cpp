// https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers

class Solution {
public:
    bool complete(unordered_map<int,int>& umap, int size){
        for(int i=1;i<=size;i++)
        if(umap[i]!=1)
        return(false);
        return(true);
    }
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_map<int,int> umap1,umap2;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                umap1[matrix[i][j]]++;
                umap2[matrix[j][i]]++;
            }
            if(!(complete(umap1,matrix.size())&&complete(umap2,matrix.size())))
            return(false);
            umap1.clear();
            umap2.clear();
        }
        return(true);
    }
};