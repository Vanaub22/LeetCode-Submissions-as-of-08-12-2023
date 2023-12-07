// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        vector<int> kWeakest;
        vector<pair<int,int>> powerIndex;
        for(int i=0;i<n;i++){
            int power=0;
            for(int j:mat[i]) if(j==1) power++;
            else break;
            powerIndex.push_back({power,i});
        }
        sort(powerIndex.begin(),powerIndex.end());
        for(int i=0;i<k;i++) kWeakest.push_back(powerIndex[i].second);
        return kWeakest;
    }
};