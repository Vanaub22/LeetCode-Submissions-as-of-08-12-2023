// https://leetcode.com/problems/destination-city

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> umap;
        string destination="";
        for(int i=0;i<paths.size();i++)
        umap[paths[i][0]]++;
        for(int i=0;i<paths.size();i++)
        if(umap[paths[i][1]]==0)
        destination=paths[i][1];
        return(destination);
    }
};